#ifndef CREATEADMIN_H
#define CREATEADMIN_H

#include <QDialog>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QtXml>
namespace Ui {
class CreateAdmin;
}

class CreateAdmin : public QDialog
{
    Q_OBJECT
    
public:
    explicit CreateAdmin(QWidget *parent = 0);
    ~CreateAdmin();
    QString filepath;
    
private slots:


    void on_pBCreateAdmin_clicked();

private:
    Ui::CreateAdmin *ui;
};

#endif // CREATEADMIN_H
