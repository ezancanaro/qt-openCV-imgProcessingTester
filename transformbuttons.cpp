#include "transformbuttons.h"
#include "ui_transformbuttons.h"

transformButtons::transformButtons(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::transformButtons)
{
    ui->setupUi(this);
}

transformButtons::~transformButtons()
{
    delete ui;
}

/*
void transformButtons::on_loadImageButton_2_clicked()
{
    QString filename =  QFileDialog::getOpenFileName(
          this,
          "Open Document",
          "QDir::currentPath()",
          "Images (*.png *.jpeg *.jpg *.gif);;All files (*.*) ");

    if( !filename.isNull() )
    {
      qDebug() << "selected file path : " << filename.toUtf8();
    }
    imagePath = filename.toStdString();
    setImages();
    updateView();
}*/
