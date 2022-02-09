#include "customsobeloptionsform.h"

customSobelOptionsForm::customSobelOptionsForm()
{

    trOptions = new customSobelThresholdOptions();

    thresholdValLabel = createLabels("Threshold Value");
    maxValLabel = createLabels("Max Value");
    applyThreshLabel = createLabels("Apply Threshold");
    kernelToUseLabel = createLabels("Kernel to Use");

    thresholdValBox = createSpinBoxInputs(trOptions->thresholdVal,0,255);
    maxValBox = createSpinBoxInputs(trOptions->maxVal,0,255);
    applyThreshBox = new QCheckBox(this);
    kernelToUseBox = createComboBoxInputs(trOptions->kernelTypes);

    QWidget* array[] = {thresholdValLabel, thresholdValBox
                       ,maxValLabel, maxValBox
                       ,applyThreshLabel, applyThreshBox
                       ,kernelToUseLabel, kernelToUseBox};

    build2x2GridLayout(array,8);
    createButtons();
    setBasicLayout();

    connect(thresholdValBox,QOverload<int>::of(&QSpinBox::valueChanged),
            this, &customSobelOptionsForm::thresholdValBoxUpdated );
    connect(maxValBox,QOverload<int>::of(&QSpinBox::valueChanged),
            this, &customSobelOptionsForm::maxValBoxUpdated );
    connect(applyThreshBox,SIGNAL(QCheckBox::stateChanged(int state)),
            this, SLOT(applyThreshBoxChanged(int state)));
    connect(kernelToUseBox,QOverload<const QString &>::of(&QComboBox::currentIndexChanged)
            ,this,&customSobelOptionsForm::kernelToUseBoxUpdated );


}


void customSobelOptionsForm::thresholdValBoxUpdated(int newValue){
    trOptions->thresholdVal = newValue;
    emit transformOptionValuesChanged();
}
void customSobelOptionsForm::maxValBoxUpdated(int newValue){
    trOptions->maxVal = newValue;
    emit transformOptionValuesChanged();
}
void customSobelOptionsForm::applyThreshBoxChanged(int state){
    trOptions->applyThresh = !trOptions->applyThresh;
    emit transformOptionValuesChanged();
}
void customSobelOptionsForm::kernelToUseBoxUpdated(const QString newValue){
    trOptions->kernelToUse = trOptions->kernelTypes[newValue.toStdString()];
    emit transformOptionValuesChanged();
}
int customSobelOptionsForm::getType(){
    return FORM_CUSTOMSOBEL;
}
customSobelThresholdOptions* customSobelOptionsForm::getOptionsForm(){
    return trOptions;
}
