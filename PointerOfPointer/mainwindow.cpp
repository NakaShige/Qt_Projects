#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString* param = new QString("FGHIJK");

    this->Func1(&param); // 変化あり
//    this->Func2(param); // 変化なし

    auto dlg = new QMessageBox();
    dlg->setText("Dlg");
    dlg->setText(*param);
    dlg->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Func1(QString** param)
{
    *param = new QString("AAAAA");
}

void MainWindow::Func2(QString* param)
{
    param = new QString("BBBBB");
}
