#ifndef DIALOGSAMPLE2_H
#define DIALOGSAMPLE2_H

#include <QDialog>

namespace Ui {
class DialogSample2;
}

class DialogSample2 : public QDialog
{
    Q_OBJECT

public:
    explicit DialogSample2(QWidget *parent = 0);
    ~DialogSample2();

private:
    Ui::DialogSample2 *ui;
};

#endif // DIALOGSAMPLE2_H
