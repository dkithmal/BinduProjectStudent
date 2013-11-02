#include "homeworktool.h"
#include "ui_homeworktool.h"

HomeWorkTool::HomeWorkTool(QWidget *parent) :
    QWidget(parent),
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
    openHomeWork->show();
    this->close();
}

void HomeWorkTool::on_pBReadNote_clicked()
{
    openNote =new OpenNote;
    openNote->show();
    this->close();

}
