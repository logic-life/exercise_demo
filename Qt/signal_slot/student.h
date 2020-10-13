#ifndef STUDENT_H
#define STUDENT_H
#include <QDebug>
#include <QObject>

class Student : public QObject
{
    Q_OBJECT
public:
    explicit Student(QObject *parent = nullptr);
    //早期Qt版本 必须要写到public slots, 高级版本可以写到 public 或者全局下
    //返回值 void，需要声明，也需要实现
    //可以有参数，可以重载
    void treat();//信号槽，不能在signals中定义
signals:




};

#endif // STUDENT_H
