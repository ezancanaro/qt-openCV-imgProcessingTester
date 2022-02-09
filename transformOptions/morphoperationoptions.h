#ifndef MORPHOPERATIONOPTIONS_H
#define MORPHOPERATIONOPTIONS_H

#include "transformoptions.h"

#include <unordered_map>
#include "openCVheaders.h"


class morphOperationOptions : public transformOptions
{
public:
    morphOperationOptions();

    int operation;
    //InputArray 	kernel,
    int kernelSizeX;
    int kernelSizeY;
    int anchorX;
    int anchorY;
    int iterations;
    int borderType;

    int kernelShape;
    cv::Mat kernel;

    bool grayScaleImage = true;

    std::unordered_map<std::string,int> borderTypes;
    std::unordered_map<std::string,int> operations;
    std::unordered_map<std::string,int> kernelShapes;
    void generateKernel();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();

};

#endif // MORPHOPERATIONOPTIONS_H
