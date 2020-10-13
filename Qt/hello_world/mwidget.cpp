#include "mwidget.h"

Mwidget::Mwidget(QWidget *parent) : QWidget(parent)
{
    qDebug()<<"This is mywidget!";
}

Mwidget::~Mwidget(){


    qDebug()<<"delete mywidget!";
}
