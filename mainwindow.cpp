#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <transformOptionsForms/hsvcolorfilteroptionsform.h>



cv::Mat originalImage;
//cv::Mat transformedImage;
int nRows;
int nCols;
std::string imagePath = "";

cv::Mat tempImage;
bool tempImageGrayScale;

QString normalTextFormat = "<font color=\"Black\">";
QString errorFormat = "<font color=\"Red\">";
QString endLine = "<br>";
//QString endLineAndFormat = "</font><br>";
QString endFormat = "</font>";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // read an image
    //showFullScreen();
    imagePath = "D:\2.png";
    setImages(true);
    //originalImage = image;
    connect(ui->grayScaleButton_2,           SIGNAL(clicked()), this, SLOT(grayScaleButton_clicked()));
    connect(ui->hsvFilterButton_2,           SIGNAL(clicked()), this, SLOT(hsvColorFilterButton_clicked()));
    connect(ui->bilateralFilterButton_2,     SIGNAL(clicked()), this, SLOT(bilateralFilterButton_clicked()));
    connect(ui->gaussianBlurButton_2,        SIGNAL(clicked()), this, SLOT(gaussianBlurButton_clicked()));
    connect(ui->medianBlurButton_2,          SIGNAL(clicked()), this, SLOT(medianBlurButton_clicked()));
    connect(ui->simplethresholdingButton_2,  SIGNAL(clicked()), this, SLOT(simpleThresholdButton_clicked()));
    connect(ui->adaptiveThresholdingButton_2,SIGNAL(clicked()), this, SLOT(adaptiveThresholdButton_clicked()));
    connect(ui->subtractImageButton_2,       SIGNAL(clicked()), this, SLOT(subtractImageButton_clicked()));
    connect(ui->morphologyOperatorButton_2,  SIGNAL(clicked()), this, SLOT(morphButton_clicked()));
    connect(ui->openCVSobelButton_2,         SIGNAL(clicked()), this, SLOT(openCVSobelButton_clicked()));
    connect(ui->customSobelButton_2,         SIGNAL(clicked()), this, SLOT(customSobelButton_clicked()));
    connect(ui->undoButton,                  SIGNAL(clicked()), this, SLOT(undoOperationButton_clicked()));
    connect(ui->drawContoursButton,          SIGNAL(clicked()), this, SLOT(drawContoursButton_clicked()));
    connect(ui->findContoursButton,          SIGNAL(clicked()), this, SLOT(findContoursButton_clicked()));
    //    connect(ui->findContour

    optionsScene = new QGraphicsScene(this);

    QWidget *container = new QWidget(this);

    //container->

    //ui->graphicsView->setWindowFlags(Qt::FramelessWindowHint);

}




MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::updateView_setTemporaryImage(){
    qDebug() << "GOT signal!!" ;

    tempImage = cv::Mat(nRows,nCols, CV_8UC1 );
    bool transformed = applyOpenCVTransform(imageStack.currentImage(), tempImage);

    if(transformed){
        ui->imagePanel->displayImage(tempImage,nRows,nCols,imagesPanel::BIND_LABEL_TRANSFORMED, QImage::Format_Grayscale8);
        qDebug() << "Displaying TempImage..." ;
    }
}

void MainWindow::updateView(cv::Mat& opencvImage, bool setOriginal, bool setToGrayScale ){
    //displayImage();
    // displayTransformedImage();
    QImage::Format imageFormat = setToGrayScale ? QImage::Format_Grayscale8 : QImage::Format_RGB888;

    if(setOriginal){
        ui->imagePanel->displayImage(opencvImage,nRows,nCols,imagesPanel::BIND_LABEL_ORIGINAL, imageFormat, true, cv::COLOR_BGR2RGB);
    }else{
        ui->imagePanel->displayImage(opencvImage,nRows,nCols,imagesPanel::BIND_LABEL_TRANSFORMED, imageFormat);

    }
}

void MainWindow::on_loadImageButton_2_clicked()
{
    QString filename =  QFileDialog::getOpenFileName(
                this,
                "Open Document",
                "QDir::currentPath()",
                "Images (*.png *.jpeg *.jpg *.gif);;All files (*.*) ");

    if( !filename.isNull() )
    {
        qDebug() << "selected file path : " << filename.toUtf8();
    }
    imagePath = filename.toStdString();
    imageStack.newImage(imagePath,false);
    nRows = imageStack.currentImage().rows;
    nCols = imageStack.currentImage().cols;
    qDebug() << "NROWS AND COLS STACK IMAGE" << nRows << " " << nCols;
    //setImages();
    updateView(imageStack.currentImage(),true,false);
    //Create temporary copy to store modifications and display in real time.
    tempImage = Mat(imageStack.currentImage());
}

void MainWindow::logErrorMessageFromForm(QString logMessage)
{
    logMessage = errorFormat + logMessage + endFormat;
    logAction(logMessage);
}


