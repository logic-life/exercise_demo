#include "student.h"

Student::Student(QObject *parent) : QObject(parent)
{

}

void Student::treat(){
    qDebug()<<"this is my treat!";
}
