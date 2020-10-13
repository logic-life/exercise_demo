#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QPushButton>
#include "mpushbutton.h"
#include "mwidget.h"
class MainWindow : public Mwidget
{
    Q_OBJECT

public:
    MainWindow(Mwidget *parent = nullptr);
    ~MainWindow();
};
#endif // MAINWINDOW_H
