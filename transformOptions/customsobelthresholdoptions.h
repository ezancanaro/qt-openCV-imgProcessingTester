#ifndef CUSTOMSOBELTHRESHOLDOPTIONS_H
#define CUSTOMSOBELTHRESHOLDOPTIONS_H

#include "optionsMapBuilder.h"
#include "transformoptions.h"

class customSobelThresholdOptions : public transformOptions
{
public:
    int thresholdVal;
    int maxVal;
    bool applyThresh;
    int kernelToUse;

    bool grayScaleImage = true;
    std::unordered_map<std::string,int> kernelTypes;

    customSobelThresholdOptions();
    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // CUSTOMSOBELTHRESHOLDOPTIONS_H
