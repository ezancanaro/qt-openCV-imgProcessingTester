#ifndef MEDIANBLUROPTIONSFORM_H
#define MEDIANBLUROPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/medianbluroptions.h>

class medianBlurOptionsForm : public baseOptionsForm
{
public:
    medianBlurOptionsForm();

    medianBlurOptions *trOptions;

    QSpinBox *box_appertureSize;
    QLabel *label_appertureSize;


    virtual int getType();
    virtual medianBlurOptions *getOptionsForm();

};

#endif // MEDIANBLUROPTIONSFORM_H
