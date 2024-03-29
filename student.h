#ifndef STUDENT_H
#define STUDENT_H

#include <QWidget>
#include <QTime>
#include <QTimer>
#include <QMessageBox>
#include <QDesktopWidget>
#include <stdlib.h>
#include "homeworktool.h"
#include "adminlogin.h"
#include "createadmin.h"

namespace Ui {
class Student;
}

class Student : public QWidget
{
    Q_OBJECT
    
public:
    explicit Student(QWidget *parent = 0);
    ~Student();
    void setStudentNameInDekstop();
    HomeWorkTool *homeWorkTool;
    QString filepath;
    AdminLogin *adminLogin;
    CreateAdmin *createAdmin;
    
private slots:
    void showTime();
    void on_pBHomeWork_clicked();



    void on_pBSettings_clicked();

    void on_lWSettings_clicked(const QModelIndex &index);

private:
    Ui::Student *ui;
};

#endif // STUDENT_H
