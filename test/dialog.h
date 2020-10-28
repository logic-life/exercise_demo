#ifndef LOGIN_DIALOG_H
#define LOGIN_DIALOG_H

#include <QDialog>
#include <QMessageBox>
namespace Ui {
class Login_dialog;
}

class Login_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Login_dialog(QWidget *parent = nullptr);
    ~Login_dialog();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton1_clicked();

private:
    Ui::Login_dialog *ui;
};

#endif // LOGIN_DIALOG_H
