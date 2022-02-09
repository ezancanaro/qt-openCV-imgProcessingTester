#ifndef IMAGESPANEL_H
#define IMAGESPANEL_H

#include <QVBoxLayout>
#include <QWidget>
#include <QLabel>
#include <QScrollArea>
#include <QPixmap>

#include "openCVheaders.h"



class imagesPanel : public QWidget
{
    Q_OBJECT
public:

    enum labelToBind {
        BIND_LABEL_ORIGINAL,
        BIND_LABEL_TRANSFORMED
    };

    explicit imagesPanel(QWidget *parent = nullptr);
    QVBoxLayout *qVerticalLayout;
    QImage *originalImage;
    QImage *transformedImage;
    QLabel *originalImageLabel;
    QLabel *transformedImageLabel;
    QScrollArea *scrollAreaImgOriginal;
    QScrollArea *scrollAreaImgTransformada;



    void displayImage(cv::Mat imageToShow, int nRows, int nCols, labelToBind label, QImage::Format imgFormat = QImage::Format_RGB888, bool convertColors = false, cv::ColorConversionCodes cvConversionCode = cv::COLOR_BGR2RGB);
    void displayTransformedImage();
    void clearImageLabel(labelToBind label);


signals:

public slots:



};

#endif // IMAGESPANEL_H