void MainWindow::setImages(bool setOriginal){


    if( setOriginal ){
        if(imagePath.length() > 0){
            cv::Mat image = cv::imread(imagePath, 1);
            originalImage = image;
            //transformedImage = originalImage;
        }else{
            cv::Mat image(1,1,CV_8UC1);
            originalImage = image;
            //transformedImage = originalImage;
        }
    }
    int r = originalImage.rows;
    int c = originalImage.cols;
    nRows = r;
    nCols = c;
    qDebug() << "NROWS AND COLS" << nRows << " " << nCols;
    //cv::Mat newImage(r,c,CV_8UC1);
    //cv::Mat newImage2(r,c,CV_8UC1);
    //transformedImage = originalImage;
}
//*/


void MainWindow::clearOptionsForm()
{

    //ui->optionsLayout->addWidget(NULL);
    QLayoutItem *item;

    while((item = ui->optionsLayout->takeAt(0))!= nullptr){
        if(item->widget()){
            delete item->widget();
        }
        delete item;
    }

    //ui->graphicsView->setScene(nullptr);

}

void MainWindow::grayScaleButton_clicked(){
    cv::Mat current = imageStack.currentImage();
    cv::Mat transformed = imageStack.newImage(nRows,nCols,true).first;
    std::string error_msg = "Applied Gray Scale. ";
    try{
        cv::cvtColor(current,transformed,cv::COLOR_BGR2GRAY);
    }catch(cv::Exception &e){
        error_msg += e.what();
    }
    logAction(QString::fromStdString(error_msg));
    //activeImage = transformedImage;
    // setImages(false);
    this->lastAppliedTransform = "grayScale";
    updateView(imageStack.currentImage(),false,true);

}


void MainWindow::hsvColorFilterButton_clicked(){
    activeOptionsForm = new hsvColorFilterOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
    this->lastAppliedTransform = "hsvColorFilter";
}
void MainWindow::bilateralFilterButton_clicked(){
    activeOptionsForm = new bilateralFilterOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    //connect(activeOptionsForm->applyTransformButton,SIGNAL(clicked()),this,SLOT(applyTransformButton_clicked()));
    connectOptionsFormSignals();
     this->lastAppliedTransform = "bilateralFilter";

}
void MainWindow::gaussianBlurButton_clicked(){


    activeOptionsForm = new gaussianBlurOptionsForm();
    //trOptions = activeOptionsForm->getOptionsForm();
    //int formT = activeOptionsForm->getType();
    //qDebug()<<"FORM TUPE: " << formT;
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    //connect(activeOptionsForm->applyTransformButton,SIGNAL(clicked()),this,SLOT(applyTransformButton_clicked()));
    connectOptionsFormSignals();
     this->lastAppliedTransform = "gaussianBlur";
    //optionsScene->addWidget(activeOptionsForm);
    //ui->graphicsView->setScene(optionsScene);
}

void MainWindow::medianBlurButton_clicked(){
    activeOptionsForm = new medianBlurOptionsForm();
    //ui->optionsLayout->d
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "medianBlur";
}

void MainWindow::simpleThresholdButton_clicked(){
    activeOptionsForm = new simpleThresholdOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "simpleThreshold";
}
void MainWindow::adaptiveThresholdButton_clicked(){

    activeOptionsForm = new adaptiveThresholdOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);

    connectOptionsFormSignals();
     this->lastAppliedTransform = "adaptiveThreshold";
}
void MainWindow::subtractImageButton_clicked(){
    activeOptionsForm = new imageSubtractionOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "imageSubtraction";
}
void MainWindow::morphButton_clicked(){
    activeOptionsForm = new morphOperationsOptionForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "morphOperation";
}
void MainWindow::openCVSobelButton_clicked(){
    activeOptionsForm = new sobelDerivativesOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "sobel";
}
void MainWindow::customSobelButton_clicked(){

    activeOptionsForm = new customSobelOptionsForm();
    clearOptionsForm();
    ui->optionsLayout->addWidget(activeOptionsForm);
    connectOptionsFormSignals();
     this->lastAppliedTransform = "customSobel";
}

void MainWindow::undoOperationButton_clicked()
{
    logAction("Undo button pressed");
    bool popped = imageStack.pop();
    if(popped){
        if(imageStack.size() > 1){
            updateView(imageStack.currentImage(),false);
            logAction("Updated transformed image label");
        }else{
            ui->imagePanel->clearImageLabel(imagesPanel::BIND_LABEL_TRANSFORMED);
            logAction("Cleared transformed image label");
            ui->checkBoxRecordSteps->setEnabled(true);
        }
        if(ui->checkBoxRecordSteps->isChecked()){
            this->recordedStrategy.removeLastStep();
        }
    }

}


