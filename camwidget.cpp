#include "camwidget.h"

CamWidget::CamWidget(QWidget *parent)
    :QWidget{parent}
{
    add_pic = new QPushButton("Add");
    grid->addWidget(add_pic);
    setLayout(grid);
}
