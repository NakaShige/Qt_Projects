#include "dialog4.h"
#include "ui_dialog4.h"

Dialog4::Dialog4(QWidget *parent) :
    KSFISK_BaseDialog(parent),
    ui(new Ui::Dialog4)
{
    ui->setupUi(this);
    this->setDragControl(ui->widget);
}

Dialog4::~Dialog4()
{
    delete ui;
}

void Dialog4::on_pushButton_clicked()
{
    this->close();
}
