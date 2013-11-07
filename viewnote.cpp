#include "viewnote.h"
#include "ui_viewnote.h"

ViewNote::ViewNote(QDialog *parent,QString filePath) :
    QDialog(parent),
    ui(new Ui::ViewNote)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
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
    ui->tENote->setPlainText(in.readAll());



    }




}
