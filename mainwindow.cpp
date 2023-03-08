#include "mainwindow.h"
#include "camwidget.h"
#include "filterwidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    cam = new CamWidget();
    pics = new pictures();
    filterWid = new FilterWidget();
    setCentralWidget(cam);
    connect(cam->add_pic,&QPushButton::clicked,this,&MainWindow::setwidget1);
    connect(pics->button,&QToolButton::clicked,this,&MainWindow::setwidget2);
}

MainWindow::~MainWindow()
{
}

void MainWindow::setwidget1()
{
    setCentralWidget(pics);
}

void MainWindow::setwidget2()
{
    setCentralWidget(filterWid);
}
