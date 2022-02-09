#ifndef SOBELDERIVATIVESOPTIONS_H
#define SOBELDERIVATIVESOPTIONS_H

#include "optionsMapBuilder.h"

class sobelDerivativesOptions : public transformOptions
{
public:

    int ddepth;
    int kernelSize;
    double scale;
    double delta;
    int borderType;
    double alpha;
    double beta;
    double weigthX;
    double weigthY;
    double gamma;

    bool grayScaleImage = true;

    std::unordered_map<std::string,int> borderTypes;
    sobelDerivativesOptions();

    virtual std::unordered_map<std::string,std::string> getOptionsMapping();
};

#endif // SOBELDERIVATIVESOPTIONS_H
