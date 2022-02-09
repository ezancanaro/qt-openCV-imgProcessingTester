/********************************************************************************
** Form generated from reading UI file 'filebrowser.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEBROWSER_H
#define UI_FILEBROWSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_fileBrowser
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;

    void setupUi(QDialog *fileBrowser)
    {
        if (fileBrowser->objectName().isEmpty())
            fileBrowser->setObjectName(QString::fromUtf8("fileBrowser"));
        fileBrowser->resize(432, 324);
        buttonBox = new QDialogButtonBox(fileBrowser);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(70, 280, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(fileBrowser);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 20, 391, 251));

        retranslateUi(fileBrowser);
        QObject::connect(buttonBox, SIGNAL(accepted()), fileBrowser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), fileBrowser, SLOT(reject()));

        QMetaObject::connectSlotsByName(fileBrowser);
    } // setupUi

    void retranslateUi(QDialog *fileBrowser)
    {
        fileBrowser->setWindowTitle(QCoreApplication::translate("fileBrowser", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class fileBrowser: public Ui_fileBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEBROWSER_H
