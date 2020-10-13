#include "mpushbutton.h"
#include <QDebug>
Mpushbutton::Mpushbutton(QPushButton *parent) : QPushButton(parent)
{
    qDebug()<<"This is my button!";
}

Mpushbutton::~Mpushbutton(){


    qDebug()<<"delete This is my button";
}
