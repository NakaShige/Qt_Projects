#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "ksfisk_basedialog.h"

namespace Ui {
class Dialog;
}

class Dialog : public KSFISK_BaseDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = 0);
    ~Dialog();
private slots:
    void on_pushButton_clicked();
private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
