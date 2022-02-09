#include "contourparser.h"


contourParser::contourParser()
{
    //
    contourDetailsArray = new std::vector<contourDetails>();
}


std::vector<std::vector<cv::Point>> getContoursFromDetails(std::vector<contourDetails>& contoursDet){

    std::vector<std::vector<cv::Point>> contours(contoursDet.size());
    for(int i =0; i< contoursDet.size(); i++){
        contours[i]=contoursDet[i].approximatedContour;
    }
    return contours;
}

void contourParser::g(cv::Mat& imageToDraw){//}, std::vector<contourDetails>& contoursDet){

    //for(int i =0; i < c.size(); i++){
    cv::drawContours(imageToDraw, getContoursFromDetails(*contourDetailsArray), -1, cv::Scalar(128,255,0), 3 );
    //}
}


void contourParser::f(cv::Mat& baseImage){

    std::vector<std::vector<cv::Point> > contours;
    std::vector<std::vector<cv::Point> > parsedContours;
    std::vector<cv::Point> approximatedContour;
    std::vector<cv::Vec4i> hierarchy;

    //std::vector<contourDetails> cntDetails;
    try{
        cv::findContours(baseImage, contours, hierarchy, cv::RETR_TREE, cv::CHAIN_APPROX_SIMPLE);
    }catch(cv::Exception &e){

        //return cntDetails;
    }

    std::vector<cv::Moments> moments(contours.size());
    double area = 0;
    double area2 = 0;
    double perimeter = 0;
    cv::Point center;
    for(int i=0; i < contours.size(); i++){
        area = cv::contourArea(contours[i]);
        cv::Moments m = cv::moments(contours[i]);
        moments[i] = m;
        area2 = m.m00;
        printf("Areas got from Moments vs ContourArea: %f  vs    %f",area2,area);
        if(area2 > 600 && area2 < 10000){
            if(m.m00 != 0){
                center.x = m.m10 / m.m00;
                center.y = m.m01 / m.m00;
            }else{
                center.x = 0;
                center.y = 0;
            }
            perimeter = cv::arcLength(contours[i],true);
            cv::approxPolyDP(contours[i],approximatedContour,0.01*perimeter, true);
            contourDetails details(contours[i],center,area2);
      //      cntDetails.push_back(details);
            contourDetailsArray->push_back(details);
        }
    }

    //return cntDetails;

}
