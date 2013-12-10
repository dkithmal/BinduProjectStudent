#include "viewotherfiles.h"
#include "ui_viewotherfiles.h"

ViewOtherFiles::ViewOtherFiles(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ViewOtherFiles)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    filepath ="E:/dk work/Motarola/Project Location/Stdudent Path/Administration/Admin.xml";
    basicPath="E:/dk work/Motarola/Project Location/Stdudent Path/Student/";
    setOtherFileList();
}

ViewOtherFiles::~ViewOtherFiles()
{
    delete ui;
}


void ViewOtherFiles::setOtherFileList()
{
    QString createOtherFilePath=basicPath;
    createOtherFilePath.append("Other");
    qDebug()<<createOtherFilePath<<"dddddddddd";
    QDirIterator dirIt(createOtherFilePath,QDirIterator::Subdirectories);
    while (dirIt.hasNext()) {
        dirIt.next();
        if (QFileInfo(dirIt.filePath()).isFile())
        {
            ui->lWFileList->addItem(dirIt.filePath().mid(dirIt.filePath().lastIndexOf("/")+1));

        }
            //if (QFileInfo(dirIt.filePath()).suffix() == "txt")
            //    qDebug()<<dirIt.filePath();
    }

}

void ViewOtherFiles::on_lWFileList_doubleClicked(const QModelIndex &index)
{
    QString createfilePath=basicPath;
    createfilePath.append("Other/");
    createfilePath.append(ui->lWFileList->currentItem()->text());


    QDesktopServices::openUrl(QUrl::fromLocalFile(createfilePath));
}

void ViewOtherFiles::on_pBOpen_clicked()
{
    if(!ui->lWFileList->currentIndex().isValid())
    {
        QMessageBox::information(this,"Error","Please Select File");

    }
    else
    {
        QString createfilePath=basicPath;
        createfilePath.append("Other/");
        createfilePath.append(ui->lWFileList->currentItem()->text());


        QDesktopServices::openUrl(QUrl::fromLocalFile(createfilePath));

    }



}
