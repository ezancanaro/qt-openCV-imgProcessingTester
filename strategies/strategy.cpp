#include "strategy.h"

strategy::strategy()
{

}

bool strategy::addOperation(std::string operation, transformOptions options)
{
    //.....
    this->strategySteps.push_back(strategyStep(operation,options.getOptionsMapping()));
    //this->strategySteps.emplace_back(operation,options.getOptionsMapping());
    return true;
}

bool strategy::removeLastStep()
{
    this->strategySteps.pop_back();
    return true;
}

bool strategy::addOperationInReverseOrder(std::string operation, transformOptions options)
{
    this->strategySteps.emplace_front(operation,options.getOptionsMapping());
    return true;
}

bool strategy::removeFirstStep()
{
    this->strategySteps.pop_front();
    return true;
}

std::string strategy::generateStepsJson(){

    std::stringstream stream;
    if(!this->strategySteps.empty()){
        auto iterator = this->strategySteps.begin();
        //ss << iterator->first << ": " << iterator->second;
        stream << iterator->generateJson();
        iterator++;
        for(iterator; iterator != this->strategySteps.end(); iterator++){
            stream << ",\n";
            stream << iterator->generateJson();
        }
    }else{
        stream << "{}\n";
    }
    return stream.str();
}

std::string strategy::generateJsonString(){
    std::stringstream stream;
    stream << "{\n";
    stream << "\"strategy\" : \"" << this->strategyName <<"\",\n";
    stream << "\"steps\" : [\n";
    stream << this->generateStepsJson();
    stream << "]\n}";
    return stream.str();
}

bool strategy::fexists(const char *filename) {
    std::ifstream ifile(filename);
    return (bool)ifile;
}

int strategy::saveStrategyToDisk(int overwrite)
{
    std::string dir = "./strategies/";
    std::string filename = dir;
    filename += this->strategyName;
    filename += ".json";
    if(fexists(filename.c_str()) && !overwrite){
        return fileExists;
    }
    std::ofstream outFile(filename.c_str());
    if(!outFile){
        return writeFail;
    }
    outFile << this->generateJsonString();
    outFile.close();
    return outFile.fail() || outFile.bad() ? writeFail : writeSucess;
}
