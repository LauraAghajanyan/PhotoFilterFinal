#ifndef PICTURES_H
#define PICTURES_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include <QLabel>
#include <QGridLayout>
#include <QToolButton>

class pictures:public QWidget
{
public:
    explicit pictures(QWidget *parent = nullptr);
    QLabel *label;
    QGridLayout *lay = new QGridLayout();
    QToolButton *button = new QToolButton(this);
};

#endif // PICTURES_H
