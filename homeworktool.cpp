#include "homeworktool.h"
#include "ui_homeworktool.h"

HomeWorkTool::HomeWorkTool(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::HomeWorkTool)
{
    ui->setupUi(this);

}

HomeWorkTool::~HomeWorkTool()
{
    delete ui;
}

void HomeWorkTool::on_pBDoHomeWork_clicked()
{
    openHomeWork = new OpenHomeWork;
    openHomeWork->setModal(false);
    this->close();
    openHomeWork->exec();
    //openHomeWork->show();
    //this->close();
}

void HomeWorkTool::on_pBReadNote_clicked()
{
    openNote =new OpenNote;
    openNote->setModal(false);
    this->close();
    openNote->exec();
    //openNote->show();


}

void HomeWorkTool::on_pBOpenOtherFile_clicked()
{
    viewOtherFiles = new ViewOtherFiles;
    viewOtherFiles->setModal(false);
    this->close();
    viewOtherFiles->exec();
}
