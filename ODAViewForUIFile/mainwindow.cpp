#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include "dialog3.h"
#include "dialog4.h"
#include "dialog5.h"
#include "dialog6.h"
#include "dialogsample.h"
#include "dialogsample2.h"
#include "imagestrings.h"
#include <QDebug>

#define COMMAND_WIDTH 60
#define COMMAND_HEIGHT 50
#define COMMAND_ICON_SIZE 50

bool isShow = false;
bool isBG = false;
bool isFrame = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Background White
    ui->baseWidget->setStyleSheet("border:none; background: rgb(220, 220, 220);");

    auto topMenuBar = this->setControlLayout(ui->baseWidget);
    auto bottomMenuBar = this->setControlLayout2(ui->baseWidget);
    auto backlayout = new QVBoxLayout();
    backlayout->setMargin(0);
    backlayout->setSpacing(0);
    backlayout->addWidget(topMenuBar, 0, Qt::AlignRight | Qt::AlignTop);
    backlayout->addWidget(bottomMenuBar, 0, Qt::AlignRight | Qt::AlignBottom);
    ui->baseWidget->setLayout(backlayout);

    this->setConnect();
}

MainWindow::~MainWindow()
{
    delete ui;
}

QWidget* MainWindow::setControlLayout2(QWidget* parent)
{
    auto button1 = createButtonStyle(FISK_COLOR_SETTING_ORANGE_ICON);
    auto button2 = createButtonStyle(FISK_COLOR_SETTING_ORANGE_ICON);

    auto baseLayout = new QHBoxLayout();
    baseLayout->setMargin(0);
    baseLayout->setSpacing(0);
    baseLayout->addWidget(button2, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(button1, 0, Qt::AlignRight|Qt::AlignHCenter);

    auto menuBar = new QWidget(parent);
    menuBar->setFixedHeight(60);
    menuBar->setLayout(baseLayout);
    menuBar->setStyleSheet("border: none;");

    connect(button1, SIGNAL(clicked()), this, SLOT(onClickedBGChange()));
    connect(button2, SIGNAL(clicked()), this, SLOT(onClickedFrameChange()));

    return menuBar;
}

QWidget* MainWindow::setControlLayout(QWidget* parent)
{
    zoomall_button = createButtonStyle(FISK_ZOOM_ALL_ICON);
    zoomrect_button = createButtonStyle(FISK_ZOOM_RECT_ICON);
    codefilter_button = createButtonStyle(FISK_CODE_FILTER_ICON);
    colorsetting_button = createButtonStyle(FISK_COLOR_SETTING_ICON);
    measure_button = createButtonStyle(FISK_MEASURE_ICON);
    snapconfig_button = createButtonStyle(FISK_SNAP_CONFIG_ICON);
    rotation_button = createButtonStyle(FISK_ROTATION_VIEW_ICON);
    hide_button_top = createButtonStyle(FISK_COMMAND_SHOW_H_ICON);

    auto baseLayout = new QHBoxLayout();
    baseLayout->setMargin(0);
    baseLayout->setSpacing(10);
    baseLayout->addWidget(zoomall_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(zoomrect_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(codefilter_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(colorsetting_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(measure_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(snapconfig_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(rotation_button, 0, Qt::AlignRight|Qt::AlignHCenter);
    baseLayout->addWidget(hide_button_top, 0, Qt::AlignRight|Qt::AlignHCenter);

    auto topMenuBar = new QWidget(parent);
    topMenuBar->setFixedHeight(60);
    topMenuBar->setLayout(baseLayout);
    topMenuBar->setStyleSheet("border: none;");

    return topMenuBar;
}

void MainWindow::onClicked()
{
    if (isShow)
    {
        // Orange
//        this->setIcon(zoomall_button, FISK_ZOOM_ALL_ORANGE_ICON);
//        this->setIcon(zoomrect_button, FISK_ZOOM_RECT_ORANGE_ICON);
//        this->setIcon(codefilter_button, FISK_CODE_FILTER_ORANGE_ICON);
//        this->setIcon(colorsetting_button, FISK_COLOR_SETTING_ORANGE_ICON);
//        this->setIcon(measure_button, FISK_MEASURE_ORANGE_ICON);
//        this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_ORANGE_ICON);
//        this->setIcon(rotation_button, FISK_ROTATION_VIEW_ORANGE_ICON);
//        this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_ORANGE_ICON);

        // DarkOrange
        this->setIcon(zoomall_button, FISK_ZOOM_ALL_DARKORANGE_ICON);
        this->setIcon(zoomrect_button, FISK_ZOOM_RECT_DARKORANGE_ICON);
        this->setIcon(codefilter_button, FISK_CODE_FILTER_DARKORANGE_ICON);
        this->setIcon(colorsetting_button, FISK_COLOR_SETTING_DARKORANGE_ICON);
        this->setIcon(measure_button, FISK_MEASURE_DARKORANGE_ICON);
        this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_DARKORANGE_ICON);
        this->setIcon(rotation_button, FISK_ROTATION_VIEW_DARKORANGE_ICON);
        this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_DARKORANGE_ICON);
    }
    else
    {
        if (isBG)
        {
            // Normal
            this->setIcon(zoomall_button, FISK_ZOOM_ALL_ICON);
            this->setIcon(zoomrect_button, FISK_ZOOM_RECT_ICON);
            this->setIcon(codefilter_button, FISK_CODE_FILTER_ICON);
            this->setIcon(colorsetting_button, FISK_COLOR_SETTING_ICON);
            this->setIcon(measure_button, FISK_MEASURE_ICON);
            this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_ICON);
            this->setIcon(rotation_button, FISK_ROTATION_VIEW_ICON);
            this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_ICON);
        }
        else
        {
            // Gray 100
            this->setIcon(zoomall_button, FISK_ZOOM_ALL_GRAY_ICON);
            this->setIcon(zoomrect_button, FISK_ZOOM_RECT_GRAY_ICON);
            this->setIcon(codefilter_button, FISK_CODE_FILTER_GRAY_ICON);
            this->setIcon(colorsetting_button, FISK_COLOR_SETTING_GRAY_ICON);
            this->setIcon(measure_button, FISK_MEASURE_GRAY_ICON);
            this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_GRAY_ICON);
            this->setIcon(rotation_button, FISK_ROTATION_VIEW_GRAY_ICON);
            this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_GRAY_ICON);

            // Gray 60
            this->setIcon(zoomall_button, FISK_ZOOM_ALL_GRAY_60_ICON);
            this->setIcon(zoomrect_button, FISK_ZOOM_RECT_GRAY_60_ICON);
            this->setIcon(codefilter_button, FISK_CODE_FILTER_GRAY_60_ICON);
            this->setIcon(colorsetting_button, FISK_COLOR_SETTING_GRAY_60_ICON);
            this->setIcon(measure_button, FISK_MEASURE_GRAY_60_ICON);
            this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_GRAY_60_ICON);
            this->setIcon(rotation_button, FISK_ROTATION_VIEW_GRAY_60_ICON);
            this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_60_ICON);

            // Gray 40
//            this->setIcon(zoomall_button, FISK_ZOOM_ALL_GRAY_40_ICON);
//            this->setIcon(zoomrect_button, FISK_ZOOM_RECT_GRAY_40_ICON);
//            this->setIcon(codefilter_button, FISK_CODE_FILTER_GRAY_40_ICON);
//            this->setIcon(colorsetting_button, FISK_COLOR_SETTING_GRAY_40_ICON);
//            this->setIcon(measure_button, FISK_MEASURE_GRAY_40_ICON);
//            this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_GRAY_40_ICON);
//            this->setIcon(rotation_button, FISK_ROTATION_VIEW_GRAY_40_ICON);
//            this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_40_ICON);

            // BLACK
//            this->setIcon(zoomall_button, FISK_ZOOM_ALL_BLACK_ICON);
//            this->setIcon(zoomrect_button, FISK_ZOOM_RECT_BLACK_ICON);
//            this->setIcon(codefilter_button, FISK_CODE_FILTER_BLACK_ICON);
//            this->setIcon(colorsetting_button, FISK_COLOR_SETTING_BLACK_ICON);
//            this->setIcon(measure_button, FISK_MEASURE_BLACK_ICON);
//            this->setIcon(snapconfig_button, FISK_SNAP_CONFIG_BLACK_ICON);
//            this->setIcon(rotation_button, FISK_ROTATION_VIEW_BLACK_ICON);
//            this->setIcon(hide_button_top, FISK_COMMAND_SHOW_H_BLACK_ICON);
        }
    }

    isShow = !isShow;
}

