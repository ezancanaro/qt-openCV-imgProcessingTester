/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "imagespanel.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *optionsLayout;
    QFrame *imagesFrame;
    imagesPanel *imagePanel;
    QFrame *buttonsFrame;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    QFrame *line;
    QLabel *label_2;
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
    QFrame *line_2;
    QPushButton *loadImageButton_2;
    QPushButton *undoButton;
    QPushButton *findContoursButton;
    QPushButton *drawContoursButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *logTextBox;
    QCheckBox *checkBoxRecordSteps;
    QPushButton *buttonSaveStrategy;
    QMenuBar *menubar;
    QMenu *menuOpen_CV_image_transformations;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1294, 676);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(780, 10, 221, 461));
        optionsLayout = new QVBoxLayout(verticalLayoutWidget_3);
        optionsLayout->setObjectName(QString::fromUtf8("optionsLayout"));
        optionsLayout->setContentsMargins(0, 0, 0, 0);
        imagesFrame = new QFrame(centralwidget);
        imagesFrame->setObjectName(QString::fromUtf8("imagesFrame"));
        imagesFrame->setGeometry(QRect(10, 10, 541, 611));
        imagesFrame->setFrameShape(QFrame::StyledPanel);
        imagesFrame->setFrameShadow(QFrame::Plain);
        imagesFrame->setLineWidth(2);
        imagePanel = new imagesPanel(imagesFrame);
        imagePanel->setObjectName(QString::fromUtf8("imagePanel"));
        imagePanel->setGeometry(QRect(0, 0, 541, 611));
        buttonsFrame = new QFrame(centralwidget);
        buttonsFrame->setObjectName(QString::fromUtf8("buttonsFrame"));
        buttonsFrame->setGeometry(QRect(570, 10, 191, 611));
        buttonsFrame->setFrameShape(QFrame::StyledPanel);
        buttonsFrame->setFrameShadow(QFrame::Plain);
        buttonsFrame->setLineWidth(2);
        horizontalLayoutWidget = new QWidget(buttonsFrame);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(-1, 0, 191, 611));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(8, -1, 8, 8);
        line = new QFrame(horizontalLayoutWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line, 0, Qt::AlignTop);

        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);

        verticalLayout_3->addWidget(label_2, 0, Qt::AlignHCenter|Qt::AlignTop);

        grayScaleButton_2 = new QPushButton(horizontalLayoutWidget);
        grayScaleButton_2->setObjectName(QString::fromUtf8("grayScaleButton_2"));

        verticalLayout_3->addWidget(grayScaleButton_2, 0, Qt::AlignVCenter);

        hsvFilterButton_2 = new QPushButton(horizontalLayoutWidget);
        hsvFilterButton_2->setObjectName(QString::fromUtf8("hsvFilterButton_2"));

        verticalLayout_3->addWidget(hsvFilterButton_2, 0, Qt::AlignVCenter);

        bilateralFilterButton_2 = new QPushButton(horizontalLayoutWidget);
        bilateralFilterButton_2->setObjectName(QString::fromUtf8("bilateralFilterButton_2"));

        verticalLayout_3->addWidget(bilateralFilterButton_2, 0, Qt::AlignVCenter);

        gaussianBlurButton_2 = new QPushButton(horizontalLayoutWidget);
        gaussianBlurButton_2->setObjectName(QString::fromUtf8("gaussianBlurButton_2"));

        verticalLayout_3->addWidget(gaussianBlurButton_2, 0, Qt::AlignVCenter);

        medianBlurButton_2 = new QPushButton(horizontalLayoutWidget);
        medianBlurButton_2->setObjectName(QString::fromUtf8("medianBlurButton_2"));

        verticalLayout_3->addWidget(medianBlurButton_2, 0, Qt::AlignVCenter);

        simplethresholdingButton_2 = new QPushButton(horizontalLayoutWidget);
        simplethresholdingButton_2->setObjectName(QString::fromUtf8("simplethresholdingButton_2"));

        verticalLayout_3->addWidget(simplethresholdingButton_2, 0, Qt::AlignVCenter);

        adaptiveThresholdingButton_2 = new QPushButton(horizontalLayoutWidget);
        adaptiveThresholdingButton_2->setObjectName(QString::fromUtf8("adaptiveThresholdingButton_2"));

        verticalLayout_3->addWidget(adaptiveThresholdingButton_2, 0, Qt::AlignVCenter);

        subtractImageButton_2 = new QPushButton(horizontalLayoutWidget);
        subtractImageButton_2->setObjectName(QString::fromUtf8("subtractImageButton_2"));

        verticalLayout_3->addWidget(subtractImageButton_2);

        morphologyOperatorButton_2 = new QPushButton(horizontalLayoutWidget);
        morphologyOperatorButton_2->setObjectName(QString::fromUtf8("morphologyOperatorButton_2"));

        verticalLayout_3->addWidget(morphologyOperatorButton_2, 0, Qt::AlignVCenter);

        openCVSobelButton_2 = new QPushButton(horizontalLayoutWidget);
        openCVSobelButton_2->setObjectName(QString::fromUtf8("openCVSobelButton_2"));

        verticalLayout_3->addWidget(openCVSobelButton_2, 0, Qt::AlignVCenter);

        customSobelButton_2 = new QPushButton(horizontalLayoutWidget);
        customSobelButton_2->setObjectName(QString::fromUtf8("customSobelButton_2"));

        verticalLayout_3->addWidget(customSobelButton_2, 0, Qt::AlignVCenter);

        line_2 = new QFrame(horizontalLayoutWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2, 0, Qt::AlignBottom);

        loadImageButton_2 = new QPushButton(horizontalLayoutWidget);
        loadImageButton_2->setObjectName(QString::fromUtf8("loadImageButton_2"));

        verticalLayout_3->addWidget(loadImageButton_2, 0, Qt::AlignBottom);

        undoButton = new QPushButton(horizontalLayoutWidget);
        undoButton->setObjectName(QString::fromUtf8("undoButton"));

        verticalLayout_3->addWidget(undoButton, 0, Qt::AlignBottom);


        horizontalLayout->addLayout(verticalLayout_3);

        findContoursButton = new QPushButton(centralwidget);
        findContoursButton->setObjectName(QString::fromUtf8("findContoursButton"));
        findContoursButton->setGeometry(QRect(780, 530, 101, 31));
        drawContoursButton = new QPushButton(centralwidget);
        drawContoursButton->setObjectName(QString::fromUtf8("drawContoursButton"));
        drawContoursButton->setGeometry(QRect(780, 570, 101, 31));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(1020, 10, 261, 461));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font1;
        font1.setPointSize(14);
        label->setFont(font1);

        verticalLayout->addWidget(label);

        logTextBox = new QTextEdit(verticalLayoutWidget);
        logTextBox->setObjectName(QString::fromUtf8("logTextBox"));

        verticalLayout->addWidget(logTextBox);

        checkBoxRecordSteps = new QCheckBox(centralwidget);
        checkBoxRecordSteps->setObjectName(QString::fromUtf8("checkBoxRecordSteps"));
        checkBoxRecordSteps->setGeometry(QRect(1020, 480, 111, 31));
        buttonSaveStrategy = new QPushButton(centralwidget);
        buttonSaveStrategy->setObjectName(QString::fromUtf8("buttonSaveStrategy"));
        buttonSaveStrategy->setGeometry(QRect(1020, 510, 91, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1294, 21));
        menuOpen_CV_image_transformations = new QMenu(menubar);
        menuOpen_CV_image_transformations->setObjectName(QString::fromUtf8("menuOpen_CV_image_transformations"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuOpen_CV_image_transformations->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Transforma\303\247\303\265es OpenCV", nullptr));
        grayScaleButton_2->setText(QCoreApplication::translate("MainWindow", "Apply Gray Scale", nullptr));
        hsvFilterButton_2->setText(QCoreApplication::translate("MainWindow", "HSV Color Filter", nullptr));
        bilateralFilterButton_2->setText(QCoreApplication::translate("MainWindow", "Bilateral Filtering", nullptr));
        gaussianBlurButton_2->setText(QCoreApplication::translate("MainWindow", "Gaussian Blur", nullptr));
        medianBlurButton_2->setText(QCoreApplication::translate("MainWindow", "Median Blur", nullptr));
        simplethresholdingButton_2->setText(QCoreApplication::translate("MainWindow", "Simple Thresholding", nullptr));
        adaptiveThresholdingButton_2->setText(QCoreApplication::translate("MainWindow", "Adaptive Thresholding", nullptr));
        subtractImageButton_2->setText(QCoreApplication::translate("MainWindow", "Subtract from Original Gray Scale", nullptr));
        morphologyOperatorButton_2->setText(QCoreApplication::translate("MainWindow", "Morphology Operator", nullptr));
        openCVSobelButton_2->setText(QCoreApplication::translate("MainWindow", "OpenCV Sobel Derivatives", nullptr));
        customSobelButton_2->setText(QCoreApplication::translate("MainWindow", "Custom Sobel + Threshold", nullptr));
        loadImageButton_2->setText(QCoreApplication::translate("MainWindow", "Load Image", nullptr));
        undoButton->setText(QCoreApplication::translate("MainWindow", "Undo Operation", nullptr));
        findContoursButton->setText(QCoreApplication::translate("MainWindow", "Find Contours", nullptr));
        drawContoursButton->setText(QCoreApplication::translate("MainWindow", "Draw Contours", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "                   Log", nullptr));
        checkBoxRecordSteps->setText(QCoreApplication::translate("MainWindow", "Record Steps", nullptr));
        buttonSaveStrategy->setText(QCoreApplication::translate("MainWindow", "Save Strategy", nullptr));
        menuOpen_CV_image_transformations->setTitle(QCoreApplication::translate("MainWindow", "Open CV image transformations", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
