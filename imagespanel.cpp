#include "imagespanel.h"

#include <QDebug>

imagesPanel::imagesPanel(QWidget *parent) : QWidget(parent)
{


    qVerticalLayout = new QVBoxLayout();
    //originalImage = new QImage(this);
    //transformedImage;
    originalImageLabel = new QLabel(this);
    transformedImageLabel = new QLabel(this);
    scrollAreaImgOriginal = new QScrollArea(this);
    scrollAreaImgTransformada = new QScrollArea(this);


    originalImageLabel->setBackgroundRole(QPalette::Base);
    originalImageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    originalImageLabel->setScaledContents(true);

    transformedImageLabel->setBackgroundRole(QPalette::Base);
    transformedImageLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    transformedImageLabel->setScaledContents(true);

    scrollAreaImgOriginal->setBackgroundRole(QPalette::Dark);
    scrollAreaImgOriginal->setWidget(originalImageLabel);
    scrollAreaImgOriginal->setVisible(true);
    //scrollAreaImgOriginal->setWidgetResizable(true);

    scrollAreaImgTransformada->setBackgroundRole(QPalette::Dark);
    scrollAreaImgTransformada->setWidget(transformedImageLabel);
    scrollAreaImgTransformada->setVisible(true);

    qVerticalLayout->addWidget(scrollAreaImgOriginal);
    QFrame *ll = new QFrame();
    ll->setFrameShape(QFrame::HLine);
    ll->setFrameShadow(QFrame::Sunken);
    qVerticalLayout->addWidget(ll);
    qVerticalLayout->addWidget(scrollAreaImgTransformada);

    //transformedImageLabel->setBaseSize(scrollAreaImgTransformada->size());

    //transformedImageLabel->resize(scrollAreaImgTransformada->size());
    //transformedImageLabel->setGeometry(0,0,129,300);


    setLayout(qVerticalLayout);
}


void imagesPanel::displayImage(cv::Mat imageToShow, int nRows, int nCols, labelToBind label, QImage::Format imgFormat, bool convertColors, cv::ColorConversionCodes cvConversionCode){

    //qDebug() << "Traying to display image...";
    if(convertColors){
        cv::Mat tmpImgBuffer(nRows,nCols,CV_8U);
        cv::cvtColor(imageToShow, tmpImgBuffer, cvConversionCode);
        imageToShow = tmpImgBuffer;
    }
    if(label==BIND_LABEL_ORIGINAL){
        originalImage = new QImage((uchar*)imageToShow.data,nCols,nRows,imageToShow.step,imgFormat);
        this->originalImageLabel->setGeometry(0,0,originalImage->width(),originalImage->height());
        this->originalImageLabel->setPixmap(QPixmap::fromImage(*originalImage));//display the image in label that is created earlier
        qDebug() << "Setting pixMap for originalImage";
    }else if(label==BIND_LABEL_TRANSFORMED){
        transformedImage = new QImage((uchar*)imageToShow.data,nCols,nRows,imageToShow.step,imgFormat);
        this->transformedImageLabel->setGeometry(1,1,transformedImage->width(),transformedImage->height());
        this->transformedImageLabel->setPixmap(QPixmap::fromImage(*transformedImage));

        qDebug() << "Setting pixMap for transformedImage";
    }else{
        qDebug() << "Trying to show image on invalid place!";
    }

}

void imagesPanel::clearImageLabel(imagesPanel::labelToBind label)
{
    if(label==BIND_LABEL_ORIGINAL){
        this->originalImageLabel->clear();

    }else if(label==BIND_LABEL_TRANSFORMED){
        this->transformedImageLabel->clear();
        //this->transformedImageLabel->setAttribute(Qt::WA_TranslucentBackground);
        //QPixmap pix(100,100);
        //const QPixmap *p = this->transformedImageLabel->pixmap();
        //this->transformedImageLabel->setPixmap(pix);
        //this->transformedImageLabel->setAttribute(Qt::WA_TranslucentBackground);
        transformedImageLabel->setGeometry(1,1,1,1);
    }else{
        qDebug() << "Trying to show image on invalid place!";
    }
}

/*
void imagesPanel::displayTransformedImage(cv::Mat transformedImage, int nRows, int nCols){

    QImage original((uchar*)transformedImage.data,nCols,nRows,transformedImage.step,QImage::Format_RGB888);
    this->transformedImageLabel->setPixmap(QPixmap::fromImage(original));//display the image in label that is created earlier
}
*/
