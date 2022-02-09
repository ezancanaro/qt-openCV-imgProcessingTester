#ifndef OPTIONSMAPPER_H
#define OPTIONSMAPPER_H
#include <string>
#include <unordered_map>

class optionsMapper
{
public:
    optionsMapper();

    std::string generateJson(std::unordered_map<std::string,std::string> optionsMap);

};

#endif // OPTIONSMAPPER_H
