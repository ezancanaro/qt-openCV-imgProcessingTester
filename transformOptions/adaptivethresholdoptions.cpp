#include "adaptivethresholdoptions.h"


adaptiveThresholdOptions::adaptiveThresholdOptions()
{
    this->constant = 2;
    this->blockSize = 5;
    this->thresholdType = cv::THRESH_BINARY_INV;
    this->adaptiveMethod = cv::ADAPTIVE_THRESH_GAUSSIAN_C;
    this->maxValue = 255;

    this->thresholdTypes = optionsMapBuilder::getThresholdOptionsMap();
    this->adaptiveTypes = optionsMapBuilder::getAdaptiveThresholdOptionsMap();
}

using namespace std;
unordered_map<string,string>  adaptiveThresholdOptions::getOptionsMapping()
{
    unordered_map<string,string> optionsMap;
    optionsMap["constant"]=this->constant;
    optionsMap["blockSize"]=this->constant;
    optionsMap["thresholdType"]=this->constant;
    optionsMap["adaptiveMethod"]=this->constant;
    optionsMap["maxValue"]=this->constant;

    return optionsMap;
}
