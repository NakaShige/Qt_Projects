#include <QPoint>
#include <QPainter>
#include <QIcon>
#include <QStyleOptionButton>
#include "kspushbutton.h"

KsPushButton::KsPushButton(QWidget* parent):
    QPushButton(parent)
{

}

KsPushButton::~KsPushButton()
{

}

void KsPushButton::paintEvent(QPaintEvent* event)
{
//    QPushButton::paintEvent(event);

//    QPixmap pixmap = this->icon().pixmap(QSize(32, 32));
////    QPixmap pixmap(":/resources/images/8be18094-a9f6-46ad-9b2b-90f88a054d75.png");

//    pixmap = pixmap.scaled(32, 32, Qt::KeepAspectRatio, Qt::FastTransformation);
//    QPoint point = (event->rect()).center();
//    point.setX(point.x() - pixmap.rect().center().x());
//    point.setY(point.y() - pixmap.rect().center().y());
//    QPainter painter(this);
//    painter.drawPixmap(point, pixmap);

    //----------------------------------------------------------------------

    QStyleOptionButton option;
    option.initFrom(this);
    option.state = isDown() ? QStyle::State_Sunken : QStyle::State_Raised;
    if (isDefault())
        option.features |= QStyleOptionButton::DefaultButton;
//    option.text = text();
//    option.icon = icon();

    QPainter painter(this);
    style()->drawControl(QStyle::CE_PushButton, &option, &painter, this);

    QPixmap pixmap = this->icon().pixmap(QSize(32, 32));
//    QPixmap pixmap(":/resources/images/8be18094-a9f6-46ad-9b2b-90f88a054d75.png");

    pixmap = pixmap.scaled(32, 32, Qt::KeepAspectRatio, Qt::FastTransformation);
    QPoint point = (event->rect()).center();
    point.setX(point.x() - pixmap.rect().center().x());
    point.setY(point.y() - pixmap.rect().center().y());
//    QPainter painter(this);
    painter.drawPixmap(point, pixmap);
}
