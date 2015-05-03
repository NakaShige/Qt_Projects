#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QToolButton>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void onClicked();
    void onClickedBGChange();
    void onClickedFrameChange();

private:
    Ui::MainWindow *ui;

    QToolButton* zoomall_button;
    QToolButton* zoomrect_button;
    QToolButton* codefilter_button;
    QToolButton* colorsetting_button;
    QToolButton* measure_button;
    QToolButton* snapconfig_button;
    QToolButton* rotation_button;
    QToolButton* hide_button_top;

    QWidget* setControlLayout(QWidget* parent);
    QWidget* setControlLayout2(QWidget* parent);
    QToolButton* createButtonStyle(QString icon);
    void setIcon(QToolButton* button, QString icon);
    void setConnect();
};

#endif // MAINWINDOW_H
