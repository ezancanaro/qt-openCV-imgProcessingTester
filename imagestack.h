#ifndef IMAGESTACK_H
#define IMAGESTACK_H

#include <stack>
#include "openCVheaders.h"

using namespace std;
using imageAndColorScheme = std::pair<cv::Mat,bool>;
class ImageStack
{
private:
    stack<imageAndColorScheme> images;

public:
    ImageStack();

    int size();
    cv::Mat& currentImage();

    //void push(cv::Mat &image);
    bool pop();
    imageAndColorScheme& newImage(int rows,int cols, bool grayScale=false, int type=CV_8UC1);
    imageAndColorScheme& newImage(string imagePath, bool grayScale, int flags=1);
    imageAndColorScheme& newImage(cv::Mat& imageToCopy, bool grayScale);

    void setCurrentImageColorScheme(bool setToGrayscale);
};

#endif // IMAGESTACK_H
