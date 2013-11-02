#ifndef OPENHOMEWORK_H
#define OPENHOMEWORK_H

#include <QWidget>
#include <QString>
#include <QFile>
#include <QtXml>
#include <QDebug>
#include <QMessageBox>
#include "answertopaper.h"

namespace Ui {
class OpenHomeWork;
}

class OpenHomeWork : public QWidget
{
    Q_OBJECT
    
public:
    explicit OpenHomeWork(QWidget *parent = 0);
    ~OpenHomeWork();
    void setSubjetToList();


    QString filepath;
    QString basicPath;
    AnswerToPaper *answerToPaper;
    
private slots:
    void on_lWSelectSubject_clicked(const QModelIndex &index);

    void on_pBOpen_clicked();

private:
    Ui::OpenHomeWork *ui;
};

#endif // OPENHOMEWORK_H
