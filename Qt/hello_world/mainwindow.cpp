#include "mainwindow.h"
#include "mwidget.h"
MainWindow::MainWindow(Mwidget *parent)
    : Mwidget(parent)
{
//    QPushButton *button=new QPushButton;//创建一个按钮对象

//    this->setWindowTitle("parents");//设置父控件对象名

//    this->resize(600,600);//设置窗口大小

//    button->setText("hello_world");//设置按键名称

//    button->resize(300,200);//设置按键大小

//    button->setParent(this);//将按键控件放置于父布局之下

//    button->show();//显示窗口

//    QPushButton *button2=new QPushButton("button2",this);//创建一个对象

//    button2->move(400,400);
    this->setWindowTitle("自定义窗口");
    this->setFixedSize(800,900);

    Mpushbutton *mPushButton=new Mpushbutton();
    mPushButton->setParent(this);
    mPushButton->setText("This is mypushbutton");
    mPushButton->move(700,0);
    mPushButton->show();


//需求 点击按钮关闭窗口 connect(信号的发送者，信号量，信号的接受者，信号处理槽)

   // connect(mPushButton,&QPushButton::clicked,this,&QWidget::close);
    connect(mPushButton,&Mpushbutton::clicked,this,&Mwidget::close);
}

MainWindow::~MainWindow()
{
}

