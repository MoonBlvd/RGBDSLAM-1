#ifndef CONSTANTS_H
#define CONSTANTS_H

#include <iostream>
#include <vector>

#include <opencv2/core/eigen.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/features2d/features2d.hpp>
#include <opencv2/nonfree/nonfree.hpp>
#include <opencv2/calib3d/calib3d.hpp>

#include <Eigen/Core>
#include <Eigen/Geometry>

/*
 *const double camera_factor = 1000.0;
 *const double camera_cx = 325.5;
 *const double camera_cy = 253.5;
 *const double camera_fx = 518.0;
 *const double camera_fy = 519.0;
 */

/*
 *const double camera_factor = 5000.0;
 *const double camera_cx = 325.1;
 *const double camera_cy = 249.7;
 *const double camera_fx = 520.9;
 *const double camera_fy = 521.0;
 */

struct frame_t{
    int id;
    cv::Mat rgb;
    cv::Mat depth;
    cv::Mat desp;
    std::vector<cv::KeyPoint> kp;
};

struct match_result_t{
    cv::Mat rvec;
    cv::Mat tvec;
    int inliers;
    int good_matches;
    int features;
};

struct camera_param_t{
    double scale;
    double cx;
    double cy;
    double fx;
    double fy;
};

typedef Eigen::Isometry3d tmat_t;

#endif
