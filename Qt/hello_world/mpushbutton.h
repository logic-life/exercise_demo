#ifndef MPUSHBUTTON_H
#define MPUSHBUTTON_H

#include <QPushButton>

class Mpushbutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Mpushbutton(QPushButton *parent = nullptr);
    ~Mpushbutton();

signals:

};

#endif // MPUSHBUTTON_H
