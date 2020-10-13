#include "widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //创建一个老师对象
    this->tu = new Teacher(this);
    //创建一个学生对象
    this->stu =new Student(this);

    //treat
    connect(tu,&Teacher::hungry,stu,&Student::treat);

    //class is over
    class_is_over();
}

void Widget::class_is_over(){
   emit tu->hungry();

}
Widget::~Widget()
{
    delete ui;
}

