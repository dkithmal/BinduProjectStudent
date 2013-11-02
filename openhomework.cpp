#include "openhomework.h"
#include "ui_openhomework.h"

OpenHomeWork::OpenHomeWork(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenHomeWork)
{
    ui->setupUi(this);

    filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
    basicPath="D:/dk work/Motarola/BinduStudent/Student/";

    setSubjetToList();
}

OpenHomeWork::~OpenHomeWork()
{
    delete ui;
}

void OpenHomeWork::setSubjetToList()
{
    QFile openConfigFile(filepath);
    if(!openConfigFile.open(QFile::ReadWrite| QIODevice::Text))
    {
        qDebug()<<"error";

    }
    else
    {
        QDomDocument document;

        document.setContent(&openConfigFile);
        QDomElement root= document.firstChildElement();

        QDomNodeList subjects = root.elementsByTagName("Subject");


        for(int i=0;i<subjects.count();i++)
        {

            QDomNode itemNode = subjects.at(i);

            if(itemNode.isElement())
            {
               ui->lWSelectSubject->addItem(itemNode.toElement().attribute("SubjectName"));



            }




       }


   }

}




void OpenHomeWork::on_lWSelectSubject_clicked(const QModelIndex &index)
{
    ui->lWSelectHomeWork->clear();
    QFile openConfigFile(filepath);
    if(!openConfigFile.open(QFile::ReadWrite| QIODevice::Text))
    {
        qDebug()<<"error";

    }
    else
    {
        QDomDocument document;

        document.setContent(&openConfigFile);
        QDomElement root= document.firstChildElement();

        QDomNodeList subjects = root.elementsByTagName("Subject");


        for(int i=0;i<subjects.count();i++)
        {

            QDomNode itemNode = subjects.at(i);

            if(itemNode.isElement())
            {
                if(itemNode.toElement().attribute("SubjectName")==ui->lWSelectSubject->currentItem()->text())
                {
                    QDomNodeList homeWorks=itemNode.toElement().elementsByTagName("HomeWork");

                     for(int k=0;k<homeWorks.count();k++)
                     {
                         QDomNode homeWorkItem=homeWorks.at(k);
                         ui->lWSelectHomeWork->addItem(homeWorkItem.toElement().attribute("HomeWorkName"));


                     }


                }
               //ui->lWSelectSubject->addItem(itemNode.toElement().attribute("SubjectName"));



            }




       }


   }

}

void OpenHomeWork::on_pBOpen_clicked()
{
    QString createPaperOpenPath=basicPath;
    createPaperOpenPath.append(ui->lWSelectSubject->currentItem()->text());
    createPaperOpenPath.append("/HomeWork/");
    createPaperOpenPath.append(ui->lWSelectHomeWork->currentItem()->text());
    createPaperOpenPath.append(".xml");

    answerToPaper= new AnswerToPaper(0,createPaperOpenPath);
    answerToPaper->show();
    this->close();


}
