#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    KSFISK_BaseDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
    this->setDragControl(ui->widget);
}

Dialog2::~Dialog2()
{
    delete ui;
}

void Dialog2::on_pushButton_clicked()
{
    this->close();
}
