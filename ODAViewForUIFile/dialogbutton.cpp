#include <QDebug>
#include "dialogbutton.h"

DialogButton::DialogButton(QWidget *parent):
    QToolButton(parent)
{
    auto fnt = this->font();
    fnt.setPointSize(14);
    fnt.setBold(true);
    this->setFont(fnt);

    this->setMinimumSize(140, 50);
    this->setStyleSheet("background:rgb(100, 100, 100); border-style: inset; border-width: 1px; border-color: white; border-radius: 5px; color:white;");
}

void DialogButton::focusInEvent(QFocusEvent *)
{
    this->setStyleSheet("background:rgb(100, 100, 100); border-style: inset; border-width: 2px; border-color: yellow; border-radius: 5px; color:yellow;");
}

void DialogButton::focusOutEvent(QFocusEvent *)
{
    this->setStyleSheet("background:rgb(100, 100, 100); border-style: inset; border-width: 1px; border-color: white; border-radius: 5px; color:white;");
}
