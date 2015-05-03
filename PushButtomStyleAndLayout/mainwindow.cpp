#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn_Cancel_clicked()
{
    ui->btn_Cancel->setVisible(false);
}

void MainWindow::on_btn_Cancel_2_clicked()
{
    ui->btn_Next_2->setVisible(true);
    ui->btn_Prev_2->setVisible(true);
}

void MainWindow::on_btn_Next_2_clicked()
{
    ui->btn_Next_2->setVisible(false);
}

void MainWindow::on_btn_Prev_2_clicked()
{
    ui->btn_Prev_2->setVisible(false);
}
