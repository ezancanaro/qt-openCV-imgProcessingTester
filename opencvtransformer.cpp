#include "opencvtransformer.h"
#include <QDebug>
#include <transformOptions/hsvcolorfilteroptions.h>

//using namespace openCVtransformer;


std::string apply_bilateralFilter(Mat &imgSrc, Mat &imgDst, int neighbourhoodDiameter, int sigmaColor, int sigmaSpace){

    std::string err_msg = "";
    try{
        bilateralFilter(imgSrc, imgDst,neighbourhoodDiameter,sigmaColor,sigmaSpace);
    }catch(cv::Exception &e){
        err_msg = e.what();
    }
    return err_msg;
    //    cv::bilateralFilter(gray_img, 9, 75, 75)

}

std::string apply_bilateralFilter(Mat &imgSrc, Mat &imgDst, bilateralFilterOptions *options){
    return apply_bilateralFilter(imgSrc, imgDst,options->neighbourhoodDiameter,options->sigmaColor,options->sigmaSpace);
    //    cv::bilateralFilter(gray_img, 9, 75, 75)
}

std::string apply_medianBlur(Mat &imgSrc, Mat &imgDst, int appertureSize){

    std::string err_msg = "";
    try{
        medianBlur(imgSrc,imgDst, appertureSize);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}

std::string apply_gaussianBlur(Mat &imgSrc, Mat &imgDst, Size kernelSize, double sigmaX , double sigmaY , int borderType  ){
    std::string err_msg = "";
    try{
        GaussianBlur(imgSrc, imgDst, kernelSize, sigmaX, sigmaY, borderType);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}

std::string apply_gaussianBlur(Mat &imgSrc, Mat &imgDst, gaussianBlurOptions *options ){
    //qDebug() << "Gaussian Blur:" << options->kernelSizeX;
    return apply_gaussianBlur(imgSrc, imgDst, Size(options->kernelSizeX, options->kernelSizeY), options->sigmaX, options->sigmaY, options->borderType);

}

std::string apply_simpleThreshold(Mat &imgSrc, Mat imgDst ,double thresholdVal, double maxVal, int thresholdType ){
    //Returns computed Threshold Value for dynamic thresholdTypes.
    std::string err_msg = "";
    try{
        threshold(imgSrc,imgDst,thresholdVal,maxVal, thresholdType);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}


std::string apply_simpleThreshold(Mat &imgSrc, Mat imgDst , simpleThresholdOptions *options){
    //Returns computed Threshold Value for dynamic thresholdTypes.
    return apply_simpleThreshold(imgSrc,imgDst,options->thresholdVal,options->maxVal, options->thresholdType);
}

std::string apply_adaptiveThreshold(Mat &imgSrc, Mat imgDst, double maxValue, int adaptiveMethod, int thresholdType ,
                                    int blockSize , double constant){
    std::string err_msg = "";
    try{
        adaptiveThreshold(imgSrc, imgDst, maxValue, adaptiveMethod, thresholdType, blockSize, constant);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}

std::string apply_adaptiveThreshold(Mat &imgSrc, Mat imgDst, adaptiveThresholdOptions *options){
    return apply_adaptiveThreshold(imgSrc, imgDst, options->maxValue, options->adaptiveMethod, options->thresholdType, options->blockSize, options->constant);
}


std::string apply_imgSubtraction(Mat &img1, Mat &img2, Mat &imgDst, InputArray subMask,int depthType){
    std::string err_msg = "";
    try{
        subtract(img1, img2, imgDst, subMask , depthType);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}


std::string apply_sobelDerivatives(Mat &imgSrc, Mat &imgDst, int ddepth, int kernelSize, double scale, double delta,
                                   int borderType, double alpha, double beta,double weigthX, double weigthY,
                                   double gamma ){
    std::string err_msg = "";
    try{
        Mat gradX, gradY;
        Sobel(imgSrc,gradX,ddepth , 1,0, kernelSize, scale, delta, borderType);
        Sobel(imgSrc,gradY,ddepth,0,1, kernelSize, scale, delta, borderType);

        convertScaleAbs(gradX,gradX, alpha, beta);
        convertScaleAbs(gradY,gradY, alpha, beta);

        addWeighted(gradX, weigthX, gradY, weigthY, gamma, imgDst);
    }catch(cv::Exception &e){
        err_msg = e.what();

    }
    return err_msg;
}

std::string apply_sobelDerivatives(Mat &imgSrc, Mat &imgDst, sobelDerivativesOptions *options){

    return apply_sobelDerivatives(imgSrc,imgDst,options->ddepth,options->kernelSize,options->scale,options->delta,
                                  options->borderType, options->alpha, options->beta,options->weigthX, options->weigthY,
                                  options->gamma);
}

std::string apply_morph(){

}

std::string apply_customSobelPlusBinary(Mat &imgSrc, Mat &imgDst, int thresholdVal, int maxVal, bool applyThresh,
                                        int kernelToUse){

    std::string msg= "";
    bool imagemProcessada = true;
    if(imgSrc.channels() > 1){
        printf("Imagem possui mais de um canal, não pode ser processada");
        imagemProcessada = false;
        msg = "Can only process Single Channel Images";
    }

    int srcRows = imgSrc.rows;
    int srcCols = imgSrc.cols;//Single channel images (grayScale)
    int dstRows = imgDst.rows;
    int dstCols = imgDst.cols;//Single channel images (grayScale)

    if(srcRows != dstRows || srcCols != dstCols){
        printf("Imagens com tamanhos diferentes, não podem ser processadas");
        imagemProcessada = false;
    }
    imagemProcessada = customSobelC8U(imgSrc,imgDst,srcRows,srcCols,thresholdVal);

    return msg;
}

std::string apply_customSobelPlusBinary(Mat &imgSrc, Mat &imgDst, customSobelThresholdOptions *options){
    return apply_customSobelPlusBinary(imgSrc,imgDst,options->thresholdVal,options->maxVal,options->applyThresh,options->kernelToUse);
}

bool customSobelC8U(Mat &imgSrc, Mat &imgDst, int nRows, int nCols, int thresholdVal, int kernelToUse){

    //3x3 sobel kernels
    short sobelHorizontalFilter[3][3]={{-1,0,1},{-2,0,2},{-1,0,1}};
    short sobelVerticalFilter[3][3]={{-1,-2,-1},{0,0,0},{1,2,1}};
    short scharrHorizontalFilter[3][3]={{-3,0,3},{-10,0,10},{-3,0,3}};
    short scharrVerticalFilter[3][3]={{-3,-10,-3},{0,0,0},{3,10,3}};

    //Pointers are fun......
    short (*horizontalFilter)[3];
    short (*verticalFilter)[3];
    if(kernelToUse == SCHARRKERNEL){
        horizontalFilter = scharrHorizontalFilter;
        verticalFilter = scharrVerticalFilter;
    }else{
        horizontalFilter = sobelHorizontalFilter;
        verticalFilter =sobelVerticalFilter;
    }

    short magnitude;
    int i,j;
    uchar *srcRow0;
    uchar *srcRow1;
    uchar *srcRow2;
    uchar *dstRow;

    short horizontalGrad;
    short verticalGrad;
    for (i=1; i<nRows-1 ; i++){
        srcRow0 = imgSrc.ptr<uchar>(i-1);
        srcRow1 = imgSrc.ptr<uchar>(i);
        srcRow2 = imgSrc.ptr<uchar>(i+1);
        dstRow = imgDst.ptr<uchar>(i-1);
        for(j=1; j <nCols-1; j++){
            horizontalGrad = (horizontalFilter[0][0] * srcRow0[j-1])
                    +(horizontalFilter[0][1] * srcRow0[j])
                    +(horizontalFilter[0][2] * srcRow0[j+1])
                    +(horizontalFilter[1][0] * srcRow1[j-1])
                    +(horizontalFilter[1][1] * srcRow1[j])
                    +(horizontalFilter[1][2] * srcRow1[j+1])
                    +(horizontalFilter[2][0] * srcRow2[j-1])
                    +(horizontalFilter[2][1] * srcRow2[j])
                    +(horizontalFilter[2][1] * srcRow2[j+1]);
            verticalGrad = (verticalFilter[0][0] * srcRow0[j-1])
                    +(verticalFilter[0][1] * srcRow0[j])
                    +(verticalFilter[0][2] * srcRow0[j+1])
                    +(verticalFilter[1][0] * srcRow1[j-1])
                    +(verticalFilter[1][1] * srcRow1[j])
                    +(verticalFilter[1][2] * srcRow1[j+1])
                    +(verticalFilter[2][0] * srcRow2[j-1])
                    +(verticalFilter[2][1] * srcRow2[j])
                    +(verticalFilter[2][1] * srcRow2[j+1]);
            magnitude = sqrt(pow(horizontalGrad,2) + pow(verticalGrad,2));
            if (magnitude > thresholdVal){
                magnitude = 255;
            }else{
                magnitude = 0;
            }
            //Convertendo o resultado novamente para uchar[0,..,255]
            dstRow[j-1]= saturate_cast<uchar>(abs(magnitude));
        }
    }

    return true;
}


std::string apply_hsvColorFilter(Mat &imgSrc, Mat &imgDst, hsvColorFilterOptions *options){

    //inRange()
    //return apply_customSobelPlusBinary(imgSrc,imgDst,options->thresholdVal,options->maxVal,options->applyThresh,options->kernelToUse);
}
