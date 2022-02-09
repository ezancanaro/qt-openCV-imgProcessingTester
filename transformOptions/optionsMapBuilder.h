#ifndef OPTIONSMAPBUILDER_H
#define OPTIONSMAPBUILDER_H

#include <unordered_map>
#include "openCVheaders.h"
#include "transformoptions.h"

class optionsMapBuilder : public transformOptions
{
public:
    optionsMapBuilder();

    static std::unordered_map<std::string,int> getBorderOptionsMap();
    static std::unordered_map<std::string,int> getThresholdOptionsMap();
     static std::unordered_map<std::string,int> getAdaptiveThresholdOptionsMap();


};

#endif // OPTIONSMAPBUILDER_H
