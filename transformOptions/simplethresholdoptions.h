#ifndef SIMPLETHRESHOLDOPTIONS_H
#define SIMPLETHRESHOLDOPTIONS_H

#include "optionsMapBuilder.h"

class simpleThresholdOptions : public transformOptions
{
public:
    double thresholdVal;
    double maxVal;
    int thresholdType;

    bool grayScaleImage = true;

    std::unordered_map<std::string,int> thresholdTypes;
    simpleThresholdOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // SIMPLETHRESHOLDOPTIONS_H
