#include "../lib/include/libscampi.h"
#include "../lib/src/scampi.cpp"

// a class fot kepping cable parameters
class CableRobotParams
{
  public:
    CableRobotParams(const double g_c, const double f_g): f_g_(f_g), g_c_(g_c) {}

    Eigen::Vector3d p1_, p2_, p3_, p4_;
    Eigen::Vector3d b1_, b2_, b3_, b4_;
    Eigen::Vector3d r_to_cog_;
    
    double g_c_, f_g_;
    void setPulleyPoses(Eigen::Vector3d p1, Eigen::Vector3d p2, Eigen::Vector3d p3, Eigen::Vector3d p4)
    {
      p1_ = p1;
      p2_ = p2;
      p3_ = p3;
      p4_ = p4;
    }
    void setEEAnchors(Eigen::Vector3d b1, Eigen::Vector3d b2, Eigen::Vector3d b3, Eigen::Vector3d b4)
    {
      b1_ = b1;
      b2_ = b2;
      b3_ = b3;
      b4_ = b4;
    }
    void setCog(Eigen::Vector3d r_to_cog)
    {
      r_to_cog_ = r_to_cog;
    }
};

// ****************************************** IK optimization *******************************************
// a function to modify parameters, invoke optimizer and harvest the result
std::vector<MatrixXd> IK_Factor_Graph_Optimization(CableRobotParams robot_params, 
                                                   Eigen::Matrix3d rot_init, 
                                                   Eigen::Vector3d p_platform)
{
    std::vector<MatrixXd> results_list;
    IKDataOut<double> ik_result;
    RobotParameters<double> params;
    //initilize the pulley locations
    params.pulleys.push_back(robot_params.p1_);
    params.pulleys.push_back(robot_params.p2_);
    params.pulleys.push_back(robot_params.p3_);
    params.pulleys.push_back(robot_params.p4_);
    params.r_to_cog = robot_params.r_to_cog_;

    //initilize cable attachement points
    params.ef_points.push_back(robot_params.b1_);
    params.ef_points.push_back(robot_params.b2_);
    params.ef_points.push_back(robot_params.b3_);
    params.ef_points.push_back(robot_params.b4_);
    params.g_c= robot_params.g_c_;
    params.f_g = robot_params.f_g_;

    ikSolver(params, rot_init, p_platform, &ik_result);

    //Extract The results and return them as a list of matrices to python
    results_list.push_back(ik_result.rot_platform);
    //Catenary cable lengths  
    int N = 4;

    VectorXd lc_cat(N);
    lc_cat << ik_result.lc_cat[0], ik_result.lc_cat[1], ik_result.lc_cat[2], ik_result.lc_cat[3];
    results_list.push_back(lc_cat);

    //Cable Forces
    MatrixXd cable_forces(2,N);
    for(int i=0; i<N; i++)
        cable_forces.col(i) =  ik_result.cable_forces[i];
    results_list.push_back(cable_forces);

    //Catenary parameters
    //C1
    MatrixXd c1_(1, N);
    for(int i=0; i<N; i++)
        c1_(0,i) = ik_result.c1[i];
    results_list.push_back(c1_);

    //C2
    MatrixXd c2_(1, N);
    for(int i=0; i<N; i++)
        c2_(0,i) = ik_result.c2[i];
    results_list.push_back(c2_);

    //body coordinates represented in the world frame
    MatrixXd b_in_w_(3,N);
    for(int i=0; i<N; i++)
        b_in_w_.col(i) =  ik_result.b_in_w[i];
    results_list.push_back(b_in_w_);

    return results_list;

}

// ****************************************** FK optimization *******************************************
// a function to modify parameters, invoke optimizer and harvest the result
std::vector<MatrixXd> FK_Factor_Graph_Optimization( CableRobotParams robot_params, 
                                                    std::vector<Eigen::Matrix<double, 4, 1>> cable_length_collection, 
                                                    std::vector<Eigen::Matrix<double, 4, 1>> IK_cable_length_collection, 
                                                    std::vector<Eigen::Matrix<double, 2, 1>> cable_forces_collection, 
                                                    std::vector<Eigen::Matrix<double, 3, 1>> p_platform_collection,
                                                    std::vector<Eigen::Matrix<double, 3, 3>> rot_init_platform_collection, 
                                                    std::vector<Eigen::Matrix<double, 3, 3>> delta_rot_platform_collection,
                                                    Eigen::Matrix<double, 4, 3> pulley_position_estimate,
                                                    std::vector<gtsam::Pose3> *Optimized_pose,
                                                    std::vector<gtsam::Pose3> *GT_pose)
{
    std::vector<MatrixXd> results_list;
    FKDataOut<double> fk_results;
    RobotParameters<double> params;
    //initilize the pulley locations
    params.pulleys.push_back(robot_params.p1_);
    params.pulleys.push_back(robot_params.p2_);
    params.pulleys.push_back(robot_params.p3_);
    params.pulleys.push_back(robot_params.p4_);
    params.r_to_cog = robot_params.r_to_cog_;

    //initilize cable attachement points
    params.ef_points.push_back(robot_params.b1_);
    params.ef_points.push_back(robot_params.b2_);
    params.ef_points.push_back(robot_params.b3_);
    params.ef_points.push_back(robot_params.b4_);
    params.g_c= robot_params.g_c_;
    params.f_g = robot_params.f_g_;
    std::vector<gtsam::Pose3> Optimized_pose_;
    std::vector<gtsam::Pose3> GT_pose_;
    fkSolver(params, cable_length_collection, IK_cable_length_collection, cable_forces_collection, 
             p_platform_collection, rot_init_platform_collection, delta_rot_platform_collection, 
             pulley_position_estimate, &Optimized_pose_, &GT_pose_, &fk_results);

    *Optimized_pose = Optimized_pose_;
    *GT_pose = GT_pose_;
    results_list.push_back(fk_results.pulley_result);

    return results_list;
}
