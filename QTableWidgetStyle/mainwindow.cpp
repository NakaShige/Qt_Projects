#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog1.h"
#include "dialog2.h"
#include "dialog3.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    auto dlg = new Dialog1();
    dlg->show();

    auto dlg2 = new Dialog2();
    dlg2->show();

    auto dlg3 = new Dialog3();
    dlg3->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
//    Dialog1 shige;
//    shige.setModal(true);
//    shige.show();
}
