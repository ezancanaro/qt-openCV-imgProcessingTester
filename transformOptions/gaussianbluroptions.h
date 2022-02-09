#ifndef GAUSSIANBLUROPTIONS_H
#define GAUSSIANBLUROPTIONS_H
#include <opencv2/imgproc/imgproc.hpp>

#include <unordered_map>
#include "optionsMapBuilder.h"
#include "transformoptions.h"

class gaussianBlurOptions : public transformOptions
{
public:

    int kernelSizeX;
    int kernelSizeY;
    double sigmaX;
    double sigmaY;
    int borderType;

    bool grayScaleImage = true;

    std::unordered_map<std::string,int> possibleBorderTypes;

    gaussianBlurOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // GAUSSIANBLUROPTIONS_H
