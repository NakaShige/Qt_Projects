#include <QDebug>
#include <QMessageBox>
#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);

    ui->m_table->clear();

    QString select("No, Sta.Name1, Sta.Name2, Cumulative, Dist between, X, Y, Azimuth");
    QStringList labels = select.split(", ");
    ui->m_table->setColumnCount(labels.count());
    ui->m_table->setHorizontalHeaderLabels(labels);

    for(int i = 0; i < 10; i++)
    {
        auto item_no = new QTableWidgetItem();
        auto item_name1 = new QTableWidgetItem();
        auto item_name2 = new QTableWidgetItem();
        auto item_cumulative = new QTableWidgetItem();
        auto item_dist_between = new QTableWidgetItem();
        auto item_X = new QTableWidgetItem();
        auto item_Y = new QTableWidgetItem();
        auto item_Azimuth = new QTableWidgetItem();

        item_no->setText(QString(i));
        item_no->setBackgroundColor(Qt::green);
        item_name1->setText("No.1");
        item_name2->setText("");
        item_cumulative->setText("10.000");
        item_dist_between->setText("10.000");
        item_X->setText("123.45678");
        item_Y->setText("-123.45678");
        item_Azimuth->setText("90° 0′ 0.00″");

        ui->m_table->insertRow(0);
        ui->m_table->setItem(i, 0, item_no);
        ui->m_table->setItem(i, 1, item_name1);
        ui->m_table->setItem(i, 2, item_name2);
        ui->m_table->setItem(i, 3, item_cumulative);
        ui->m_table->setItem(i, 4, item_dist_between);
        ui->m_table->setItem(i, 5, item_X);
        ui->m_table->setItem(i, 6, item_Y);
        ui->m_table->setItem(i, 7, item_Azimuth);
    }
}

Dialog2::~Dialog2()
{
    delete ui;
}


void Dialog2::on_toolButton_clicked(bool checked)
{
//    QMessageBox msgBox1(this);
//    msgBox1.setText("test 1");
//    msgBox1.exec();

    changeToolButtonStyle(checked);

    QMessageBox msgBox2(this);
    msgBox2.setText("test 2");
    msgBox2.exec();

    ui->toolButton->setChecked(!checked);
    changeToolButtonStyle(!checked);
}

void Dialog2::changeToolButtonStyle(bool checked)
{
    auto palette = ui->toolButton->palette();
    QColor btnTextColor = checked ? Qt::yellow : Qt::white;
    palette.setColor(QPalette::ButtonText, btnTextColor);
    ui->toolButton->setPalette(palette);
}

void Dialog2::on_toolButton_3_clicked()
{
    bool isChecked = ui->toolButton->isChecked();

    ui->toolButton->setChecked(!isChecked);
    changeToolButtonStyle(!isChecked);
}
