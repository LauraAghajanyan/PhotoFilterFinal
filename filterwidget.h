#ifndef FILTERWIDGET_H
#define FILTERWIDGET_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>

class FilterWidget:public QWidget
{
public:
    explicit FilterWidget(QWidget *parent = nullptr);
    QLabel *pic1;
};

#endif // FILTERWIDGET_H
