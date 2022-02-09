#include "sobelderivativesoptions.h"

sobelDerivativesOptions::sobelDerivativesOptions()
{
    this->ddepth=CV_16S;
    this->kernelSize=3;
    this->scale=1;
    this->delta=0;
    this->borderType=cv::BORDER_DEFAULT;
    this->alpha=1;
    this->beta=0;
    this->weigthX=0.5;
    this->weigthY =0.5;
    this->gamma=0;

    this->borderTypes = optionsMapBuilder::getBorderOptionsMap();
}

std::unordered_map<std::string, std::string> sobelDerivativesOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["ddepth"]=this->ddepth;
    optionsMap["kernelSize"]=this->kernelSize;
    optionsMap["applyThresh"]=this->scale;
    optionsMap["kernelToUse"]=this->delta;
    optionsMap["kernelToUse"]=this->borderType;
    optionsMap["kernelToUse"]=this->alpha;
    optionsMap["kernelToUse"]=this->beta;
    optionsMap["kernelToUse"]=this->weigthX;
    optionsMap["kernelToUse"]=this->weigthY;
    optionsMap["kernelToUse"]=this->gamma;
    return optionsMap;
}
