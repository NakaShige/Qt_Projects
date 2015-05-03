#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    KSFISK_BaseDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setDragControl(ui->widget);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    this->close();
}
