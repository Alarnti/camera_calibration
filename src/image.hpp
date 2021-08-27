#ifndef _CAMERA_CALIBRATION_SRC_IMAGE_HPP_
#define _CAMERA_CALIBRATION_SRC_IMAGE_HPP_

#include <opencv2/opencv.hpp>

namespace CamCalib
{

    class Image
    {
    private:
        cv::Mat img_;

    public:
        Image();
        Image(const std::string &img_path);
        cv::Mat get_img();
    };
}

#endif // _CAMERA_CALIBRATION_SRC_IMAGE_HPP_