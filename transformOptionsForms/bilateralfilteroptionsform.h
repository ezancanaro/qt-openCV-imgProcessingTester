#ifndef BILATERALFILTEROPTIONSFORM_H
#define BILATERALFILTEROPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/bilateralfilteroptions.h>

class bilateralFilterOptionsForm : public baseOptionsForm
{
public:
    bilateralFilterOptionsForm();

    bilateralFilterOptions *trOptions;

    QSpinBox *sigmaColorBox;
    QSpinBox *sigmaSpaceBox;
    QSpinBox *neighbourhoodDiameterBox;
    QLabel *sigmaColorLabel;
    QLabel *sigmaSpaceLabel;
    QLabel *neightbourhoodDiameterLabel;


    virtual int getType();
    virtual bilateralFilterOptions *getOptionsForm();
public slots:
    void sigmaColorBoxUpdated(int newValue);
    void sigmaSpaceBoxUpdated(int newValue);
    void neighbourhoodDiameterBoxUpdated(int newValue);

};

#endif // BILATERALFILTEROPTIONSFORM_H
