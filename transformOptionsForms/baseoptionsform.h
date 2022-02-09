#ifndef BASEOPTIONSFORM_H
#define BASEOPTIONSFORM_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QComboBox>
#include <QDebug>
#include <unordered_map>
//#include <QSpinBox>
#include <QtWidgets>

#include <transformOptions/transformoptions.h>

namespace Ui {
class baseOptionsForm;
}

class baseOptionsForm : public QWidget
{
    Q_OBJECT

public:
    explicit baseOptionsForm(QWidget *parent = nullptr);
    ~baseOptionsForm();
    QPushButton *applyTransformButton;
    QPushButton *cancelButton;

    //Used to make sure image processing can be done and resulting image is shown with appropriate color scheme
    //Most transformations use grayscale images.
    bool imageNeedsGrayScale = true;

    enum formTypes{
        FORM_ADAPTIVETHRESHOLD,
        FORM_BILATERALFILTER,
        FORM_CUSTOMSOBEL,
        FORM_GAUSSIANBLUR,
        FORM_IMAGESSUBTRACTION,
        FORM_MEDIANBLUR,
        FORM_MORPHOPERATIONS,
        FORM_SIMPLETHRESHOLD,
        FORM_SOBELDERIVATIVES,
        FORM_HSVCOLORFILTER,
    };

    virtual int getType();

    virtual transformOptions *getOptionsForm();

    void build2x2GridLayout(QWidget *array[], int elements);



signals:
    //By default, MainWindow applies the transform and updates view with temp image after receiving this signal.
    //Can slow the program down after
    virtual void transformOptionValuesChanged();
    //Use it so MainWindow can display an error message in the Log.
    virtual void logErrorMessage(QString logMessage);

private:
    Ui::baseOptionsForm *ui;

protected:
    QVBoxLayout *qvLayout;
    QHBoxLayout *qhLayout;
    QGridLayout *qLayout;

    enum spinBoxType{
        SPINBOX_DOUBLE ,
        SPINBOX_INT
    };

    void createButtons();
    void setBasicLayout();
    QDoubleSpinBox* createDoubleSpinBoxInputs(double value, double min, double max);
    QSpinBox* createSpinBoxInputs(int value, int min, int max);
    QComboBox* createComboBoxInputs(std::unordered_map<std::string,int> &stringMap, int defaultValue=-1);
    QLabel* createLabels(const QString &text);
    QSlider *createIntSliders(int value, int minValue, int maxValue);

};

#endif // BASEOPTIONSFORM_H
