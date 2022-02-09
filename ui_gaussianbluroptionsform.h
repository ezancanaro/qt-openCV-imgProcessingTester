/********************************************************************************
** Form generated from reading UI file 'gaussianbluroptionsform.ui'
**
** Created by: Qt User Interface Compiler version 5.13.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAUSSIANBLUROPTIONSFORM_H
#define UI_GAUSSIANBLUROPTIONSFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gaussianBlurOptionsForm
{
public:

    void setupUi(QWidget *gaussianBlurOptionsForm)
    {
        if (gaussianBlurOptionsForm->objectName().isEmpty())
            gaussianBlurOptionsForm->setObjectName(QString::fromUtf8("gaussianBlurOptionsForm"));
        gaussianBlurOptionsForm->resize(226, 159);

        retranslateUi(gaussianBlurOptionsForm);

        QMetaObject::connectSlotsByName(gaussianBlurOptionsForm);
    } // setupUi

    void retranslateUi(QWidget *gaussianBlurOptionsForm)
    {
        gaussianBlurOptionsForm->setWindowTitle(QCoreApplication::translate("gaussianBlurOptionsForm", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gaussianBlurOptionsForm: public Ui_gaussianBlurOptionsForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAUSSIANBLUROPTIONSFORM_H
