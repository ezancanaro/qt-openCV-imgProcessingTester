#ifndef IMAGESUBTRACTIONOPTIONS_H
#define IMAGESUBTRACTIONOPTIONS_H

#include "transformoptions.h"

#include <string>

class imageSubtractionOptions : public transformOptions
{
public:

    int depthType;
    std::string subMask;

    bool grayScaleImage = true;

    imageSubtractionOptions();
    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // IMAGESUBTRACTIONOPTIONS_H
