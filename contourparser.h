#ifndef CONTOURPARSER_H
#define CONTOURPARSER_H


#include "openCVheaders.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>


struct contourDetails {

    contourDetails(std::vector<cv::Point> approximatedContour,cv::Point centerPoint,double area){
        this->approximatedContour = approximatedContour;
        this->centerPoint = centerPoint;
        this->area = area;
    }
    std::vector<cv::Point> approximatedContour;
    cv::Point centerPoint;
    double area;
};




class contourParser
{
public:
    std::vector<contourDetails> *contourDetailsArray;
    contourParser();
    void f(cv::Mat& baseImage);
    void g(cv::Mat& imageToDraw);//, std::vector<contourDetails>& contoursDet);

};

#endif // CONTOURPARSER_H
