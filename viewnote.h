#ifndef VIEWNOTE_H
#define VIEWNOTE_H

#include <QtWidgets>
#include <QString>
#include <QFile>
#include <QtXml>
#include <QDebug>
#include <QMessageBox>

namespace Ui {
class ViewNote;
}

class ViewNote : public QWidget
{
    Q_OBJECT
    
public:
    explicit ViewNote(QWidget *parent = 0,QString filePath=NULL);
    ~ViewNote();
    void showContent();
    QString noteFilePath;
    
private:
    Ui::ViewNote *ui;
};

#endif // VIEWNOTE_H
