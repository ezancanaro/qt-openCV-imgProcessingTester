#include "gaussianbluroptions.h"



gaussianBlurOptions::gaussianBlurOptions()
{
//default values:
    this->kernelSizeX = 5;
    this->kernelSizeY = 5;
    this->sigmaX = 0;
    this->sigmaY = 0;
    this->borderType = 1;
    this->possibleBorderTypes = optionsMapBuilder::getBorderOptionsMap();

}

std::unordered_map<std::string, std::string> gaussianBlurOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["kernelSizeX"]=this->kernelSizeX;
    optionsMap["kernelSizeY"]=this->kernelSizeY;
    optionsMap["sigmaX"]=this->sigmaX;
    optionsMap["sigmaY"]=this->sigmaY;
    optionsMap["borderType"]=this->borderType;
    return optionsMap;
}


