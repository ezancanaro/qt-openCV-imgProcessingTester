#include "simplethresholdoptionsform.h"

simpleThresholdOptionsForm::simpleThresholdOptionsForm()
{
    QLabel *temp = createLabels("Not implemented yet");


    trOptions = new simpleThresholdOptions();

    //trOptions->thresholdType;

    box_maxVal = createDoubleSpinBoxInputs(trOptions->maxVal,0,255);
    box_thresholdVal = createDoubleSpinBoxInputs(trOptions->thresholdVal,0,255);
    box_thresholdType = createComboBoxInputs(trOptions->thresholdTypes);

    label_maxVal = createLabels("Max Value");
    label_thresholdVal = createLabels("Threshold Value");
    label_thresholdType = createLabels("Threshold Type");

    QWidget* array[]={label_maxVal,box_maxVal
                      ,label_thresholdVal,box_thresholdVal
                      ,label_thresholdType, box_thresholdType};
    build2x2GridLayout(array,6);
    createButtons();
    //this->applyTransformButton->setEnabled(false);
    setBasicLayout();
}

int simpleThresholdOptionsForm::getType()
{
    return FORM_SIMPLETHRESHOLD;
}

simpleThresholdOptions *simpleThresholdOptionsForm::getOptionsForm()
{
    return trOptions;
}
