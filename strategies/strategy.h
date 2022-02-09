#ifndef STRATEGY_H
#define STRATEGY_H
#include <utility>
#include <string>
#include <list>
#include <fstream>

#include "transformOptions/transformoptions.h"
#include "strategyStep.h"

class strategy
{
public:
    strategy();
    std::string strategyName;

    //Pairs of functions to be used together
    //Keeps steps on the order of insertion
    bool addOperation(std::string operation, transformOptions options);
    bool removeLastStep();
    //If we have a stack of applied transformations, insert them in reverse popping order (top of stack = last step)
    bool addOperationInReverseOrder(std::string operation, transformOptions options);
    bool removeFirstStep();

    enum saveReturnCode {writeSucess, writeFail, fileExists};
    enum lastInsert {frontOfList,backOfList};
    int saveStrategyToDisk(int overwrite);



private:
    std::list<strategyStep> strategySteps;

    std::string generateStepsJson();
    std::string generateJsonString();
    bool fexists(const char *filename);
};

#endif // STRATEGY_H
