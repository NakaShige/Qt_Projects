#ifndef DIALOGBUTTON
#define DIALOGBUTTON

#include <QToolButton>

class DialogButton : public QToolButton
{
public:
    explicit DialogButton(QWidget* parent = 0);

protected:
    void focusInEvent(QFocusEvent *) override;
    void focusOutEvent(QFocusEvent *) override;
};

#endif // DIALOGBUTTON

