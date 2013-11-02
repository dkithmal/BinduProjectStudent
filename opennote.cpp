#include "opennote.h"
#include "ui_opennote.h"

OpenNote::OpenNote(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OpenNote)
{
    ui->setupUi(this);
    filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
    basicPath="D:/dk work/Motarola/BinduStudent/Student/";

    setSubjetToList();
}

OpenNote::~OpenNote()
{
    delete ui;
}




void OpenNote::setSubjetToList()
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

void OpenNote::on_pBOpen_clicked()
{
    QString createNoteOpenPath=basicPath;
    createNoteOpenPath.append(ui->lWSelectSubject->currentItem()->text());
    createNoteOpenPath.append("/Note/");
    createNoteOpenPath.append(ui->lWSelectNote->currentItem()->text());
    createNoteOpenPath.append(".txt");

    viewNote = new ViewNote(0,createNoteOpenPath);
    viewNote->show();
    this->close();

}

void OpenNote::on_lWSelectSubject_clicked(const QModelIndex &index)
{
    ui->lWSelectNote->clear();
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
                    QDomNodeList homeWorks=itemNode.toElement().elementsByTagName("Note");

                     for(int k=0;k<homeWorks.count();k++)
                     {
                         QDomNode homeWorkItem=homeWorks.at(k);
                         ui->lWSelectNote->addItem(homeWorkItem.toElement().attribute("NoteName"));


                     }


                }
               //ui->lWSelectSubject->addItem(itemNode.toElement().attribute("SubjectName"));



            }




       }


   }
}
