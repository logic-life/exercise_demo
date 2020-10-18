#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QColorDialog>
#include <QFileDialog>
#include <QFontDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QProgressDialog>
#include <QErrorMessage>
#include <QWizard>
QT_BEGIN_NAMESPACE
namespace Ui { class MyWidget; }
QT_END_NAMESPACE

//class QErrorMessage;

class MyWidget : public QWidget
{
    Q_OBJECT

public:
    MyWidget(QWidget *parent = nullptr);
    ~MyWidget();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

private:
    Ui::MyWidget *ui;
    QErrorMessage *errordlg;
    QWizardPage *createpage1();
    QWizardPage *createpage2();
    QWizardPage *createpage3();

};
#endif // MYWIDGET_H
