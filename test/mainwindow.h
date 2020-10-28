#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QFileDialog>
#include <QTextStream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void newFile();
    bool maybeSave();
    bool save();
    bool saveAs();
    bool saveFile(const QString &fileName);

private slots:
    void on_actionxinjianwenjian_triggered();

    void on_actionbaocun_triggered();

    void on_actionlingcunwei_triggered();

private:
    Ui::MainWindow *ui;
    bool isUntitled;
    QString curFile;
};
#endif // MAINWINDOW_H
