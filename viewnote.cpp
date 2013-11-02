#include "viewnote.h"
#include "ui_viewnote.h"

ViewNote::ViewNote(QWidget *parent,QString filePath) :
    QWidget(parent),
    ui(new Ui::ViewNote)
{
    ui->setupUi(this);
    ui->tENote->setReadOnly(1);

    noteFilePath=filePath;
    showContent();
}

ViewNote::~ViewNote()
{
    delete ui;
}


void ViewNote::showContent()
{

    QFile openConfigFile(noteFilePath);
    if(!openConfigFile.open(QFile::ReadWrite| QIODevice::Text))
    {
        qDebug()<<"error";

    }
    else
    {
    QTextStream in(&openConfigFile);
    ui->tEText->setPlainText(in.readAll());



    }




}
