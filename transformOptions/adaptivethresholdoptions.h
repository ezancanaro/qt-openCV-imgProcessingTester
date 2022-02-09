#ifndef ADAPTIVETHRESHOLDOPTIONS_H
#define ADAPTIVETHRESHOLDOPTIONS_H

#include "optionsMapBuilder.h"
#include "transformoptions.h"

class adaptiveThresholdOptions : public transformOptions
{
public:

    double maxValue = 255;
    int adaptiveMethod;//= cv::ADAPTIVE_THRESH_GAUSSIAN_C;
    int thresholdType;//= cv::THRESH_BINARY_INV/
    int blockSize = 5;
    double constant = 2;

    bool grayScaleImage = true;

    std::unordered_map<std::string,int> adaptiveTypes;
    std::unordered_map<std::string,int> thresholdTypes;
    adaptiveThresholdOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // ADAPTIVETHRESHOLDOPTIONS_H
