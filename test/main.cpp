#include "mainwindow.h"
#include "dialog.h"
#include <QDebug>
#include <QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QTextCodec::setCodecForLocale(QTextCodec::codecForLocale());
    QApplication a(argc, argv);
    QTextCodec *codec =QTextCodec::codecForName("utf8");
    QTextCodec::setCodecForLocale(codec);
    MainWindow w;
    Login_dialog d;
    //d.show();
    d.setWindowTitle(codec->toUnicode("文档"));
    if(d.exec()==QDialog::Accepted){
        w.show();
        return a.exec();
    }
    else
        return 0;
}
