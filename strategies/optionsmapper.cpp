#include "optionsmapper.h"

optionsMapper::optionsMapper()
{

}

std::__cxx11::string optionsMapper::generateJson(std::unordered_map<std::__cxx11::string, std::__cxx11::string> optionsMap)
{
    std::stringstream ss;
    ss << "{";
    if(!optionsMap.empty()){
        auto iterator = optionsMap.begin();
        ss << iterator->first << ": " << iterator->second;
        iterator++;
        for(iterator; iterator != optionsMap.end(); iterator++){
            ss << ",\n";
            ss << iterator->first << ": " << iterator->second;
        }
    }
    ss << "}";
}
