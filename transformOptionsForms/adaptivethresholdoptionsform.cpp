#include "adaptivethresholdoptionsform.h"
#include "ui_adaptivethresholdForm.h"
#include "ui_baseoptionsform.h"



adaptiveThresholdOptionsForm::adaptiveThresholdOptionsForm()
{

    threshOptions = new adaptiveThresholdOptions();

    thresholdOptionsBox = createComboBoxInputs(threshOptions->thresholdTypes);
    adaptiveOptionsBox = createComboBoxInputs(threshOptions->adaptiveTypes);
    //createTextInputs()
    constantBox = createDoubleSpinBoxInputs(threshOptions->constant,(double)0,20.0);
    maxValueBox = createDoubleSpinBoxInputs(threshOptions->maxValue,(double)0,255.0);
    blockSizeBox = createSpinBoxInputs(threshOptions->blockSize,3,15);

    constantLabel = createLabels("Constant");
    maxValueLabel = createLabels( "MaxValue");
    thresholdTypeLabel = createLabels("ThresholdType");
    adaptiveMethodLabel = createLabels( "AdaptiveMethod");
    blockSizeLabel = createLabels("BlockSize");

    int row = 0;
    this->qLayout = new QGridLayout();
    this->qLayout->addWidget(constantLabel,row,0);
    this->qLayout->addWidget(constantBox,row,1);
    row++;
    this->qLayout->addWidget(maxValueLabel,row,0);
    this->qLayout->addWidget(maxValueBox,row,1);
    row++;
    this->qLayout->addWidget(thresholdTypeLabel,row,0);
    this->qLayout->addWidget(thresholdOptionsBox,row,1);
    row++;
    this->qLayout->addWidget(adaptiveMethodLabel,row,0);
    this->qLayout->addWidget(adaptiveOptionsBox,row,1);
    row++;
    this->qLayout->addWidget(blockSizeLabel,row,0);
    this->qLayout->addWidget(blockSizeBox,row,1);

    blockSizeBox->setSingleStep(2);

    this->createButtons();
    this->setBasicLayout();




    connect(blockSizeBox,QOverload<int>::of(&QSpinBox::valueChanged),this, &adaptiveThresholdOptionsForm::blockSizeBoxUpdated );
    connect(maxValueBox,QOverload<double>::of(&QDoubleSpinBox::valueChanged),this, &adaptiveThresholdOptionsForm::maxValueBoxUpdated );
    connect(constantBox,QOverload<double>::of(&QDoubleSpinBox::valueChanged),this, &adaptiveThresholdOptionsForm::constantBoxUpdated );

    connect(adaptiveOptionsBox,QOverload<const QString &>::of(&QComboBox::currentIndexChanged),this,&adaptiveThresholdOptionsForm::adaptiveOptionsBoxUpdated );
    connect(thresholdOptionsBox,QOverload<const QString &>::of(&QComboBox::currentIndexChanged),this,&adaptiveThresholdOptionsForm::thresholdOptionsBoxUpdated );


}


int adaptiveThresholdOptionsForm::getType()
{
    return FORM_ADAPTIVETHRESHOLD;
}

adaptiveThresholdOptions *adaptiveThresholdOptionsForm::getOptionsForm()
{
    return threshOptions;
}

void adaptiveThresholdOptionsForm::adaptiveOptionsBoxUpdated(const QString &text)
{
    threshOptions->adaptiveMethod = threshOptions->adaptiveTypes[text.toStdString()];
    emit transformOptionValuesChanged();
    qDebug() << "emitted signal??" ;
}

void adaptiveThresholdOptionsForm::thresholdOptionsBoxUpdated(const QString &text)
{
    threshOptions->thresholdType = threshOptions->thresholdTypes[text.toStdString()];
    emit transformOptionValuesChanged();
}

void adaptiveThresholdOptionsForm::constantBoxUpdated(double newValue)
{
    threshOptions->constant = newValue;
    emit transformOptionValuesChanged();
}

void adaptiveThresholdOptionsForm::blockSizeBoxUpdated(int newValue)
{
    if(newValue % 2 == 1){
        threshOptions->blockSize = newValue;
        emit transformOptionValuesChanged();
    }else{

        emit logErrorMessage("Box Size needs to be an odd value!");
    }
}

void adaptiveThresholdOptionsForm::maxValueBoxUpdated(double newValue)
{
    threshOptions->maxValue = newValue;
    emit transformOptionValuesChanged();
    qDebug() << "emitted signal??" ;
}



