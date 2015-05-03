#ifndef DIALOG4_H
#define DIALOG4_H

#include <QDialog>
#include "ksfisk_basedialog.h"

namespace Ui {
class Dialog4;
}

class Dialog4 : public KSFISK_BaseDialog
{
    Q_OBJECT

public:
    explicit Dialog4(QWidget *parent = 0);
    ~Dialog4();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Dialog4 *ui;
};

#endif // DIALOG4_H
