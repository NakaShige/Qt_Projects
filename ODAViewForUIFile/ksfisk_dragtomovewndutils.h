#ifndef KSFISK_DRAGTOMOVEWNDUTILS
#define KSFISK_DRAGTOMOVEWNDUTILS


#include <QWidget>
#include <QMouseEvent>

class KSFiSK_DragToMoveWndUtils : public QObject
{
public:
    KSFiSK_DragToMoveWndUtils(QWidget* target);

    void setDragControl(QWidget* dragControl);
    void StartDrag(QMouseEvent *event);
    void EndDrag();
    void Dragging(QMouseEvent *event);

private:
    QWidget* m_MoveWnd;
    QWidget* m_DragControl;
    QPoint m_curPos;
    bool m_IsDrag;
};

#endif // KSFISK_DRAGTOMOVEWNDUTILS

