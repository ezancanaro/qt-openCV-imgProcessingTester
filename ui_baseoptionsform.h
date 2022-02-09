/********************************************************************************
** Form generated from reading UI file 'baseoptionsform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASEOPTIONSFORM_H
#define UI_BASEOPTIONSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_baseOptionsForm
{
public:

    void setupUi(QWidget *baseOptionsForm)
    {
        if (baseOptionsForm->objectName().isEmpty())
            baseOptionsForm->setObjectName(QString::fromUtf8("baseOptionsForm"));
        baseOptionsForm->resize(180, 280);

        retranslateUi(baseOptionsForm);

        QMetaObject::connectSlotsByName(baseOptionsForm);
    } // setupUi

    void retranslateUi(QWidget *baseOptionsForm)
    {
        baseOptionsForm->setWindowTitle(QCoreApplication::translate("baseOptionsForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class baseOptionsForm: public Ui_baseOptionsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASEOPTIONSFORM_H
