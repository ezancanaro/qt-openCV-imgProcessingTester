#include "morphoperationoptions.h"
#include "optionsmapbuilder.h"

morphOperationOptions::morphOperationOptions()
{
    operation;
    //InputArray 	kernel,
    kernelSizeX = 5;
    kernelSizeY = 5;
    anchorX = -1;
    anchorY = -1;
    iterations = 1;
    borderType = cv::BORDER_CONSTANT;

    borderTypes = optionsMapBuilder::getBorderOptionsMap();


    operations["Erode"] = cv::MORPH_ERODE;
    operations["Dilate"] = cv::MORPH_DILATE;
    operations["Open"] = cv::MORPH_OPEN;
    operations["Close"] = cv::MORPH_CLOSE;
    operations["Gradient"] = cv::MORPH_GRADIENT;
    operations["TopHat"] = cv::MORPH_TOPHAT;
    operations["BlackHat"] = cv::MORPH_BLACKHAT;
    operations["HitOrMiss"] = cv::MORPH_HITMISS;

    kernelShapes["Rectangular"] = cv:: MORPH_RECT;
    kernelShapes["Cross"] = cv::MORPH_CROSS;
    kernelShapes["Elliptical"] = cv::MORPH_ELLIPSE;

}



void morphOperationOptions::generateKernel(){

    kernel = cv::getStructuringElement(this->kernelShape,cv::Size(kernelSizeX,kernelSizeY),cv::Point(anchorX,anchorY));
}

std::unordered_map<std::string, std::string> morphOperationOptions::getOptionsMapping()
{
    using namespace std;
    unordered_map<string,string> optionsMap;
    optionsMap["operation"]=this->operation;
    optionsMap["kernelSizeX"]=this->kernelSizeX;
    optionsMap["kernelSizeY"]=this->kernelSizeY;
    optionsMap["anchorX"]=this->anchorX;
    optionsMap["anchorY"]=this->anchorY;
    optionsMap["iteration"]=this->iterations;
    optionsMap["borderType"]=this->borderType;
    optionsMap["kernelShape"]=this->kernelShape;
    return optionsMap;
}