void MainWindow::connectOptionsFormSignals(){

    if(activeOptionsForm != nullptr){

        connect(activeOptionsForm->applyTransformButton,SIGNAL(clicked()),this,SLOT(applyTransformButton_clicked()));
        connect(activeOptionsForm,SIGNAL(transformOptionValuesChanged()),this,SLOT(updateView_setTemporaryImage()));
        connect(activeOptionsForm,SIGNAL(logErrorMessage(QString)),this,SLOT(logErrorMessageFromForm(QString)));
        qDebug() << "Connected Temp Singnal" ;

    }

}


bool MainWindow::applyOpenCVTransform(Mat &baseImage, Mat &transformedImage){
    bool transformed = true;
    std::string error_msg;
    std::string operation_msg = "";

    if(activeOptionsForm !=nullptr){

        trOptions = activeOptionsForm->getOptionsForm();

        switch (activeOptionsForm->getType()){
        case baseOptionsForm::FORM_MEDIANBLUR:
        {
            medianBlurOptions *op = static_cast<medianBlurOptions*>(trOptions);
            operation_msg = "Previewing Median Blur. ";
            error_msg = apply_medianBlur(baseImage,transformedImage,op->appertureSize);
        }
            break;
        case baseOptionsForm::FORM_CUSTOMSOBEL:
            operation_msg = "Previewing Custom Sobel...";
            error_msg = apply_customSobelPlusBinary(baseImage,transformedImage,static_cast<customSobelThresholdOptions*>(trOptions));
            break;
        case baseOptionsForm::FORM_GAUSSIANBLUR:
            operation_msg = "Previewing gaussian Blur...";
            error_msg = apply_gaussianBlur(baseImage,transformedImage,static_cast<gaussianBlurOptions*>(trOptions));
            break;
        case baseOptionsForm::FORM_BILATERALFILTER:
            operation_msg =  "Previewing Bilateral Filter...";
            error_msg = apply_bilateralFilter(baseImage,transformedImage,static_cast<bilateralFilterOptions*>(trOptions));
            break;
        case baseOptionsForm::FORM_MORPHOPERATIONS:
            operation_msg = "Previewing Operations TO-DO";
            break;
        case baseOptionsForm::FORM_SIMPLETHRESHOLD:
            operation_msg =  "Previewing Simple Threshold...";
            error_msg = apply_simpleThreshold(baseImage,transformedImage,static_cast<simpleThresholdOptions*>(trOptions));
            break;
        case baseOptionsForm::FORM_SOBELDERIVATIVES:
            operation_msg =  "Previewing Sobel Derivatives...";
            error_msg = apply_sobelDerivatives(baseImage,transformedImage,static_cast<sobelDerivativesOptions*>(trOptions));

            break;
        case baseOptionsForm::FORM_ADAPTIVETHRESHOLD:
            operation_msg = "Previewing Adaptive Thresholding...";
            error_msg = apply_adaptiveThreshold(baseImage,transformedImage,static_cast<adaptiveThresholdOptions*>(trOptions));
            break;
        case baseOptionsForm::FORM_IMAGESSUBTRACTION:
            //apply_imgSubtraction(current,transformedImage,transformedImage);
            error_msg = "Subtracao nao implementada.";
            break;
        default:
            transformed = false;
            qDebug() << "Unknown operation to apply: " << activeOptionsForm->getType();
            error_msg = "Unsuported transform operation: " + activeOptionsForm->getType();
        }
    }else{
        transformed = false;
        error_msg = "No Transformation Form Active!";
    }
    QString logMsg = QString::fromStdString(operation_msg)
                        + errorFormat + QString::fromStdString(error_msg) + endFormat;
    logAction(logMsg);
    return transformed;
}



void MainWindow::applyTransformButton_clicked()
{
    cv::Mat current = imageStack.currentImage();
    bool imageShownInGrayScale = activeOptionsForm->imageNeedsGrayScale;
    imageAndColorScheme pair = imageStack.newImage(nRows,nCols,imageShownInGrayScale);
    bool showInGrayScale = pair.second;
    bool transformed = applyOpenCVTransform(current, pair.first);
    if(transformed){
        Mat current = imageStack.currentImage();
        //setImages(false);
        updateView(current,false,showInGrayScale);
        if(ui->checkBoxRecordSteps->isChecked()){
           this->recordedStrategy.addOperation(this->lastAppliedTransform, *(activeOptionsForm->getOptionsForm()));
        }
        if(ui->checkBoxRecordSteps->isEnabled()){
            ui->checkBoxRecordSteps->setEnabled(false);
        }
    }else{
        imageStack.pop();
    }
}

void MainWindow::drawContoursButton_clicked()
{

    cntParser.g(imageStack.newImage(imageStack.currentImage(),true).first);
    logAction(QString::fromStdString("Drawing Contours on Image") + "<br>");
    updateView(imageStack.currentImage(),false);
}

void MainWindow::findContoursButton_clicked()
{
    cntParser.f(imageStack.currentImage());
}

void MainWindow::logAction(QString logMessage){

    ui->logTextBox->insertHtml(logMessage + endLine);

    //ui->plainTextEdit->appendPlainText(logMessage);

}
