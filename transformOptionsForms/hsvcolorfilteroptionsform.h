#ifndef HSVCOLORFILTEROPTIONSFORM_H
#define HSVCOLORFILTEROPTIONSFORM_H

#include <algorithm>
#include "baseoptionsform.h"

#include <transformOptions/hsvcolorfilteroptions.h>



class hsvColorFilterOptionsForm : public baseOptionsForm
{

public:
    explicit hsvColorFilterOptionsForm();
    ~hsvColorFilterOptionsForm();

    hsvColorFilterOptions *threshOptions;

    QSlider *slider_hueLow;
    QSlider *slider_hueHigh;
    QSlider *slider_saturationLow;
    QSlider *slider_saturationHigh;
    QSlider *slider_valueLow;
    QSlider *slider_valueHigh;

    QLabel *label_hueLow;
    QLabel *label_hueHigh;
    QLabel *label_saturationLow;
    QLabel *label_saturationHigh;
    QLabel *label_valueLow;
    QLabel *label_valueHigh;

    virtual int getType();
    virtual transformOptions *getOptionsForm();

public slots:

    void sliderHueLowUpdated(int newValue);
    void sliderHueHighUpdated(int newValue);
    void sliderValueLowUpdated(int newValue);
    void sliderValueHighUpdated(int newValue);
    void sliderSaturationLowUpdated(int newValue);
    void sliderSaturationHighUpdated(int newValue);
};

#endif // HSVCOLORFILTEROPTIONSFORM_H
