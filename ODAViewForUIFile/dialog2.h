#ifndef DIALOG2_H
#define DIALOG2_H

#include <QDialog>
#include "ksfisk_basedialog.h"

namespace Ui {
class Dialog2;
}

class Dialog2 : public KSFISK_BaseDialog
{
    Q_OBJECT

public:
    explicit Dialog2(QWidget *parent = 0);
    ~Dialog2();
private slots:
    void on_pushButton_clicked();
private:
    Ui::Dialog2 *ui;
};

#endif // DIALOG2_H
