#include "filterwidget.h"

FilterWidget::FilterWidget(QWidget *parent)
    :QWidget{parent}
{
    QPixmap pixmap("C:/Users/Asus/OneDrive/Desktop/ankap baner/starrt/img/funny.jpg");//we can also use resource files
    pic1->setPixmap(pixmap);
    pic1->setFixedSize(pixmap.width(), pixmap.height());
    QGridLayout* grid = new QGridLayout;
    grid->addWidget(pic1,1,1);
    setLayout(grid);
    //filters
}
