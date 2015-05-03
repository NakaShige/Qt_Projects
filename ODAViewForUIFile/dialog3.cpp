#include "dialog3.h"
#include "ui_dialog3.h"

Dialog3::Dialog3(QWidget *parent) :
    KSFISK_BaseDialog(parent),
    ui(new Ui::Dialog3)
{
    ui->setupUi(this);
    this->setDragControl(ui->widget);
}

Dialog3::~Dialog3()
{
    delete ui;
}

void Dialog3::on_pushButton_clicked()
{
    this->close();
}
