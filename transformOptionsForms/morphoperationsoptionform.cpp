#include "morphoperationsoptionform.h"

morphOperationsOptionForm::morphOperationsOptionForm()
{
    QLabel *temp = createLabels("Not implemented yet");

    trOptions = new morphOperationOptions();


    label_operation = createLabels("Operation");
    label_kernelSizeX = createLabels("KernelSize X");
    label_kernelSizeY =createLabels("KernelSize Y");
    label_anchorX = createLabels("AnchorPoint X");
    label_anchorY = createLabels("AnchorPoint Y");
    label_iterations = createLabels("Iterations");
    label_borderType = createLabels("Border Type");
    label_kernelShape = createLabels("Kernel Shape");

    box_borderType = createComboBoxInputs(trOptions->borderTypes, trOptions->borderType);
    box_operation = createComboBoxInputs(trOptions->operations, trOptions->operation);
    box_kernelShape = createComboBoxInputs(trOptions->kernelShapes, trOptions->kernelShape);

    box_kernelSyzeX = createSpinBoxInputs(trOptions->kernelSizeX,0,20);
    box_kernelSyzeY = createSpinBoxInputs(trOptions->kernelSizeY,0,20);
    box_anchorX = createSpinBoxInputs(trOptions->anchorX,-1,1000);
    box_anchorY = createSpinBoxInputs(trOptions->anchorY,-1,1000);
    box_iterations = createSpinBoxInputs(trOptions->iterations,1,100);



    QWidget* array[]={label_operation, box_operation
                     ,label_anchorX, box_anchorX
                     ,label_anchorY, box_anchorY
                     ,label_borderType, box_borderType
                     ,label_iterations, box_iterations
                     ,label_kernelShape, box_kernelShape
                     ,label_kernelSizeX, box_kernelSyzeX
                     ,label_kernelSizeY, box_kernelSyzeY};

    build2x2GridLayout(array,16);
    createButtons();
    //this->applyTransformButton->setEnabled(false);
    setBasicLayout();
}

int morphOperationsOptionForm::getType()
{
    return FORM_MORPHOPERATIONS;
}

morphOperationOptions *morphOperationsOptionForm::getOptionsForm()
{
    return trOptions;
}
