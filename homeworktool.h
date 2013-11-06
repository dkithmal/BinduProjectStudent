#ifndef HOMEWORKTOOL_H
#define HOMEWORKTOOL_H

#include <QWidget>
#include <QDialog>
#include "openhomework.h"
#include "opennote.h"
#include "viewotherfiles.h"
namespace Ui {
class HomeWorkTool;
}

class HomeWorkTool : public QDialog
{
    Q_OBJECT
    
public:
    explicit HomeWorkTool(QDialog *parent = 0);
    ~HomeWorkTool();
    OpenHomeWork *openHomeWork;
    OpenNote *openNote;
     ViewOtherFiles *viewOtherFiles;
    
private slots:
    void on_pBDoHomeWork_clicked();

    void on_pBReadNote_clicked();

    void on_pBOpenOtherFile_clicked();

private:
    Ui::HomeWorkTool *ui;
};

#endif // HOMEWORKTOOL_H
