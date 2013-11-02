#ifndef ADMINACTIVITY_H
#define ADMINACTIVITY_H

#include <QDialog>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include <QString>
#include <QFileDialog>
#include <QtXml>

namespace Ui {
class AdminActivity;
}

class AdminActivity : public QDialog
{
    Q_OBJECT
    
public:
    explicit AdminActivity(QWidget *parent = 0);
    ~AdminActivity();
    QString filepath;
    
private slots:
    void on_pBUpdateStudent_clicked();

    void on_pBUpdateAdmin_clicked();

private:
    Ui::AdminActivity *ui;
};

#endif // ADMINACTIVITY_H
