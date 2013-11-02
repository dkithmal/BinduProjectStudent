#ifndef VIEWNOTE_H
#define VIEWNOTE_H

#include <QtWidgets>
#include <QDialog>
#include <QString>
#include <QFile>
#include <QtXml>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class ViewNote;
}

class ViewNote : public QDialog
{
    Q_OBJECT
    
public:
    explicit ViewNote(QDialog *parent = 0,QString filePath=NULL);
    ~ViewNote();
    void showContent();
    QString noteFilePath;
    
private:
    Ui::ViewNote *ui;
};

#endif // VIEWNOTE_H
