#ifndef TRANSFORMBUTTONS_H
#define TRANSFORMBUTTONS_H

#include <QWidget>
#include "mainWindowResources.h"

namespace Ui {
class transformButtons;
}

class transformButtons : public QWidget
{
    Q_OBJECT

public:
    explicit transformButtons(QWidget *parent = nullptr);
    ~transformButtons();

private slots:
    void on_loadImageButton_2_clicked();

private:
    Ui::transformButtons *ui;
};

#endif // TRANSFORMBUTTONS_H
