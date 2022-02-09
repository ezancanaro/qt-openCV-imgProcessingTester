#ifndef ADAPTIVETHRESHOLDOPTIONSFORM_H
#define ADAPTIVETHRESHOLDOPTIONSFORM_H

#include "baseoptionsform.h"

#include <transformOptions/adaptivethresholdoptions.h>

#include <QDoubleSpinBox>


class adaptiveThresholdOptionsForm : public baseOptionsForm
{
    Q_OBJECT

public:
    explicit adaptiveThresholdOptionsForm();

    adaptiveThresholdOptions *threshOptions;

    QComboBox *adaptiveOptionsBox;
    QComboBox *thresholdOptionsBox;
    QDoubleSpinBox *constantBox;
    QSpinBox *blockSizeBox;
    QDoubleSpinBox *maxValueBox;
    QLabel *constantLabel;
    QLabel *maxValueLabel;
    QLabel *thresholdTypeLabel;
    QLabel *adaptiveMethodLabel;
    QLabel *blockSizeLabel;

    virtual int getType();
    virtual adaptiveThresholdOptions *getOptionsForm();

private:
    //Ui::baseOptionsForm *ui;
    //void createTextInputs();
    //void createComboBoxInputs();
    //void createLabels();

public slots:
    void adaptiveOptionsBoxUpdated(const QString &text);
    void thresholdOptionsBoxUpdated(const QString &text);
    void constantBoxUpdated(double newValue);
    void blockSizeBoxUpdated(int newValue);
    void maxValueBoxUpdated(double newValue);

};

#endif // ADAPTIVETHRESHOLDOPTIONSFORM_H
