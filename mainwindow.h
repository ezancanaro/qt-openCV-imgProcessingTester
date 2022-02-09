#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QDebug>
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QTimer>
#include <QTextEdit>

#include "imagestack.h"
#include "openCVheaders.h"
#include "transformOptionsForms/baseoptionsform.h"
#include "transformOptionsForms/gaussianbluroptionsform.h"
#include "openCVheaders.h"
#include "opencvtransformer.h"
#include "filebrowser.h"
#include <transformOptionsForms/adaptivethresholdoptionsform.h>
#include <transformOptionsForms/bilateralfilteroptionsform.h>
#include <transformOptionsForms/customsobeloptionsform.h>
#include <transformOptionsForms/imagesubtractionoptionsform.h>
#include <transformOptionsForms/medianbluroptionsform.h>
#include <transformOptionsForms/morphoperationsoptionform.h>
#include <transformOptionsForms/simplethresholdoptionsform.h>
#include <transformOptionsForms/sobelderivativesoptionsform.h>
#include <transformOptions/medianbluroptions.h>
#include <contourparser.h>

#include "strategies/strategy.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QImage original;
    QImage transformed;
    QTimer* timer;
    QGraphicsScene* optionsScene;
    baseOptionsForm *activeOptionsForm;

    ImageStack imageStack;

    cv::Mat activeImage;

    transformOptions *trOptions;


    //QGraphicsView* optionsView;

    void updateView(cv::Mat& opencvImage, bool setOriginal = true, bool setToGrayScale = true);
    void setImages(bool setOriginal = true);
    void logAction(QString logMessage);


    bool applyOpenCVTransform(Mat &baseImage, Mat &transformedImage);
private:
    Ui::MainWindow *ui;

    strategy recordedStrategy;
    std::string lastAppliedTransform;
    contourParser cntParser;

    void clearOptionsForm();
    void connectOptionsFormSignals();

public slots:
    //void displayImage();
    //void displayTransformedImage();
    void updateView_setTemporaryImage();

    void grayScaleButton_clicked();
    void hsvColorFilterButton_clicked();
    void bilateralFilterButton_clicked();
    void gaussianBlurButton_clicked();
    void medianBlurButton_clicked();
    void simpleThresholdButton_clicked();
    void adaptiveThresholdButton_clicked();
    void subtractImageButton_clicked();
    void morphButton_clicked();
    void openCVSobelButton_clicked();
    void customSobelButton_clicked();
    void undoOperationButton_clicked();

    void applyTransformButton_clicked();

    void drawContoursButton_clicked();
    void findContoursButton_clicked();

    //void getFileToLoad();
private slots:
    void on_loadImageButton_2_clicked();
    void logErrorMessageFromForm(QString logMessage);
};
#endif // MAINWINDOW_H
