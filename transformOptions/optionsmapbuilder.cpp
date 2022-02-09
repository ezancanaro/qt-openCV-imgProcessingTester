#include "optionsmapbuilder.h"

optionsMapBuilder::optionsMapBuilder()
{

}

std::unordered_map<std::string, int> optionsMapBuilder::getBorderOptionsMap()
{
    std::unordered_map<std::string,int> borderOptions;
    borderOptions["Default"] = cv::BorderTypes::BORDER_DEFAULT;
    borderOptions["Wrap"] = cv::BorderTypes::BORDER_WRAP;
    borderOptions["Reflect"] = cv::BorderTypes::BORDER_REFLECT;
    borderOptions["Constant"] = cv::BorderTypes::BORDER_CONSTANT;
    borderOptions["Isolated"] = cv::BorderTypes::BORDER_ISOLATED;
    borderOptions["Replicate"] = cv::BorderTypes::BORDER_REPLICATE;
    borderOptions["Reflect101"] = cv::BorderTypes::BORDER_REFLECT101;
    borderOptions["Reflect_101"] = cv::BorderTypes::BORDER_REFLECT_101;
    borderOptions["Transparent"] = cv::BorderTypes::BORDER_TRANSPARENT;
    return borderOptions;
}

std::unordered_map<std::string, int> optionsMapBuilder::getThresholdOptionsMap()
{
    std::unordered_map<std::string,int> thresholdOptions;
    thresholdOptions["Mask"] = cv::ThresholdTypes::THRESH_MASK;
    thresholdOptions["Otsu"] = cv::ThresholdTypes::THRESH_OTSU;
    thresholdOptions["Truncated"] = cv::ThresholdTypes::THRESH_TRUNC;
    thresholdOptions["Binary"] = cv::ThresholdTypes::THRESH_BINARY;
    thresholdOptions["To Zero"] = cv::ThresholdTypes::THRESH_TOZERO;
    thresholdOptions["Triangle"] = cv::ThresholdTypes::THRESH_TRIANGLE;
    thresholdOptions["Inverted Binary"] = cv::ThresholdTypes::THRESH_BINARY_INV;
    thresholdOptions["Inverted To Zero"] = cv::ThresholdTypes::THRESH_TOZERO_INV;
    return thresholdOptions;

}

std::unordered_map<std::string, int> optionsMapBuilder::getAdaptiveThresholdOptionsMap()
{
    std::unordered_map<std::string,int> adaptiveThresholdOptions;
    adaptiveThresholdOptions["Mean"] = cv::AdaptiveThresholdTypes::ADAPTIVE_THRESH_MEAN_C;
    adaptiveThresholdOptions["Gaussian"] = cv::AdaptiveThresholdTypes::ADAPTIVE_THRESH_GAUSSIAN_C;
    return adaptiveThresholdOptions;
}

