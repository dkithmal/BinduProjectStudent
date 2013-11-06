#ifndef VIEWOTHERFILES_H
#define VIEWOTHERFILES_H


#include <QDialog>
#include <QString>
#include <QFile>
#include <QtXml>
#include <QDebug>
#include <QMessageBox>
#include <QDesktopServices>
namespace Ui {
class ViewOtherFiles;
}

class ViewOtherFiles : public QDialog
{
    Q_OBJECT
    
public:
    explicit ViewOtherFiles(QWidget *parent = 0);
    ~ViewOtherFiles();
    QString filepath;
    QString basicPath;
    void setOtherFileList();
    
private slots:
    void on_lWFileList_doubleClicked(const QModelIndex &index);

    void on_pBOpen_clicked();

private:
    Ui::ViewOtherFiles *ui;
};

#endif // VIEWOTHERFILES_H
