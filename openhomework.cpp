#include "openhomework.h"
#include "ui_openhomework.h"

OpenHomeWork::OpenHomeWork(QDialog *parent) :
    QDialog(parent),
    ui(new Ui::OpenHomeWork)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);

     filepath ="E:/dk work/Motarola/Project Location/Stdudent Path/Administration/Admin.xml";
     basicPath="E:/dk work/Motarola/Project Location/Stdudent Path/Student/";

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
    creatingAnswerPaper();
    QString creatingAnswerXmlInStudent=basicPath;
    creatingAnswerXmlInStudent.append(ui->lWSelectSubject->currentItem()->text());
    creatingAnswerXmlInStudent.append("/Answer/");
    creatingAnswerXmlInStudent.append(ui->lWSelectHomeWork->currentItem()->text());
    creatingAnswerXmlInStudent.append("-");
    creatingAnswerXmlInStudent.append(toGetStudentUserName());
    creatingAnswerXmlInStudent.append(".xml");

    answerToPaper= new AnswerToPaper(0,creatingAnswerXmlInStudent);
    answerToPaper->setModal(false);
    this->close();
    answerToPaper->exec();
    //answerToPaper->show();



}


void OpenHomeWork::creatingAnswerPaper()
{

    //creating file in Answer directry
    QString creatingAnswerXmlInStudent=basicPath;
    creatingAnswerXmlInStudent.append(ui->lWSelectSubject->currentItem()->text());
    creatingAnswerXmlInStudent.append("/Answer");


    //create ansewer directry if not exist
    if(!QDir(creatingAnswerXmlInStudent).exists())
    {
        QDir().mkdir(creatingAnswerXmlInStudent);
    }


    creatingAnswerXmlInStudent.append("/");
    creatingAnswerXmlInStudent.append(ui->lWSelectHomeWork->currentItem()->text());
    creatingAnswerXmlInStudent.append("-");
    creatingAnswerXmlInStudent.append(toGetStudentUserName());
    creatingAnswerXmlInStudent.append(".xml");


  QFile newAnswerXml(creatingAnswerXmlInStudent);

  if(newAnswerXml.exists())
  {

  }
  else
  {
      //create paper current path
      QString createPaperOpenPath=basicPath;
      createPaperOpenPath.append(ui->lWSelectSubject->currentItem()->text());
      createPaperOpenPath.append("/HomeWork/");
      createPaperOpenPath.append(ui->lWSelectHomeWork->currentItem()->text());
      createPaperOpenPath.append(".xml");

      //creating new xml in answer directry
      QFile newPaperFile(createPaperOpenPath);
      if(!newPaperFile.open(QFile::ReadWrite| QIODevice::Text))
      {

      }
      else
      {
          QDomDocument document;
          QDomElement root;



              document.setContent(&newPaperFile);
              root= document.firstChildElement();

              document.appendChild(root);
              newPaperFile.close();

              if(!newAnswerXml.open(QFile::ReadWrite|QIODevice::Truncate | QIODevice::Text))
              {

              }
              else
              {
                  QTextStream stream(&newAnswerXml);
                  stream <<document.toString();
                  newAnswerXml.close();

             }


      }
  }


}

QString OpenHomeWork::toGetStudentUserName()
{
    QFile newConfigFile(filepath);
         if(!newConfigFile.open(QFile::ReadWrite| QIODevice::Text))
         {

         }
         else
         {
             QDomDocument document;
             QDomElement root;



                 document.setContent(&newConfigFile);
                 root= document.firstChildElement();


                 QDomNodeList student= root.elementsByTagName("Student");
                 return student.at(0).toElement().attribute("StudenttName");








         }

}
