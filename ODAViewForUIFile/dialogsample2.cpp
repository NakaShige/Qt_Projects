#include "dialogsample2.h"
#include "ui_dialogsample2.h"

DialogSample2::DialogSample2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSample2)
{
    ui->setupUi(this);
}

DialogSample2::~DialogSample2()
{
    delete ui;
}
