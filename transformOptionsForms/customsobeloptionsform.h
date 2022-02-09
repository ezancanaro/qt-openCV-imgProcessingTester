#ifndef CUSTOMSOBELOPTIONSFORM_H
#define CUSTOMSOBELOPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/customsobelthresholdoptions.h>

class customSobelOptionsForm : public baseOptionsForm
{
private:
    customSobelThresholdOptions *trOptions;

public:
    customSobelOptionsForm();
    virtual int getType();
    virtual customSobelThresholdOptions *getOptionsForm();

    QLabel *thresholdValLabel;
    QLabel *maxValLabel;
    QLabel *applyThreshLabel;
    QLabel *kernelToUseLabel;
    QSpinBox *thresholdValBox;
    QSpinBox *maxValBox;
    QCheckBox *applyThreshBox;
    QComboBox *kernelToUseBox;

    void thresholdValBoxUpdated(int newValue);
    void maxValBoxUpdated(int newValue);
    void applyThreshBoxChanged(int state);
    void kernelToUseBoxUpdated(const QString newValue);

};

#endif // CUSTOMSOBELOPTIONSFORM_H
