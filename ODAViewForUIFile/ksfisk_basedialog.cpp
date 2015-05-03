#include "KSFiSK_BaseDialog.h"

KSFISK_BaseDialog::KSFISK_BaseDialog(QWidget* parent):
    QDialog(parent, Qt::CustomizeWindowHint)
//    QDialog(parent, Qt::FramelessWindowHint)
{
    m_DragUtils = new KSFiSK_DragToMoveWndUtils(this);
}

KSFISK_BaseDialog::~KSFISK_BaseDialog()
{
    delete m_DragUtils;
}

void KSFISK_BaseDialog::setDragControl(QWidget* dragControl)
{
    m_DragUtils->setDragControl(dragControl);
}

void KSFISK_BaseDialog::mousePressEvent(QMouseEvent *event)
{
    m_DragUtils->StartDrag(event);
}

void KSFISK_BaseDialog::mouseReleaseEvent(QMouseEvent*)
{
    m_DragUtils->EndDrag();
}

void KSFISK_BaseDialog::mouseMoveEvent(QMouseEvent *event)
{
    m_DragUtils->Dragging(event);
}
