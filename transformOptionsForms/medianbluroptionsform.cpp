#include "medianbluroptionsform.h"

medianBlurOptionsForm::medianBlurOptionsForm()
{
    //QLabel *temp = createLabels("Not implemented yet");

    trOptions = new medianBlurOptions();


    box_appertureSize = createSpinBoxInputs(trOptions->appertureSize,(int)0,255);
    label_appertureSize = createLabels("Apperture Size");

    QWidget* array[]={label_appertureSize,box_appertureSize};
    build2x2GridLayout(array,2);
    createButtons();
    //this->applyTransformButton->setEnabled(false);
    setBasicLayout();


}

int medianBlurOptionsForm::getType()
{
    return FORM_MEDIANBLUR;
}

medianBlurOptions *medianBlurOptionsForm::getOptionsForm()
{
    return trOptions;
}
