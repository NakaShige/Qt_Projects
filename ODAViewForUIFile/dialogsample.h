#ifndef DIALOGSAMPLE_H
#define DIALOGSAMPLE_H

#include <QDialog>
#include "ksfisk_basedialog.h"

namespace Ui {
class DialogSample;
}

class DialogSample : public KSFISK_BaseDialog
{
    Q_OBJECT

public:
    explicit DialogSample(QWidget *parent = 0);
    ~DialogSample();

private slots:
    void on_pushButton_clicked();
    void onOKClicked();
    void onCancelClicked();

private:
    Ui::DialogSample *ui;
};

#endif // DIALOGSAMPLE_H
