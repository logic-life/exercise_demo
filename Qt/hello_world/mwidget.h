#ifndef MWIDGET_H
#define MWIDGET_H

#include <QWidget>
#include <QDebug>
class Mwidget : public QWidget
{
    Q_OBJECT
public:
    explicit Mwidget(QWidget *parent = nullptr);
    ~Mwidget();

signals:

};

#endif // MWIDGET_H
