#include "KSFiSK_DragToMoveWndUtils.h"

KSFiSK_DragToMoveWndUtils::KSFiSK_DragToMoveWndUtils(QWidget* target):
    m_MoveWnd(target)
{
    m_IsDrag = false;
    m_DragControl = NULL;
}

void KSFiSK_DragToMoveWndUtils::setDragControl(QWidget* dragControl)
{
    m_DragControl = dragControl;
}

void KSFiSK_DragToMoveWndUtils::StartDrag(QMouseEvent *event)
{
    if (!m_DragControl)
        return;

    QRect ctrlRect(m_DragControl->x(), m_DragControl->y(), m_DragControl->width(), m_DragControl->height());
    if (ctrlRect.left() < event->x() && event->x() < ctrlRect.right() &&
        ctrlRect.top() < event->y() && event->y() < ctrlRect.bottom())
    {
        m_curPos = event->pos();
        m_IsDrag = true;
    }
    else
    {
        m_IsDrag = false;
    }
}

void KSFiSK_DragToMoveWndUtils::EndDrag()
{
    m_IsDrag = false;
}

void KSFiSK_DragToMoveWndUtils::Dragging(QMouseEvent *event)
{
    if(m_IsDrag == true)
    {
        if (event->buttons() && Qt::LeftButton)
        {
            QPoint diff = event->pos() - m_curPos;
            QPoint newPos = m_MoveWnd->pos() + diff;
            m_MoveWnd->move(newPos);
        }
    }
}

