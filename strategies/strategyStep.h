#ifndef OPTIONS_H
#define OPTIONS_H

#include <string>
#include <unordered_map>
#include <sstream>

class strategyStep
{
public:
    strategyStep(std::string name, std::unordered_map<std::string,std::string> options);
    std::string stepName;
    std::unordered_map<std::string,std::string> stepOptions;
    std::string generateJson();
};

#endif // OPTIONS_H
