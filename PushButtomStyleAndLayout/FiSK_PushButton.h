#ifndef KSFISK_PUSHBUTTON
#define KSFISK_PUSHBUTTON


#include <QPushButton>
#include <QKeyEvent>
#include <QMouseEvent>
#include <QFocusEvent>

class KSFiSK_PushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit KSFiSK_PushButton(QWidget* parent = 0);
    ~KSFiSK_PushButton();

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mousePressEvent(QMouseEvent *) override;
    void focusInEvent(QFocusEvent *) override;
    void focusOutEvent(QFocusEvent *) override;

private:
    QString m_SourceStyleSheet;
};

#endif // KSFISK_PUSHBUTTON

