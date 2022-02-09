#include "simplethresholdoptions.h"

simpleThresholdOptions::simpleThresholdOptions()
{
    this->thresholdVal=127;
    this->maxVal=225;
    this->thresholdType=cv::THRESH_BINARY_INV;

    this->thresholdTypes = optionsMapBuilder::getThresholdOptionsMap();
}

std::unordered_map<std::string, std::string> simpleThresholdOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["maxVal"]=this->maxVal;
    optionsMap["thresholdVal"]=this->thresholdVal;
    optionsMap["thresholdType"]=this->thresholdType;

    return optionsMap;
}


