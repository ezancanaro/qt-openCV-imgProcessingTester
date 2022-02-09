#ifndef IMAGESUBTRACTIONOPTIONSFORM_H
#define IMAGESUBTRACTIONOPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/imagesubtractionoptions.h>

class imageSubtractionOptionsForm : public baseOptionsForm
{
public:
    imageSubtractionOptionsForm();

    imageSubtractionOptions *trOptions;


    QSpinBox *box_depthType;
    QLabel *box_subMask;
    QLabel *label_depthType;
    QLabel *label_subMask;

    virtual int getType();
    virtual imageSubtractionOptions* getOpstionsForm();
};

#endif // IMAGESUBTRACTIONOPTIONSFORM_H
