#include "hsvcolorfilteroptionsform.h"

hsvColorFilterOptionsForm::hsvColorFilterOptionsForm()
{

    threshOptions = new hsvColorFilterOptions();

    label_hueLow = createLabels("HueLow");
    label_hueHigh = createLabels("HueHigh");
    label_valueLow = createLabels("ValueLow");
    label_valueHigh = createLabels("valueHigh");
    label_saturationLow = createLabels("SaturationLow");
    label_saturationHigh = createLabels("SaturationHigh");
    slider_hueLow = createIntSliders(0,0,255);
    slider_hueHigh = createIntSliders(255,0,255);
    slider_valueLow = createIntSliders(0,0,255);
    slider_valueHigh = createIntSliders(255,0,255);
    slider_saturationLow = createIntSliders(0,0,255);
    slider_saturationHigh = createIntSliders(255,0,255);

    int row = 0;


    QWidget* array[] = {label_hueLow, label_hueHigh,
                        slider_hueLow,slider_hueHigh,
                        label_valueLow, label_valueHigh,
                        slider_valueLow,slider_valueHigh,
                        label_saturationLow, label_saturationHigh,
                        slider_saturationLow, slider_saturationHigh,
                         };

    build2x2GridLayout(array,12);
    this->createButtons();
    this->setBasicLayout();

    this->imageNeedsGrayScale = false;

    connect(slider_hueLow,         &QSlider::valueChanged, this, &hsvColorFilterOptionsForm::sliderHueLowUpdated );
    connect(slider_hueHigh,        &QSlider::valueChanged,this,&hsvColorFilterOptionsForm::sliderHueHighUpdated ) ;
    connect(slider_valueLow,       &QSlider::valueChanged,this,&hsvColorFilterOptionsForm::sliderValueLowUpdated );
    connect(slider_valueHigh    ,  &QSlider::valueChanged,this,&hsvColorFilterOptionsForm::sliderValueHighUpdated );
    connect(slider_saturationLow,  &QSlider::valueChanged,this,&hsvColorFilterOptionsForm::sliderSaturationLowUpdated );
    connect(slider_saturationHigh, &QSlider::valueChanged,this,&hsvColorFilterOptionsForm::sliderSaturationHighUpdated );


}

hsvColorFilterOptionsForm::~hsvColorFilterOptionsForm()
{

}

int hsvColorFilterOptionsForm::getType()
{
    return FORM_HSVCOLORFILTER;
}

transformOptions *hsvColorFilterOptionsForm::getOptionsForm()
{
    return this->threshOptions;
}



void hsvColorFilterOptionsForm::sliderHueLowUpdated(int newValue)
{
    newValue = std::min(newValue,threshOptions->hue_high-1);
    threshOptions->hue_low = newValue;
    slider_hueLow->setValue(newValue);
    qDebug() << "Sldier Low value Changed: " << threshOptions->hue_low <<" HIGH: " <<threshOptions->hue_high;

}

void hsvColorFilterOptionsForm::sliderHueHighUpdated(int newValue)
{
    newValue = std::max(newValue,threshOptions->hue_low+1);
    threshOptions->hue_high = newValue;
    slider_hueHigh->setValue(newValue);
     qDebug() << "Sldier High value Changed: " << threshOptions->hue_high <<" LOW: " <<threshOptions->hue_low;
}

void hsvColorFilterOptionsForm::sliderValueLowUpdated(int newValue)
{
    newValue = std::min(newValue,threshOptions->value_high-1);
    threshOptions->value_low = newValue;
    slider_valueLow->setValue(newValue);
}
void hsvColorFilterOptionsForm::sliderValueHighUpdated(int newValue)
{
    newValue = std::max(newValue,threshOptions->value_low+1);
    threshOptions->value_high = newValue;
    slider_valueHigh->setValue(newValue);
}

void hsvColorFilterOptionsForm::sliderSaturationLowUpdated(int newValue)
{
    newValue = std::min(newValue,threshOptions->saturation_high-1);
    threshOptions->saturation_low = newValue;
    slider_saturationLow->setValue(newValue);
}

void hsvColorFilterOptionsForm::sliderSaturationHighUpdated(int newValue)
{
    newValue = std::max(newValue,threshOptions->saturation_low+1);
    threshOptions->saturation_high = newValue;
    slider_saturationHigh->setValue(newValue);
}
