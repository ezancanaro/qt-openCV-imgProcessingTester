#include "customsobelthresholdoptions.h"

customSobelThresholdOptions::customSobelThresholdOptions()
{

    this->maxVal=255;
    this->thresholdVal=30;
    this->applyThresh=true;
    this->kernelToUse=1;

    this->kernelTypes["Sobel"]=0;
    this->kernelTypes["Scharr"]=1;
}

std::unordered_map<std::string,std::string> customSobelThresholdOptions::getOptionsMapping(){
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["maxVal"]=this->maxVal;
    optionsMap["thresholdVal"]=this->thresholdVal;
    optionsMap["applyThresh"]=this->applyThresh;
    optionsMap["kernelToUse"]=this->kernelToUse;
    return optionsMap;

}
