#include "pictures.h"
#include <QToolButton>

pictures::pictures(QWidget* parent)
    :QWidget{parent}
{
    //label = new QLabel("tanjanq");
    //lay->addWidget(label);
    //setLayout(lay);
    button->setIcon(QIcon("C:/Users/Asus/OneDrive/Desktop/ankap baner/starrt/img/funny.jpg"));
    button->setIconSize(QSize(200, 200));
    button->setAutoRaise(true);
    button->setStyleSheet("QToolButton { border: none; }");
}
