#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "sampledialog.h"

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

void MainWindow::on_pushButton_clicked()
{
//    SampleDialog dlg(this);
//    if (dlg.exec() == QDialog::Accepted)
//    {
//        QString data1 = dlg.data1();
//        QString data2 = dlg.data2();
//        QString data3 = dlg.data3();

//        // Any processing...

//        QString aa = data1 + data2 + data3;
//    }

//---------------------------------------------------------

    QMessageBox msgBox(this);
    msgBox.setText(tr("Select [Ok] or [Cancel] or [Esc]."));
    msgBox.setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);

    int ret = msgBox.exec();
    if (ret == QMessageBox::Ok)
    {
        QMessageBox msgBoxOK(this);
        msgBoxOK.setText(tr("Click OK !!"));
        msgBoxOK.exec();
    }
    else if (ret == QMessageBox::Cancel)
    {
        QMessageBox msgBoxCancel(this);
        msgBoxCancel.setText(tr("Click Cancel !!"));
        msgBoxCancel.exec();
    }
    else
    {
        QMessageBox msgBoxDefault(this);
        QString retStr = QString::number(ret);
        msgBoxDefault.setText(tr("Click ret = ") + retStr);
        msgBoxDefault.exec();
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    SampleDialog dlg;
    int ret = dlg.exec();

    QMessageBox msgResultBox(this);
    msgResultBox.setText("ret = " + QString::number(ret));
    msgResultBox.exec();

    if (ret == QDialog::Accepted)
    {
        QString message = QString("Accepted!!!") + QString("\n") +
                          QString("> data1 = ") + dlg.data1() + QString("\n") +
                          QString("> data2 = ") + dlg.data2() + QString("\n") +
                          QString("> data3 = ") + dlg.data3();

        QMessageBox msgBox(this);
        msgBox.setText(message);
        msgBox.exec();
    }
    else if (ret == QDialog::Rejected)
    {
        QMessageBox msgBox(this);
        msgBox.setText("Rejected!!!");
        msgBox.exec();
    }
    else
    {
        QMessageBox msgBox(this);
        msgBox.setText("Error !!!!   ret = " + QString::number(ret));
        msgBox.exec();
    }
}
