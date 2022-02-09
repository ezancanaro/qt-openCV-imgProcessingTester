#include "medianbluroptions.h"

medianBlurOptions::medianBlurOptions()
{
    this->appertureSize=5;
}

std::unordered_map<std::string, std::string> medianBlurOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["appertureSize"]=this->appertureSize;
    return optionsMap;
}
