#ifndef SEMPETHRESHOLDOPTIONSFORM_H
#define SEMPETHRESHOLDOPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/simplethresholdoptions.h>

class simpleThresholdOptionsForm : public baseOptionsForm
{
public:
    simpleThresholdOptionsForm();

    simpleThresholdOptions *trOptions;

    QDoubleSpinBox *box_maxVal;
    QDoubleSpinBox *box_thresholdVal;
    QComboBox *box_thresholdType;
    QLabel *label_maxVal;
    QLabel *label_thresholdVal;
    QLabel *label_thresholdType;


    virtual int getType();
    virtual simpleThresholdOptions *getOptionsForm();
};

#endif // SEMPETHRESHOLDOPTIONSFORM_H
