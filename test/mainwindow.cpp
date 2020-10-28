//#pragma execution_character_set（"utf-8"）
#define QT_CAST_FROM_ASCII
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //初始化文件未保存
    isUntitled=true;
    //初始化文件名为"未命名.txt"

    curFile ="unnamed.txt";//文件名显示乱码
    //初始化窗口标题为文件名
    setWindowTitle(curFile);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFile()
{
    if(maybeSave()){
        isUntitled=true;
        curFile=tr("未命名.txt");
        setWindowTitle(curFile);
        ui->textEdit->clear();
        ui->textEdit->setVisible(true);


    }
}

bool MainWindow::maybeSave()
{
    //如果文档被修改了
    if(ui->textEdit->document()->isModified()){
    // 自定义一个警告对话框
        QMessageBox box;
        box.setWindowTitle(tr("警告"));
        box.setIcon(QMessageBox::Warning);
        box.setText(curFile+tr("尚未保存，是否保存？"));
        QPushButton *yesButton =box.addButton(tr("是(&Y))"),QMessageBox::YesRole);
        box.addButton(tr("否(&N)"),QMessageBox::NoRole);
        QPushButton *cancleButton=box.addButton(tr("取消"),QMessageBox::RejectRole);
        box.exec();
        if(box.clickedButton()==yesButton)
            return save();
        else if(box.clickedButton()==cancleButton)
            return false;

    }
return false;
}

bool MainWindow::save()
{
    if(isUntitled){
        return saveAs();
    }
    else
        return saveFile(curFile);
}

bool MainWindow::saveAs()
{   //为啥需要加空格
    QString fileName = QFileDialog::getSaveFileName(this,tr("另存为 "),curFile);
    if(fileName.isEmpty())
        return false;
        return saveFile(fileName);

}

bool MainWindow::saveFile(const QString &fileName)
{   QFile file(fileName);
    if(!file.open(QFile::WriteOnly|QFile::Text)){
        QMessageBox::warning(this,tr("多文档编辑器"),tr("无法写入文件 %1: /n %2").
                             arg(fileName).arg(file.errorString()));
        return false;
    }
    QTextStream out(&file);
    QApplication::setOverrideCursor(Qt::WaitCursor);
    out<<ui->textEdit->toPlainText();
    //鼠标指针恢复原来的状态
    QApplication::restoreOverrideCursor();
    isUntitled =false;
    //获取文件的标准路径
    curFile=QFileInfo(fileName).canonicalFilePath();
    setWindowTitle(curFile);
    return true;
}


void MainWindow::on_actionxinjianwenjian_triggered()
{
    newFile();

}

void MainWindow::on_actionbaocun_triggered()
{
    save();
}

void MainWindow::on_actionlingcunwei_triggered()
{
    saveAs();
}
