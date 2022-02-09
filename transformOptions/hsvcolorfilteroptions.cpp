#include "hsvcolorfilteroptions.h"

hsvColorFilterOptions::hsvColorFilterOptions()
{

    this->hue_low = 0;
    this->hue_high = 255;
    this->saturation_low = 0;
    this->saturation_high = 255;
    this->value_low = 0;
    this->value_high = 255;

}

std::unordered_map<std::string, std::string> hsvColorFilterOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["hue_low"]=this->hue_low;
    optionsMap["hue_high"]=this->hue_high;
    optionsMap["saturation_low"]=this->saturation_low;
    optionsMap["saturation_high"]=this->saturation_high;
    optionsMap["value_low"]=this->value_low;
    optionsMap["vaule_high"]=this->value_high;
    return optionsMap;
}