QToolButton* MainWindow::createButtonStyle(QString icon)
{
    auto button = new QToolButton();
    button->setMinimumSize(COMMAND_WIDTH, COMMAND_HEIGHT);
    button->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    button->setToolButtonStyle(Qt::ToolButtonIconOnly);
    this->setIcon(button, icon);
    button->setToolTip("");
    button->setStyleSheet("QToolButton{border: none;outline: none; color: white;}");

    return button;
}

void MainWindow::setIcon(QToolButton* button, QString icon)
{
    auto new_pixmap_icon = QPixmap(icon);
    auto newButtonIcon = QIcon(new_pixmap_icon);
    auto new_size = new_pixmap_icon.scaled(COMMAND_ICON_SIZE, COMMAND_ICON_SIZE, Qt::IgnoreAspectRatio,Qt::SmoothTransformation).rect().size();
    button->setIconSize(new_size);
    button->setIcon(newButtonIcon);
}

void MainWindow::setConnect()
{
    connect(zoomall_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(zoomrect_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(codefilter_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(colorsetting_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(measure_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(snapconfig_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(rotation_button, SIGNAL(clicked()), this, SLOT(onClicked()));
    connect(hide_button_top, SIGNAL(clicked()), this, SLOT(onClicked()));
}

void MainWindow::onClickedBGChange()
{
    if (isBG)
    {
        // Background White
        ui->baseWidget->setStyleSheet("border:none; background: rgb(255, 255, 255);");
    }
    else
    {
        // Background Black
        ui->baseWidget->setStyleSheet("border:none; background: rgb(0, 0, 0);");
    }
    isBG = !isBG;
}

void MainWindow::onClickedFrameChange()
{
    if (!isFrame)
    {
        ui->frame->setStyleSheet("margin:0px;"
                                 "border-style: solid;"
                                 "border-width: 3px;"
                                 "border-radius: 10px;"
                                 "border-color: yellow;"
                                 "background: yellow");
    }
    else
    {
        ui->frame->setStyleSheet("margin:0px;"
                                 "border-style: solid;"
                                 "border-width: 3px;"
                                 "border-radius: 10px;"
                                 "border-color: rgb(255, 100, 0);"
                                 "background: rgb(255, 100, 0)");
    }
    isFrame = !isFrame;
}

