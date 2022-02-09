#include "test.h"
#include "ui_test.h"

#include <QDebug>

#include "transformOptions/gaussianbluroptions.h"

test::test(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::test)
{
    ui->setupUi(this);
    gaussianBlurOptions gb;

    QStringList boxItems;

    std::unordered_map<std::string,int>::iterator it;
    for(it = gb.possibleBorderTypes.begin(); it != gb.possibleBorderTypes.end(); it++){
        boxItems.append(QString::fromStdString(it->first));
        qDebug() << "selected file path : " << QString::fromStdString(it->first);
    }
    ui->testComboBox->addItems(boxItems);
    ui->testComboBox->setEditable(false);
    ui->testComboBox->setInsertPolicy(QComboBox::NoInsert);



}

test::~test()
{
    delete ui;
}
