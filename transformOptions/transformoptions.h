#ifndef TRANSFORMOPTIONS_H
#define TRANSFORMOPTIONS_H

#include <string>
#include <unordered_map>

class transformOptions
{
public:
    transformOptions();
    virtual ~transformOptions();
    virtual std::unordered_map<std::string,std::string> getOptionsMapping();

};

#endif // TRANSFORMOPTIONS_H
