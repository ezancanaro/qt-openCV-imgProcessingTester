#include "gaussianbluroptionsform.h"
#include "ui_gaussianbluroptionsform.h"



gaussianBlurOptionsForm::gaussianBlurOptionsForm(QWidget *parent) :
    baseOptionsForm(parent),
    ui(new Ui::gaussianBlurOptionsForm)
{
    //ui->setupUi(this);

    gbOptions = new gaussianBlurOptions();

    this->createTextInputs();
    this->createComboBoxInputs();
    this->createLabels();
/*
    gbOptions.sigmaX;
    gbOptions.sigmaY;
    gbOptions.kernelSizeX;
    gbOptions.kernelSizeY;
*/


    this->qLayout = new QGridLayout();
    this->qLayout->addWidget(this->borderLabel,0,0);
    this->qLayout->addWidget(this->box,0,1);
    this->qLayout->addWidget(this->sigmaXLabel,1,0);
    this->qLayout->addWidget(this->sigmaXinput,1,1);
    this->qLayout->addWidget(this->sigmaYLabel,2,0);
    this->qLayout->addWidget(this->sigmaYinput,2,1);
    this->qLayout->addWidget(this->kernelSizeXLabel,3,0);
    this->qLayout->addWidget(this->kernelSizeXinput,3,1);
    this->qLayout->addWidget(this->kernelSizeYLabel,4,0);
    this->qLayout->addWidget(this->kernelSizeYinput,4,1);

    this->createButtons();
    this->setBasicLayout();


    connect(sigmaXinput,QOverload<double>::of(&QDoubleSpinBox::valueChanged),this, &gaussianBlurOptionsForm::sigmaXSpinBoxUpdated );
    connect(sigmaYinput,QOverload<double>::of(&QDoubleSpinBox::valueChanged),this, &gaussianBlurOptionsForm::sigmaYSpinBoxUpdated );
    connect(kernelSizeXinput,QOverload<int>::of(&QSpinBox::valueChanged),this, &gaussianBlurOptionsForm::kernelSizeXSpinBoxUpdated );
    connect(kernelSizeYinput,QOverload<int>::of(&QSpinBox::valueChanged),this, &gaussianBlurOptionsForm::kernelSizeYSpinBoxUpdated );
    connect(box,QOverload<const QString &>::of(&QComboBox::currentIndexChanged),this,&gaussianBlurOptionsForm::borderTypeBoxUpdated );

}

gaussianBlurOptionsForm::~gaussianBlurOptionsForm()
{
    /*delete this->sigmaXLabel;
   delete this->box;
     delete this->sigmaXinput;
    delete this->sigmaYinput;
    delete this->kernelSizeXinput;
    delete this->kernelSizeYinput;
    delete this->qLayout;
    delete this->borderLabel;
    delete this->sigmaXLabel;
     delete this->sigmaYLabel;
    delete this->kernelSizeXLabel;
     delete this->kernelSizeYLabel;
     //*/
    delete ui;
}


void gaussianBlurOptionsForm::createLabels(){
    borderLabel = new QLabel(this);
    sigmaXLabel = new QLabel(this);
    sigmaYLabel = new QLabel(this);
    kernelSizeXLabel = new QLabel(this);
    kernelSizeYLabel = new QLabel(this);
    borderLabel->setText("Border");
    sigmaXLabel->setText("SigmaX");
    sigmaYLabel->setText("SigmaY");
    kernelSizeXLabel->setText("KernelSizeX");
    kernelSizeYLabel->setText("KernelSizeY");
    //borderLabel->show();
}

void gaussianBlurOptionsForm::sigmaXSpinBoxUpdated(double newValue)
{
    qDebug() << "Updating options value from spinBox:: " << newValue;
    gbOptions->sigmaX = newValue;
    /*switch (spinBoxId) {
        case spinBoxes::sigmaX :
            gbOptions->sigmaX = sigmaXinput->value();
            break;
        case spinBoxes::sigmaY :
        gbOptions->sigmaY = sigmaYinput->value();
        break;
    case spinBoxes::kernelX :
        gbOptions->kernelSizeX = kernelSizeXinput->value();
        break;
    case spinBoxes::kerneY :
        gbOptions->kernelSizeY = kernelSizeYinput->value();
        break;
    default:
        qDebug() << "Trying to set value of unknown spinBox: " << spinBoxId;
    }*/


}

void gaussianBlurOptionsForm::sigmaYSpinBoxUpdated(double newValue)
{
    qDebug() << "Updating options value from spinBox:: " << newValue;
    gbOptions->sigmaY = newValue;
    emit transformOptionValuesChanged();
}
void gaussianBlurOptionsForm::kernelSizeXSpinBoxUpdated(int newValue)
{
    qDebug() << "Updating options value from spinBox:: " << newValue;
    gbOptions->kernelSizeX = newValue;
    emit transformOptionValuesChanged();
}
void gaussianBlurOptionsForm::kernelSizeYSpinBoxUpdated(int newValue)
{
    qDebug() << "Updating options value from spinBox:: " << newValue;
    gbOptions->kernelSizeY = newValue;
    emit transformOptionValuesChanged();
}

void gaussianBlurOptionsForm::borderTypeBoxUpdated(const QString &text)
{
    gbOptions->borderType = gbOptions->possibleBorderTypes[text.toStdString()];
    emit transformOptionValuesChanged();
}


void gaussianBlurOptionsForm::createTextInputs(){
    sigmaXinput = new QDoubleSpinBox(this);
    sigmaYinput = new QDoubleSpinBox(this);
    kernelSizeXinput = new QSpinBox(this);
    kernelSizeYinput = new QSpinBox(this);
    sigmaXinput->setValue(gbOptions->sigmaX);
    sigmaYinput->setValue(gbOptions->sigmaY);
    kernelSizeXinput->setValue(gbOptions->kernelSizeX);
    kernelSizeYinput->setValue(gbOptions->kernelSizeY);
    kernelSizeXinput->setRange(2,20);
    kernelSizeYinput->setRange(2,20);
    sigmaXinput->setRange(0,255);
    sigmaYinput->setRange(0,255);
}

void gaussianBlurOptionsForm::createComboBoxInputs(){
    QStringList boxItems;
    std::unordered_map<std::string,int>::iterator it;
    for(it = gbOptions->possibleBorderTypes.begin(); it != gbOptions->possibleBorderTypes.end(); it++){
        boxItems.append(QString::fromStdString(it->first));
        //qDebug() << "Gaussian Border Options : " << QString::fromStdString(it->first);
    }
    box = new QComboBox(this);
    box->addItems(boxItems);
    box->setEditable(false);
    box->setInsertPolicy(QComboBox::NoInsert);
    //box->show();

}

int gaussianBlurOptionsForm::getType(){
    qDebug() << "GAUSSIAN BLUR form";
    return FORM_GAUSSIANBLUR;
}

gaussianBlurOptions *gaussianBlurOptionsForm::getOptionsForm()
{
    return this->gbOptions ;
}
