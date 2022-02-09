#ifndef MEDIANBLUROPTIONS_H
#define MEDIANBLUROPTIONS_H

#include "transformoptions.h"



class medianBlurOptions : public transformOptions
{
public:
    int appertureSize;

    bool grayScaleImage = true;

    medianBlurOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // MEDIANBLUROPTIONS_H
