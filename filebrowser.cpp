#include "filebrowser.h"
#include "ui_filebrowser.h"
#include <iostream>


fileBrowser::fileBrowser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fileBrowser)
{
    ui->setupUi(this);
}



void fileBrowser::setDefaultDir(){
#if defined(Q_OS_WIN32)
    this->defaultPath = "file:";
#elif defined(Q_OS_LINUX)
    this->defaultPath  = "/";
#else
    this->defaultPath = "Sistema Operacional Desconhecido";
#endif

    std::cout << this->defaultPath << std::endl;
}


fileBrowser::~fileBrowser()
{
    delete ui;
}


