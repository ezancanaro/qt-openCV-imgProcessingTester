#ifndef SOBELDERIVATIVESOPTIONSFORM_H
#define SOBELDERIVATIVESOPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/sobelderivativesoptions.h>

class sobelDerivativesOptionsForm : public baseOptionsForm
{
public:
    sobelDerivativesOptionsForm();

    sobelDerivativesOptions *trOptions;

    QDoubleSpinBox *box_alpha;
    QDoubleSpinBox *box_beta;
    QDoubleSpinBox *box_delta;
    QDoubleSpinBox *box_gamma;
    QDoubleSpinBox *box_scale;
    QDoubleSpinBox *box_weigthX;
    QDoubleSpinBox *box_weigthY;
    QSpinBox *box_ddepth;
    QSpinBox *box_kernelSize;
    QComboBox *box_borderType;

    QLabel *label_alpha;
    QLabel *label_beta;
    QLabel *label_delta;
    QLabel *label_gamma;
    QLabel *label_scale;
    QLabel *label_weigthX;
    QLabel *label_weigthY;
    QLabel *label_ddepth;
    QLabel *label_kernelSize;
    QLabel *label_borderType;

    virtual int getType();
    virtual sobelDerivativesOptions *getOptionsForm();

};

#endif // SOBELDERIVATIVESOPTIONSFORM_H
