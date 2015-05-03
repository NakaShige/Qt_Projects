#ifndef SAMPLEDIALOG_H
#define SAMPLEDIALOG_H

#include <QDialog>

namespace Ui {
class SampleDialog;
}

class SampleDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SampleDialog(QWidget *parent = 0);
    ~SampleDialog();

    QString data1();
    QString data2();
    QString data3();

protected:
    void closeEvent(QCloseEvent *);

private:
    Ui::SampleDialog *ui;
};

#endif // SAMPLEDIALOG_H
