#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "camwidget.h"
#include "pictures.h"
#include "filterwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    CamWidget* cam;
    pictures* pics;
    FilterWidget* filterWid;

public slots:
    void setwidget1();
    void setwidget2();
};
#endif // MAINWINDOW_H
