#ifndef KSFISK_BASEDIALOG
#define KSFISK_BASEDIALOG


#include <QWidget>
#include <QDialog>
#include <QMouseEvent>
#include "KSFiSK_DragToMoveWndUtils.h"

class KSFISK_BaseDialog : public QDialog
{
public:
    KSFISK_BaseDialog(QWidget* parent = 0);
    virtual ~KSFISK_BaseDialog();

protected:
    void setDragControl(QWidget* dragControl);
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent*);
    void mouseMoveEvent(QMouseEvent *event);

private:
    KSFiSK_DragToMoveWndUtils* m_DragUtils;
};


#endif // KSFISK_BASEDIALOG

