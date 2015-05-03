#include <QDebug>
#include "dialogsample.h"
#include "ui_dialogsample.h"
#include "dialogbutton.h"

DialogSample::DialogSample(QWidget *parent) :
    KSFISK_BaseDialog(parent),
    ui(new Ui::DialogSample)
{
    ui->setupUi(this);
    this->setDragControl(ui->widget);

//    ui->horizontalLayout->removeWidget(ui->toolButton_2);
//    ui->horizontalLayout->removeWidget(ui->toolButton);
//    ui->toolButton_2->hide();
//    ui->toolButton->hide();

//    auto dialogOK = new DialogButton(this);
//    dialogOK->setText("OK");
//    ui->horizontalLayout->insertWidget(1, dialogOK, 2);
//    connect(dialogOK, SIGNAL(clicked()), this, SLOT(onOKClicked()));
//    connect(dialogOK, SIGNAL(pressed()), this, SLOT(onOKClicked()));
//    connect(dialogOK, SIGNAL(toggled(bool)), this, SLOT(onOKClicked()));

//    auto dialogCancel = new DialogButton(this);
//    dialogCancel->setText("Cancel");
//    ui->horizontalLayout->insertWidget(2, dialogCancel, 2);
//    connect(dialogCancel, SIGNAL(clicked()), this, SLOT(onCancelClicked()));
//    connect(dialogCancel, SIGNAL(pressed()), this, SLOT(onCancelClicked()));
}

DialogSample::~DialogSample()
{
    delete ui;
}

void DialogSample::on_pushButton_clicked()
{
    this->close();
}

void DialogSample::onOKClicked()
{
    qDebug() << "OK";
}

void DialogSample::onCancelClicked()
{
    qDebug() << "Cancel";
}
