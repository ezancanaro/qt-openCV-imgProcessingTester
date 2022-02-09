/********************************************************************************
** Form generated from reading UI file 'transformbuttons.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRANSFORMBUTTONS_H
#define UI_TRANSFORMBUTTONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_transformButtons
{
public:
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_3;
    QPushButton *loadImageButton_2;
    QPushButton *grayScaleButton_2;
    QPushButton *hsvFilterButton_2;
    QPushButton *bilateralFilterButton_2;
    QPushButton *gaussianBlurButton_2;
    QPushButton *medianBlurButton_2;
    QPushButton *simplethresholdingButton_2;
    QPushButton *adaptiveThresholdingButton_2;
    QPushButton *subtractImageButton_2;
    QPushButton *morphologyOperatorButton_2;
    QPushButton *openCVSobelButton_2;
    QPushButton *customSobelButton_2;

    void setupUi(QWidget *transformButtons)
    {
        if (transformButtons->objectName().isEmpty())
            transformButtons->setObjectName(QString::fromUtf8("transformButtons"));
        transformButtons->resize(173, 610);
        verticalLayoutWidget_2 = new QWidget(transformButtons);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(0, 0, 171, 611));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        loadImageButton_2 = new QPushButton(verticalLayoutWidget_2);
        loadImageButton_2->setObjectName(QString::fromUtf8("loadImageButton_2"));

        verticalLayout_3->addWidget(loadImageButton_2);

        grayScaleButton_2 = new QPushButton(verticalLayoutWidget_2);
        grayScaleButton_2->setObjectName(QString::fromUtf8("grayScaleButton_2"));

        verticalLayout_3->addWidget(grayScaleButton_2);

        hsvFilterButton_2 = new QPushButton(verticalLayoutWidget_2);
        hsvFilterButton_2->setObjectName(QString::fromUtf8("hsvFilterButton_2"));

        verticalLayout_3->addWidget(hsvFilterButton_2);

        bilateralFilterButton_2 = new QPushButton(verticalLayoutWidget_2);
        bilateralFilterButton_2->setObjectName(QString::fromUtf8("bilateralFilterButton_2"));

        verticalLayout_3->addWidget(bilateralFilterButton_2);

        gaussianBlurButton_2 = new QPushButton(verticalLayoutWidget_2);
        gaussianBlurButton_2->setObjectName(QString::fromUtf8("gaussianBlurButton_2"));

        verticalLayout_3->addWidget(gaussianBlurButton_2);

        medianBlurButton_2 = new QPushButton(verticalLayoutWidget_2);
        medianBlurButton_2->setObjectName(QString::fromUtf8("medianBlurButton_2"));

        verticalLayout_3->addWidget(medianBlurButton_2);

        simplethresholdingButton_2 = new QPushButton(verticalLayoutWidget_2);
        simplethresholdingButton_2->setObjectName(QString::fromUtf8("simplethresholdingButton_2"));

        verticalLayout_3->addWidget(simplethresholdingButton_2);

        adaptiveThresholdingButton_2 = new QPushButton(verticalLayoutWidget_2);
        adaptiveThresholdingButton_2->setObjectName(QString::fromUtf8("adaptiveThresholdingButton_2"));

        verticalLayout_3->addWidget(adaptiveThresholdingButton_2);

        subtractImageButton_2 = new QPushButton(verticalLayoutWidget_2);
        subtractImageButton_2->setObjectName(QString::fromUtf8("subtractImageButton_2"));

        verticalLayout_3->addWidget(subtractImageButton_2);

        morphologyOperatorButton_2 = new QPushButton(verticalLayoutWidget_2);
        morphologyOperatorButton_2->setObjectName(QString::fromUtf8("morphologyOperatorButton_2"));

        verticalLayout_3->addWidget(morphologyOperatorButton_2);

        openCVSobelButton_2 = new QPushButton(verticalLayoutWidget_2);
        openCVSobelButton_2->setObjectName(QString::fromUtf8("openCVSobelButton_2"));

        verticalLayout_3->addWidget(openCVSobelButton_2);

        customSobelButton_2 = new QPushButton(verticalLayoutWidget_2);
        customSobelButton_2->setObjectName(QString::fromUtf8("customSobelButton_2"));

        verticalLayout_3->addWidget(customSobelButton_2);


        retranslateUi(transformButtons);

        QMetaObject::connectSlotsByName(transformButtons);
    } // setupUi

    void retranslateUi(QWidget *transformButtons)
    {
        transformButtons->setWindowTitle(QCoreApplication::translate("transformButtons", "Form", nullptr));
        loadImageButton_2->setText(QCoreApplication::translate("transformButtons", "Load Image", nullptr));
        grayScaleButton_2->setText(QCoreApplication::translate("transformButtons", "Apply Gray Scale", nullptr));
        hsvFilterButton_2->setText(QCoreApplication::translate("transformButtons", "HSV Color Filter", nullptr));
        bilateralFilterButton_2->setText(QCoreApplication::translate("transformButtons", "Bilateral Filtering", nullptr));
        gaussianBlurButton_2->setText(QCoreApplication::translate("transformButtons", "Gaussian Blur", nullptr));
        medianBlurButton_2->setText(QCoreApplication::translate("transformButtons", "Median Blur", nullptr));
        simplethresholdingButton_2->setText(QCoreApplication::translate("transformButtons", "Simple Thresholding", nullptr));
        adaptiveThresholdingButton_2->setText(QCoreApplication::translate("transformButtons", "Adaptive Thresholding", nullptr));
        subtractImageButton_2->setText(QCoreApplication::translate("transformButtons", "Subtract from Original Gray Scale", nullptr));
        morphologyOperatorButton_2->setText(QCoreApplication::translate("transformButtons", "Morphology Operator", nullptr));
        openCVSobelButton_2->setText(QCoreApplication::translate("transformButtons", "OpenCV Sobel Derivatives", nullptr));
        customSobelButton_2->setText(QCoreApplication::translate("transformButtons", "Custom Sobel + Threshold", nullptr));
    } // retranslateUi

};

namespace Ui {
    class transformButtons: public Ui_transformButtons {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRANSFORMBUTTONS_H
