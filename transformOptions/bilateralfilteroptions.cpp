#include "bilateralfilteroptions.h"

bilateralFilterOptions::bilateralFilterOptions()
{
    this->neighbourhoodDiameter=9;
    this->sigmaColor=75;
    this->sigmaSpace=75;
}

std::unordered_map<std::string,std::string> bilateralFilterOptions::getOptionsMapping(){
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["neighbourhoodDiameter"] = this->neighbourhoodDiameter;
    optionsMap["sigmaColor"]=this->sigmaColor;
    optionsMap["sigmaSpace"]=this->sigmaSpace;
    return optionsMap;
}
