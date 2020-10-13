#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "ui_widget.h"
#include "teacher.h"
#include "student.h"
#include <QDebug>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
    void class_is_over();
private:
    Ui::Widget *ui;
    //创建一个学生对象
    Student *stu;
    //创建一个老师对象
    Teacher *tu;

};
#endif // WIDGET_H
