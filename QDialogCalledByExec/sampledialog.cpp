#include <QDebug>
#include <QMessageBox>
#include "sampledialog.h"
#include "ui_sampledialog.h"

SampleDialog::SampleDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SampleDialog)
{
    ui->setupUi(this);

    connect(ui->button_ok,     SIGNAL(clicked()), this, SLOT(accept()));
    connect(ui->button_cancel, SIGNAL(clicked()), this, SLOT(reject()));
}

SampleDialog::~SampleDialog()
{
    delete ui;
    qDebug() << "デストラクタ";
}

QString SampleDialog::data1()
{
    return ui->lineEdit->text();
}

QString SampleDialog::data2()
{
    return ui->lineEdit_2->text();
}

QString SampleDialog::data3()
{
    return ui->lineEdit_3->text();
}

void SampleDialog::closeEvent(QCloseEvent* event)
{
    qDebug() << "Close Event !!!!!";
    QDialog::closeEvent(event);
}
