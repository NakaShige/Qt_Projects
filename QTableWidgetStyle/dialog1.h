#ifndef DIALOG1_H
#define DIALOG1_H

#include <QDialog>
#include <QColor>

namespace Ui {
class Dialog1;
}

class Dialog1 : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog1(QWidget *parent = 0);
    ~Dialog1();

private:
    void setBackgroundColorRow(int row_index, QColor color);

private:
    Ui::Dialog1 *ui;
};

#endif // DIALOG1_H
