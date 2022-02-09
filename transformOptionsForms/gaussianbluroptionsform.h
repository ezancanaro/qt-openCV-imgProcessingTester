#ifndef GAUSSIANBLUROPTIONSFORM_H
#define GAUSSIANBLUROPTIONSFORM_H
#include <QGridLayout>
#include <QLabel>
#include <QDebug>
#include <QComboBox>
#include <QDoubleSpinBox>
#include <QWidget>
#include <QPushButton>
#include <QSignalMapper>

#include "../transformOptions/gaussianbluroptions.h"
#include "baseoptionsform.h"

namespace Ui {
class gaussianBlurOptionsForm;
}

class gaussianBlurOptionsForm : public baseOptionsForm
{
    Q_OBJECT

public:
    explicit gaussianBlurOptionsForm(QWidget *parent = nullptr);
    ~gaussianBlurOptionsForm();

    virtual int getType();
    virtual gaussianBlurOptions *getOptionsForm();
private:
    Ui::gaussianBlurOptionsForm *ui;

    gaussianBlurOptions *gbOptions;
    QComboBox *box;
    QDoubleSpinBox *sigmaXinput;
    QDoubleSpinBox *sigmaYinput;
    QSpinBox *kernelSizeXinput;
    QSpinBox *kernelSizeYinput;
    //QGridLayout *qLayout;
    QLabel *borderLabel;
    QLabel *sigmaXLabel;
    QLabel *sigmaYLabel;
    QLabel *kernelSizeXLabel;
    QLabel *kernelSizeYLabel;

    enum spinBoxes{
        sigmaX,
        sigmaY,
        kernelX,
        kerneY
    };

    void createTextInputs();
    void createComboBoxInputs();
    void createLabels();



public slots:
    void sigmaXSpinBoxUpdated(double newValue);
    void sigmaYSpinBoxUpdated(double newValue);
    void kernelSizeXSpinBoxUpdated(int newValue);
    void kernelSizeYSpinBoxUpdated(int newValue);
    void borderTypeBoxUpdated(const QString &text);


};

#endif // GAUSSIANBLUROPTIONSFORM_H
