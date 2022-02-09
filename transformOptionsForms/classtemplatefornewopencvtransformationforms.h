#ifndef CLASSTEMPLATEFORNEWOPENCVTRANSFORMATIONFORMS_H
#define CLASSTEMPLATEFORNEWOPENCVTRANSFORMATIONFORMS_H

#include "baseoptionsform.h"



class classTemplateForNewOpenCVtransformationForms : public baseOptionsForm
{
public:

    transformOptions *threshOptions;

    QSlider *slider_example1;
    QSpinBox *box_exampl2;

    QLabel *label_example1;
    QLabel *label_example2;

    virtual int getType();
    virtual transformOptions *getOptionsForm();

    classTemplateForNewOpenCVtransformationForms();
};

#endif // CLASSTEMPLATEFORNEWOPENCVTRANSFORMATIONFORMS_H
