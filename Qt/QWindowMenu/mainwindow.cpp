#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("体脂计算器");
    resize(600,400);

    //创建菜单栏 最多只有一个
    QMenuBar *bar=new QMenuBar(this);
    setMenuBar(bar);
    QMenu *fileMenu =bar->addMenu("file");
    QMenu *editMenu =bar->addMenu("adit");
    QMenu *menu_action = fileMenu->addMenu("project");
    //menu底下可以再次设置menu，但是action底下不能再设置menu
    //创建菜单项
    QAction *new_action = fileMenu->addAction("new");
    //设置分隔符
    fileMenu->addSeparator();
    QAction *open_action = fileMenu->addAction("open");
    QAction *new_project_action = menu_action->addAction("new project");
    QAction *open_project_action = menu_action->addAction("open project");

    //创建工具栏
    QToolBar *toolbar=new QToolBar (this) ;
    addToolBar(Qt::LeftToolBarArea,toolbar);
    //设置浮动
    toolbar->setFloatable(false);
    //只允许左右停靠
    toolbar->setAllowedAreas(Qt::LeftToolBarArea|Qt::RightToolBarArea);
    //设置移动开关
    toolbar->setMovable(false);
    //添加内容
    toolbar->addAction(new_action);
    toolbar->addSeparator();
    toolbar->addAction(open_action);
    QPushButton *button =new QPushButton("click",this);
    toolbar->addWidget(button);

    //设置状态栏
    QStatusBar *stBar =statusBar();
    //设置到窗口中
    setStatusBar(stBar);
    //放置标签控件
    QLabel *label =new QLabel("提示信息",this);
    stBar->addWidget(label);
    QLabel *label1 =new QLabel("右侧提示信息",this);
    stBar->addPermanentWidget(label1);

    //铆接部件（浮动窗口）可以有多个
    QDockWidget *dockWidget =new QDockWidget("浮动",this);
    addDockWidget(Qt::BottomDockWidgetArea,dockWidget);
    dockWidget->setAllowedAreas(Qt::TopDockWidgetArea|Qt::BottomDockWidgetArea);

    //设置中心部件 只能一个
    QTextEdit *text_edit=new QTextEdit(this);
    setCentralWidget(text_edit);


}

MainWindow::~MainWindow()
{
}

