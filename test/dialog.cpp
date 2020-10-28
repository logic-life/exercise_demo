#include "dialog.h"
#include "ui_dialog.h"

Login_dialog::Login_dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login_dialog)
{
    ui->setupUi(this);
}

Login_dialog::~Login_dialog()
{
    delete ui;
}

void Login_dialog::on_pushButton_2_clicked()
{
    close();
}

void Login_dialog::on_pushButton1_clicked()//隐式调用，信号和槽的优点
//(1)类型安全：需要关联的信号和槽的签名必须相同，槽的个数可以小于信号的个数，但缺少的参数必须是
//    信号参数的最后一个参数或几个参数
//(2)松散耦合：信号和槽机制减弱了Qt对象的耦合度，激发的信号Qt对象无须知道是哪个对象的哪个槽要接
//   受它的信号，只需要在合适的时间发送合适的信号就可以了
//   一个类如果要支持信号和槽，就必须从QObject或QObject的子类继承，但是信号和槽不支持对模板的
//  调用
{
    if(ui->usrEditLine->text()==tr("logic-life")
            &&ui->pswEditLine->text()==tr("123456"))
    {
        accept();
    }
    else
        QMessageBox::warning(this,tr("warning"),
                             tr("user name or passward error!"),QMessageBox::Yes);
        ui->pswEditLine->clear();
        ui->usrEditLine->clear();
        ui->usrEditLine->setFocus();
}
