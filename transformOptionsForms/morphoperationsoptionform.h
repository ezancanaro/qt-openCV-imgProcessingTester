#ifndef MORPHOPERATIONSOPTIONFORM_H
#define MORPHOPERATIONSOPTIONFORM_H

#include "baseoptionsform.h"

#include <transformOptions/morphoperationoptions.h>

class morphOperationsOptionForm : public baseOptionsForm
{
public:
    morphOperationsOptionForm();

    morphOperationOptions *trOptions;

    QLabel *label_operation;
    QLabel *label_kernelSizeX;
    QLabel *label_kernelSizeY;
    QLabel *label_anchorX;
    QLabel *label_anchorY;
    QLabel *label_iterations;
    QLabel *label_borderType;
    QLabel *label_kernelShape;

    QComboBox *box_borderType;
    QComboBox *box_operation;
    QComboBox *box_kernelShape;
    QSpinBox *box_kernelSyzeX;
    QSpinBox *box_kernelSyzeY;
    QSpinBox *box_anchorX;
    QSpinBox *box_anchorY;
    QSpinBox *box_iterations;


    virtual int getType();
    virtual morphOperationOptions *getOptionsForm();
};

#endif // MORPHOPERATIONSOPTIONFORM_H
