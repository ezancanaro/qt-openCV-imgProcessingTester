#ifndef FILEBROWSER_H
#define FILEBROWSER_H

#include <QDialog>




namespace Ui {
class fileBrowser;
}

class fileBrowser : public QDialog
{
    Q_OBJECT

public:
    explicit fileBrowser(QWidget *parent = nullptr);
    ~fileBrowser();
    std::string defaultPath;

    void setDefaultDir();

private:
    Ui::fileBrowser *ui;
};

#endif // FILEBROWSER_H
