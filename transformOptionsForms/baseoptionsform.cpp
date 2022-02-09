#include "baseoptionsform.h"
#include "baseoptionsform.h"
#include "ui_baseoptionsform.h"


baseOptionsForm::baseOptionsForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::baseOptionsForm)
{
    ui->setupUi(this);
}

baseOptionsForm::~baseOptionsForm()
{
    delete ui;
}

int baseOptionsForm::getType()
{
    return -1;
}

transformOptions *baseOptionsForm::getOptionsForm()
{
    return new transformOptions();
}

void baseOptionsForm::createButtons(){

    this->applyTransformButton = new QPushButton(this);
    this->applyTransformButton->setText("Apply");
    this->cancelButton = new QPushButton(this);
    this->cancelButton->setText("Cancel");

}
void baseOptionsForm::setBasicLayout(){

    qvLayout = new QVBoxLayout();
    qhLayout = new QHBoxLayout();

    qhLayout->addWidget(this->applyTransformButton);
    qhLayout->addWidget(this->cancelButton);

    qvLayout->addItem(qLayout);
    qvLayout->addItem(qhLayout);

    this->setLayout(qvLayout);
}

QDoubleSpinBox* baseOptionsForm::createDoubleSpinBoxInputs(double value, double min, double max)
{
    qDebug() << "Text inputs not defined for this class";

    QDoubleSpinBox*   doubleSpinBox = new QDoubleSpinBox(this);
    doubleSpinBox->setValue(value);
    doubleSpinBox->setRange(min,max);
    return doubleSpinBox;
}


QSpinBox* baseOptionsForm::createSpinBoxInputs(int value, int min, int max)
{

    QSpinBox *spinBox = new QSpinBox(this);
    spinBox->setValue((int) value);
    spinBox->setRange((int) min,(int) max);
    return spinBox;
}

QComboBox *baseOptionsForm::createComboBoxInputs(std::unordered_map<std::string,int> &stringMap, int defaultValue)
{
    //qDebug() << "ComboBox inputs not defined for this class";
    int index = 0;
    int defaultElementIndex = 0;
    QStringList boxItems;
    std::unordered_map<std::string,int>::iterator it;
    for(it = stringMap.begin(); it != stringMap.end(); it++ , index++){
        boxItems.append(QString::fromStdString(it->first));
        qDebug() << "Gaussian Border Options : " << QString::fromStdString(it->first);
        if(defaultValue == it->second){
            defaultElementIndex = index;
        }
    }
    QComboBox *box = new QComboBox(this);
    box ->addItems(boxItems);
    box ->setEditable(false);
    box ->setInsertPolicy(QComboBox::NoInsert);
    box->setCurrentIndex(defaultElementIndex);

    return box;
}

QLabel* baseOptionsForm::createLabels(const QString &text)
{
    //qDebug() << "Labels not defined for this class";
    QLabel *label = new QLabel(this);
    label->setText(text);
    return label;
}

QSlider* baseOptionsForm::createIntSliders(int value, int minValue, int maxValue){
    QSlider *slider = new QSlider(this);
    slider->setMaximum(maxValue);
    slider->setMinimum(minValue);
    slider->setValue(value);
    slider->setTickInterval(1);
    return slider;
}


void baseOptionsForm::build2x2GridLayout(QWidget* array[], int elements){
    int row = 0;
    this->qLayout = new QGridLayout();
    if(elements % 2 != 0){
        qDebug() << "Trying to build 2x2 grid with odd elements";
    }else{
        for(int i=0; i < elements; i+=2){
            this->qLayout->addWidget(array[i],i,0);
            this->qLayout->addWidget(array[i+1],i,1);
        }
    }

}

