#ifndef KSPUSHBUTTON
#define KSPUSHBUTTON

#include <QPushButton>
#include <QPaintEvent>

class KsPushButton : public QPushButton
{
    Q_OBJECT
public:
    explicit KsPushButton(QWidget* parent = 0);
    ~KsPushButton();

protected:
    void paintEvent(QPaintEvent* event) override;
};

#endif // KSPUSHBUTTON

