#include <QDebug>
#include "dialog1.h"
#include "ui_dialog1.h"

Dialog1::Dialog1(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog1)
{
    ui->setupUi(this);

    QString select("No, Sta.Name1, Sta.Name2, Cumulative, Dist between, X, Y, Azimuth");
    QStringList labels = select.split(", ");
    ui->m_table->setColumnCount(labels.count());
    ui->m_table->setHorizontalHeaderLabels(labels);

    ui->m_table->setColumnWidth(0, 50); // 「NO」列幅の変更

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

        item_no->setText(QString::number(i + 1));
        item_no->setTextAlignment(Qt::AlignCenter);
//        item_no->setBackgroundColor(Qt::green);
        item_name1->setText("No.1");
        item_name2->setText("");
        item_cumulative->setText("10.000");
        item_dist_between->setText("10.000");
        item_X->setText("123.45678");
        item_Y->setText("-123.45678");
        item_Azimuth->setText("90° 0′ 0.00″");

        ui->m_table->insertRow(i);
        ui->m_table->setItem(i, 0, item_no);
        ui->m_table->setItem(i, 1, item_name1);
        ui->m_table->setItem(i, 2, item_name2);
        ui->m_table->setItem(i, 3, item_cumulative);
        ui->m_table->setItem(i, 4, item_dist_between);
        ui->m_table->setItem(i, 5, item_X);
        ui->m_table->setItem(i, 6, item_Y);
        ui->m_table->setItem(i, 7, item_Azimuth);
    }

    QColor lightGreen = QColor(96, 255, 96); // うすいグリーン
    QColor lightRed = QColor(255, 96, 96); // うすい赤

    this->setBackgroundColorRow(0, Qt::yellow);
    this->setBackgroundColorRow(1, lightGreen);
    this->setBackgroundColorRow(2, lightRed);
    this->setBackgroundColorRow(3, lightRed);
    this->setBackgroundColorRow(4, lightRed);
    this->setBackgroundColorRow(5, lightRed);
    this->setBackgroundColorRow(6, lightGreen);
    this->setBackgroundColorRow(7, lightGreen);
    this->setBackgroundColorRow(8, lightGreen);
    this->setBackgroundColorRow(9, lightGreen);
}

Dialog1::~Dialog1()
{
    delete ui;
}

void Dialog1::setBackgroundColorRow(int row_index, QColor color)
{
//    for(int col = 0; col < ui->m_table->columnCount(); col++)
//    {
//        ui->m_table->item(row_index, col)->setBackgroundColor(color);
//    }
}
