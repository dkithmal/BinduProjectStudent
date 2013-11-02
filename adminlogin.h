#ifndef ADMINLOGIN_H
#define ADMINLOGIN_H

#include <QDialog>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QtXml>
#include "adminactivity.h"

namespace Ui {
class AdminLogin;
}

class AdminLogin : public QDialog
{
    Q_OBJECT
    
public:
    explicit AdminLogin(QWidget *parent = 0);
    ~AdminLogin();
    AdminActivity *adminActivity;
    QString filepath;
    
private slots:
    void on_pBLogin_clicked();

private:
    Ui::AdminLogin *ui;
};

#endif // ADMINLOGIN_H
