#include "bilateralfilteroptionsform.h"

bilateralFilterOptionsForm::bilateralFilterOptionsForm()
{

    trOptions = new bilateralFilterOptions();

    sigmaColorBox = createSpinBoxInputs(trOptions->sigmaColor,0,255);
    sigmaSpaceBox = createSpinBoxInputs(trOptions->sigmaSpace,0,255);
    neighbourhoodDiameterBox = createSpinBoxInputs(trOptions->neighbourhoodDiameter,0,255);

    sigmaColorLabel = createLabels("Sigma Color");
    sigmaSpaceLabel = createLabels("Sigma Space");
    neightbourhoodDiameterLabel = createLabels("Neighbourhood Diameter");


    //this->qLayout = new QGridLayout();
    QWidget* array[] = {sigmaColorBox,sigmaColorLabel
                       ,sigmaSpaceBox, sigmaSpaceLabel
                       ,neighbourhoodDiameterBox, neightbourhoodDiameterLabel};

    build2x2GridLayout(array,6);
    createButtons();
    setBasicLayout();

    connect(sigmaColorBox,QOverload<int>::of(&QSpinBox::valueChanged),this, &bilateralFilterOptionsForm::sigmaColorBoxUpdated );
    connect(sigmaSpaceBox,QOverload<int>::of(&QSpinBox::valueChanged),this, &bilateralFilterOptionsForm::sigmaSpaceBoxUpdated );
    connect(neighbourhoodDiameterBox,QOverload<int>::of(&QSpinBox::valueChanged),this, &bilateralFilterOptionsForm::neighbourhoodDiameterBoxUpdated );


}

void bilateralFilterOptionsForm::sigmaColorBoxUpdated(int newValue)
{
    trOptions->sigmaColor = newValue;
    emit transformOptionValuesChanged();
}

void bilateralFilterOptionsForm::sigmaSpaceBoxUpdated(int newValue)
{
    trOptions->sigmaSpace = newValue;
    emit transformOptionValuesChanged();
}

void bilateralFilterOptionsForm::neighbourhoodDiameterBoxUpdated(int newValue)
{
    trOptions->neighbourhoodDiameter = newValue;
    emit transformOptionValuesChanged();
}

int bilateralFilterOptionsForm::getType()
{
    return FORM_BILATERALFILTER;
}

bilateralFilterOptions *bilateralFilterOptionsForm::getOptionsForm()
{
    return trOptions;
}
