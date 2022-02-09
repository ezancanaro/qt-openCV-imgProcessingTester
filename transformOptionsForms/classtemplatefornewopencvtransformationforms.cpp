#include "classtemplatefornewopencvtransformationforms.h"

classTemplateForNewOpenCVtransformationForms::classTemplateForNewOpenCVtransformationForms()
{

    threshOptions = new transformOptions();

    label_example1 = createLabels("Example 1 text");
    label_example2 = createLabels("example2 text");

    slider_example1 = createIntSliders(60,0,255);
    box_exampl2 = createSpinBoxInputs(2,0,10);

    QWidget* array[] = {label_example1,slider_example1
                        ,label_example2, box_exampl2
                       };

    build2x2GridLayout(array,4);
    this->createButtons();
    this->setBasicLayout();

}

int classTemplateForNewOpenCVtransformationForms::getType()
{
    return FORM_MEDIANBLUR;//Add this form to base class enum
}

transformOptions *classTemplateForNewOpenCVtransformationForms::getOptionsForm()
{
    return threshOptions;
}


