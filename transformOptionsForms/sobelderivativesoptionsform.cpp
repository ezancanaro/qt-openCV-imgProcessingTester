#include "sobelderivativesoptionsform.h"

sobelDerivativesOptionsForm::sobelDerivativesOptionsForm()
{
    QLabel *temp = createLabels("Not implemented yet");

    trOptions = new sobelDerivativesOptions();
    trOptions->beta;
    trOptions->alpha;
    trOptions->delta;
    trOptions->gamma;
    trOptions->scale;
    trOptions->ddepth;//int
    trOptions->weigthX;
    trOptions->weigthY;
    trOptions->borderType;
    trOptions->kernelSize;

    box_alpha = createDoubleSpinBoxInputs(trOptions->alpha,0,255);
    box_beta = createDoubleSpinBoxInputs(trOptions->beta,0,255);
    box_delta = createDoubleSpinBoxInputs(trOptions->delta,0,255);
    box_gamma = createDoubleSpinBoxInputs(trOptions->gamma,0,255);
    box_scale = createDoubleSpinBoxInputs(trOptions->scale,0,255);
    box_weigthX = createDoubleSpinBoxInputs(trOptions->weigthX,0,255);
    box_weigthY = createDoubleSpinBoxInputs(trOptions->weigthY,0,255);
    box_ddepth = createSpinBoxInputs(trOptions->ddepth,0,255);
    box_kernelSize = createSpinBoxInputs(trOptions->kernelSize,0,255);
    box_borderType = createComboBoxInputs(trOptions->borderTypes);

    label_alpha = createLabels("Alpha");
    label_beta = createLabels("Beta");
    label_delta = createLabels("Delta");
    label_gamma = createLabels("Gamma");
    label_scale = createLabels("Scale");
    label_ddepth = createLabels("DDepth");
    label_weigthX = createLabels("Weigth X");
    label_weigthY = createLabels("Weigth Y");
    label_borderType = createLabels("Border Type");
    label_kernelSize = createLabels("Kernel Sizes");


    QWidget* array[]={label_alpha,box_alpha
                     ,label_beta, box_beta
                     ,label_delta, box_delta
                     ,label_gamma, box_gamma
                     ,label_scale, box_scale
                     ,label_ddepth, box_ddepth
                     ,label_weigthX, box_weigthX
                     ,label_weigthY, box_weigthY
                     ,label_kernelSize, box_kernelSize
                     ,label_borderType, box_borderType};
    build2x2GridLayout(array,20);
    createButtons();
   // this->applyTransformButton->setEnabled(false);
    setBasicLayout();
}

int sobelDerivativesOptionsForm::getType()
{
    return FORM_SOBELDERIVATIVES;
}

sobelDerivativesOptions *sobelDerivativesOptionsForm::getOptionsForm()
{
    return trOptions;
}
