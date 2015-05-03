#include "FiSK_PushButton.h"

#define FocusInStyle "border-width: 2px; border-color: yellow; color:yellow;"

KSFiSK_PushButton::KSFiSK_PushButton(QWidget *parent):
    QPushButton(parent)
{
}

KSFiSK_PushButton::~KSFiSK_PushButton()
{
}

void KSFiSK_PushButton::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Enter || event->key() == Qt::Key_Return)
    {
        emit click();
    }
}

void KSFiSK_PushButton::mousePressEvent(QMouseEvent *)
{
    emit click();
}

void KSFiSK_PushButton::focusInEvent(QFocusEvent *)
{
    m_SourceStyleSheet = this->styleSheet();
    this->setStyleSheet(m_SourceStyleSheet + FocusInStyle);
}

void KSFiSK_PushButton::focusOutEvent(QFocusEvent *)
{
    this->setStyleSheet(m_SourceStyleSheet);
}


