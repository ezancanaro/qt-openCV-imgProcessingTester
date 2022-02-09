#include "imagesubtractionoptionsform.h"

imageSubtractionOptionsForm::imageSubtractionOptionsForm()
{

    //QLabel *temp = createLabels("Not implemented yet");

    trOptions = new imageSubtractionOptions();
    box_depthType = createSpinBoxInputs(trOptions->depthType,(int)-1,5);
    box_subMask = createLabels("Not implemented");
    label_subMask = createLabels("Sub Mask");
    label_depthType = createLabels("Depth Type");

    QWidget* array[]={label_subMask,box_subMask
                     ,label_depthType,box_depthType};

    build2x2GridLayout(array,4);
    createButtons();
    //this->applyTransformButton->setEnabled(false);
    setBasicLayout();
    //trOptions->
}

int imageSubtractionOptionsForm::getType()
{
    return FORM_IMAGESSUBTRACTION;
}

imageSubtractionOptions *imageSubtractionOptionsForm::getOpstionsForm()
{
    return trOptions;
}

