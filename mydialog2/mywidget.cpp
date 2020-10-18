#include "mywidget.h"
#include "ui_mywidget.h"
#include <QDebug>

MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::MyWidget)
{
    ui->setupUi(this);
    errordlg=new QErrorMessage(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}


void MyWidget::on_pushButton_clicked()
{   //getColor()中的三个参数分别表示，指示初始颜色，父窗口，以及对话框文件名
    QColor color =QColorDialog::getColor(Qt::red,this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    qDebug()<<"Color:"<<color;

}

void MyWidget::on_pushButton_5_clicked()
{   //getOpenFileName()中的四个参数分别表示设置父窗口，对话框名称，默认打开的文件路径，以及筛选的文件类型
    //QString filename=QFileDialog::getOpenFileName(this,tr("文件对话框"),
    //                                              "D:",tr("图片文件（*png *jpg）;;文本文件（*txt）"));
    //getOpenFileName同时打开多个文件，除了返回值是QStringList类型，其余的和上面相同
    QStringList filename=QFileDialog::getOpenFileNames(this,tr("文件对话框"),"D:",tr("图片文件（* png * jpg）;;文本文件（*txt）"));
    qDebug()<<"filename:"<<filename;
}

void MyWidget::on_pushButton_3_clicked()
{
    bool ok;
    //getFont()第一个参数是bool类型参量，存放an按下的按钮状态，第二个用于指定父窗口
    QFont font=QFontDialog::getFont(&ok,this);
    if(ok){
        ui->pushButton_1->setFont(font);
        ui->pushButton_2->setFont(font);
        ui->pushButton_3->setFont(font);
        ui->pushButton_4->setFont(font);
        ui->pushButton_5->setFont(font);
        ui->pushButton_6->setFont(font);
        ui->pushButton_7->setFont(font);
        ui->pushButton_8->setFont(font);}
    else
        qDebug()<<"没有选择字体";
}

void MyWidget::on_pushButton_6_clicked()
{
    bool ok;
    //getText()依次指定了父窗口，窗口名称，对话框的标签显示文本，输入字符串的显示模式，输入框的默认字符，获取按钮
    QString string =QInputDialog::getText(this,
                    tr("输入字符串对话框"),tr("请输入用户名:"),QLineEdit::Normal,tr("admin"),&ok);
    if(ok)
        qDebug()<<"string:"<<string;
}

void MyWidget::on_pushButton_4_clicked()
{   QString str="问题";
    int ret=QMessageBox::question(this,tr("问题对话框"),tr("你了解QT吗？"),QMessageBox::Yes,QMessageBox::No);
    if(ret==QMessageBox::Yes)
        qDebug()<<tr("问题").toUtf8().data();
}

void MyWidget::on_pushButton_7_clicked()
{
    QProgressDialog dialog(tr("文件复制进度"),tr("取消"),0,5000,this);
    dialog.setWindowTitle(tr("进度对话框"));
    dialog.setWindowModality(Qt::WindowModal);//设置对话框为模态
    dialog.show();
    for(long long i=0;i<50000000;i++)
    {
        dialog.setValue(i);
        QCoreApplication::processEvents();
        if(dialog.wasCanceled())
            break;
    }
    dialog.setValue(50000000);
    qDebug()<<tr("复制结束!");

}

void MyWidget::on_pushButton_2_clicked()
{

    errordlg->setWindowTitle(tr("错误信息对话框"));
    errordlg->showMessage(tr("这里是错误信息！"));

}

QWizardPage *MyWidget::createpage1()
{
    QWizardPage *page=new QWizardPage;
    page->setTitle("介绍");
    return page;
}

QWizardPage *MyWidget::createpage2()
{
    QWizardPage *page =new QWizardPage;
    page->setTitle("用户选择信息");
    return page;
}

QWizardPage *MyWidget::createpage3()
{
    QWizardPage *page=new QWizardPage;
    page->setTitle("结束");
    return page;
}

void MyWidget::on_pushButton_8_clicked()
{
    QWizard wizard(this);
    wizard.setWindowTitle(tr("向导对话框"));
    wizard.addPage(createpage1());
    wizard.addPage(createpage2());
    wizard.addPage(createpage3());
    wizard.exec();

}
