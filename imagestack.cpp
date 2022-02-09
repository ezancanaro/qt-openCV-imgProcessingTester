#include "imagestack.h"

ImageStack::ImageStack()
{

}

int ImageStack::size()
{
    return images.size();
}

cv::Mat& ImageStack::currentImage()
{
    return images.top().first;
}

/*
void imageStack::push(cv::Mat image)
{
    images.push(image);

}
// */

bool ImageStack::pop()
{
    bool popped = false;
    if(images.size() > 1){
        images.pop();
        popped = true;
    }
    return popped;
}

void ImageStack::setCurrentImageColorScheme(bool setToGrayscale){
    images.top().second = setToGrayscale;
}

imageAndColorScheme& ImageStack::newImage(int rows, int cols, bool grayScale, int type)
{
    //cv::Mat *image = new cv::Mat(rows,cols, CV_8UC1);
    cv::Mat image(rows,cols, type );
    imageAndColorScheme pair(image,grayScale);
    images.push(pair);
    return images.top();
}

imageAndColorScheme& ImageStack::newImage(string imagePath, bool grayScale, int flags)
{
    cv::Mat image = cv::imread(imagePath, 1);
    imageAndColorScheme pair(image,grayScale);
    //cv::Mat *imageP = new cv::Mat(image);
    while(!images.empty()){
        images.pop();
    }
    images.push(pair);
    return images.top();
}

imageAndColorScheme& ImageStack::newImage(cv::Mat &imageToCopy, bool grayScale)
{
    cv::Mat image(imageToCopy);
    imageAndColorScheme pair(image,grayScale);
    images.push(pair);
    return images.top();
}
