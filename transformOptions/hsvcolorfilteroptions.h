#ifndef HSVCOLORFILTEROPTIONS_H
#define HSVCOLORFILTEROPTIONS_H

#include "transformoptions.h"

class hsvColorFilterOptions : public transformOptions
{
public:

    int hue_low;
    int hue_high;
    int saturation_low;
    int saturation_high;
    int value_low;
    int value_high;

    hsvColorFilterOptions();
    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // HSVCOLORFILTEROPTIONS_H
