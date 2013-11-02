#ifndef OPENNOTE_H
#define OPENNOTE_H

#include <QWidget>
#include <QDialog>
#include <QString>
#include <QFile>
#include <QtXml>
#include <QDebug>
#include <QMessageBox>
#include "viewnote.h"

namespace Ui {
class OpenNote;
}

class OpenNote : public QDialog
{
    Q_OBJECT
    
public:
    explicit OpenNote(QDialog *parent = 0);
    ~OpenNote();
    QString filepath;
    QString basicPath;

    void setSubjetToList();

    ViewNote *viewNote;
    
private slots:
    void on_pBOpen_clicked();

    void on_lWSelectSubject_clicked(const QModelIndex &index);

private:
    Ui::OpenNote *ui;
};

#endif // OPENNOTE_H
