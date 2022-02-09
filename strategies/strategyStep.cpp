#include "strategyStep.h"

strategyStep::strategyStep(std::string name, std::unordered_map<std::string,std::string> options)
{
    this->stepName = name;
    this->stepOptions = options;
}

std::string strategyStep::generateJson()
{
    std::stringstream ss;
    ss << "{";
    if(!this->stepOptions.empty()){
        auto iterator = this->stepOptions.begin();
        ss << iterator->first << ": " << iterator->second;

        for(iterator++ ; iterator != this->stepOptions.end(); iterator++){
            ss << ",\n";
            ss << iterator->first << ": " << iterator->second;
        }
    }
    ss << "}";
    return ss.str();

}
