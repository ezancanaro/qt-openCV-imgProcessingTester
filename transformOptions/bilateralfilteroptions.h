#ifndef BILATERALFILTEROPTIONS_H
#define BILATERALFILTEROPTIONS_H

#include "transformoptions.h"



class bilateralFilterOptions : public transformOptions
{
public:

    int neighbourhoodDiameter;
    int sigmaColor;
    int sigmaSpace;
    bool grayScaleImage = true;
    bilateralFilterOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // BILATERALFILTEROPTIONS_H
