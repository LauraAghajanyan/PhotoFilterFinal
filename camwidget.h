#ifndef CAMWIDGET_H
#define CAMWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QPushButton>
#include <QGridLayout>

class CamWidget:public QWidget
{
public:
    explicit CamWidget(QWidget *parent = nullptr);
    QPushButton *add_pic;
    QGridLayout *grid = new QGridLayout();
};

#endif // CAMWIDGET_H
