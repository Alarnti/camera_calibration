#ifndef _CAMERA_CALIBRATION_SRC_DATASET_HPP_
#define _CAMERA_CALIBRATION_SRC_DATASET_HPP_

#include <string>

namespace CamCalib
{
    enum LR_IMAGE_READ
    {
        SEPARATE_L_R,
        ONE_IMAGE_TOP_DOWN
    };

    class Dataset
    {
    private:
        std::string path_dataset_;
        LR_IMAGE_READ read_type_;

    public:
        Dataset();
        Dataset(std::string &path_dataset, CamCalib::LR_IMAGE_READ &read_type);
    };

};

#endif // _CAMERA_CALIBRATION_SRC_DATASET_HPP_