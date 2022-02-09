#include "imagesubtractionoptions.h"

imageSubtractionOptions::imageSubtractionOptions()
{

    this->depthType=-1;
    this->subMask="Mask image not implemented yet";
}

std::unordered_map<std::string, std::string> imageSubtractionOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["depthType"]=this->depthType;
    optionsMap["subMask"]=this->subMask;
    return optionsMap;
}

