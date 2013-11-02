#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include "homeworktool.h"

namespace Ui {
class Student;
}

class Student : public QWidget
{
    Q_OBJECT
    
public:
    explicit Student(QWidget *parent = 0);
    ~Student();
    HomeWorkTool *homeWorkTool;
    
private slots:
    void showTime();
    void on_pBHomeWork_clicked();

private:
    Ui::Student *ui;
};

#endif // STUDENT_H
