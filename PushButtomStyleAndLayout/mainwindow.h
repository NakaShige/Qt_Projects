#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "kspushbutton.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_Cancel_clicked();

    void on_btn_Cancel_2_clicked();

    void on_btn_Next_2_clicked();

    void on_btn_Prev_2_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
