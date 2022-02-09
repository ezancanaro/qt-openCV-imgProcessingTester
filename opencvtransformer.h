#ifndef OPENCVTRANSFORMER_H
#define OPENCVTRANSFORMER_H

#include "openCVheaders.h"
#include <math.h>

#define SOBELKERNEL 0
#define SCHARRKERNEL 1
#include <transformOptions/adaptivethresholdoptions.h>
#include <transformOptions/gaussianbluroptions.h>
#include <transformOptions/bilateralfilteroptions.h>
#include <transformOptions/customsobelthresholdoptions.h>
#include <transformOptions/simplethresholdoptions.h>
#include <transformOptions/sobelderivativesoptions.h>

using namespace cv;
//public:
    //openCVtransformer();

    bool customSobelC8U(cv::Mat &imgSrc, cv::Mat &imgDst, int nRows, int nCols, int thresholdVal, int kernelToUse=SOBELKERNEL);

    std::string apply_bilateralFilter(cv::Mat &imgSrc, cv::Mat &imgDst, int neighbourhoodDiameter=9, int sigmaColor=75,
                               int sigmaSpace=75);
    std::string apply_bilateralFilter(Mat &imgSrc, Mat &imgDst, bilateralFilterOptions *options);

    std::string apply_medianBlur(cv::Mat &imgSrc, cv::Mat &imgDst, int appertureSize=5);


    std::string apply_gaussianBlur(cv::Mat &imgSrc, cv::Mat &imgDst, cv::Size kernelSize = cv::Size(5,5), double sigmaX = 0,
                            double sigmaY = 0, int borderType = cv::BORDER_DEFAULT  );

    std::string apply_gaussianBlur(cv::Mat &imgSrc, cv::Mat &imgDst, gaussianBlurOptions *options );

    std::string apply_simpleThreshold(cv::Mat &imgSrc, cv::Mat imgDst ,double thresholdVal=127, double maxVal=255,
                                 int thresholdType = cv::THRESH_BINARY_INV );

    std::string apply_simpleThreshold(Mat &imgSrc, Mat imgDst , simpleThresholdOptions *options);


    std::string apply_adaptiveThreshold(cv::Mat &imgSrc, cv::Mat imgDst, double maxValue = 255,
                                 int adaptiveMethod = cv::ADAPTIVE_THRESH_GAUSSIAN_C, int thresholdType = cv::THRESH_BINARY_INV,
                                 int blockSize = 5, double constant = 2);
    std::string apply_adaptiveThreshold(cv::Mat &imgSrc, cv::Mat imgDst, adaptiveThresholdOptions *options);

    std::string apply_imgSubtraction(cv::Mat &img1, cv::Mat &img2, cv::Mat &imgDst, cv::InputArray subMask = cv::noArray(),
                              int depthType = -1);

    std::string apply_sobelDerivatives(cv::Mat &imgSrc, cv::Mat &imgDst, int ddepth=CV_16S, int kernelSize=3, double scale=1,
                                double delta=0, int borderType=cv::BORDER_DEFAULT, double alpha=1, double beta=0,
                                double weigthX=0.5, double weigthY =0.5, double gamma=0 );

    std::string apply_sobelDerivatives(Mat &imgSrc, Mat &imgDst, sobelDerivativesOptions *options);



    std::string apply_morph();

    std::string apply_customSobelPlusBinary(cv::Mat &imgSrc, cv::Mat &imgDst, int thresholdVal, int maxVal, bool applyThresh,
                                     int kernelToUse=SOBELKERNEL);

    std::string apply_customSobelPlusBinary(Mat &imgSrc, Mat &imgDst, customSobelThresholdOptions *options);


#endif // OPENCVTRANSFORMER_H
