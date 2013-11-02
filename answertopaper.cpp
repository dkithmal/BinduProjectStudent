#include "answertopaper.h"
#include "ui_answertopaper.h"

AnswerToPaper::AnswerToPaper(QWidget *parent,QString filePath) :
    QWidget(parent),
    ui(new Ui::AnswerToPaper)
{
    ui->setupUi(this);

    paperOpenPath=filePath;

    //qDebug()<<paperOpenPath<<"ssssssssssssssssssssssss";
    qustionNo = 0;
    mcqNo=0;
    essayNO=0;
    totalNoOfQuestions=0;
    indexofTabWidget=0;

    paperHeaderLayout=0;
    paperQuestionsLayout=0;
    questionLayout[0]=0;
    questionLayout[1]=0;
    questionLayout[2]=0;
    questionLayout[3]=0;
    questionLayout[4]=0;

    ui->pBPrivious->setEnabled(false);

    toCreatePaperLayout();
}

AnswerToPaper::~AnswerToPaper()
{
    delete ui;
}


void AnswerToPaper::toCreatePaperLayout()
{

    QFile newPaperFile(paperOpenPath);
    if(!newPaperFile.open(QFile::ReadWrite| QIODevice::Text))
    {
        qDebug()<<"error";

    }
    else
    {
        QDomDocument document;

        document.setContent(&newPaperFile);
        //qDebug()<<document.toString();

        QDomElement root= document.firstChildElement();

        if(paperQuestionsLayout!=NULL)
        {
            QLayoutItem * item;
            QLayout * sublayout;
            QWidget * widget;

            while ((item = paperQuestionsLayout->takeAt(0))) {
                if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                else {delete item;}
            }

            // then finally
            delete paperQuestionsLayout;
            paperQuestionsLayout=0;

            if(questionLayout[0]!=NULL)
            {
                while ((item = questionLayout[0]->takeAt(0))) {
                    if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                    else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                    else {delete item;}
                }

                delete questionLayout[0];
                questionLayout[0]=0;
            }
            if(questionLayout[1]!=NULL)
            {
                while ((item = questionLayout[1]->takeAt(0))) {
                    if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                    else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                    else {delete item;}
                }

                delete questionLayout[1];
                questionLayout[1]=0;
            }
            if(questionLayout[2]!=NULL)
            {
                while ((item = questionLayout[2]->takeAt(0))) {
                    if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                    else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                    else {delete item;}
                }

                delete questionLayout[2];
                questionLayout[2]=0;
            }
            if(questionLayout[3]!=NULL)
            {
                while ((item = questionLayout[3]->takeAt(0))) {
                    if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                    else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                    else {delete item;}
                }

                delete questionLayout[3];
                questionLayout[3]=0;
            }
            if(questionLayout[4]!=NULL)
            {
                while ((item = questionLayout[4]->takeAt(0))) {
                    if ((sublayout = item->layout()) != 0){/* do the same for sublayout*/}
                    else if ((widget = item->widget()) != 0) {widget->hide(); delete widget;}
                    else {delete item;}
                }

                delete questionLayout[4];
                questionLayout[4]=0;
            }


                drowHeader(root);
                drowQuestions(root);


        }
        else
        {
                drowHeader(root);
                drowQuestions(root);


        }








    }

}

void AnswerToPaper::drowHeader(QDomElement root)
{
    QDomNodeList items = root.elementsByTagName("Header");

      QDomNode itemNode = items.at(0);
      QDomElement itemElement=itemNode.toElement();

      QDomNode title=itemElement.elementsByTagName("Title").at(0);
      QDomNode subject=itemElement.elementsByTagName("Subject").at(0);
      QDomNode duration=itemElement.elementsByTagName("Duration").at(0);

      QLabel *lTitle=new QLabel("<h5>"+title.firstChild().nodeValue()+"</h5>");
      QLabel *lSubject=new QLabel("Subject :"+subject.firstChild().nodeValue());
      QLabel *lDuration=new QLabel("Duration :"+duration.firstChild().nodeValue());

      paperHeaderLayout = new QVBoxLayout;

      paperHeaderLayout->addWidget(lTitle,0,Qt::AlignCenter);
      paperHeaderLayout->addWidget(lSubject);
      paperHeaderLayout->addWidget(lDuration);


       ui->gBHeader->setLayout(paperHeaderLayout);


}

void AnswerToPaper::drowQuestions(QDomElement root)
{
    int qNoInPage=1;

    QDomNodeList activityItems = root.elementsByTagName("Activity");
    paperQuestionsLayout = new QVBoxLayout;

    totalNoOfQuestions=activityItems.count();
    if(totalNoOfQuestions<=5)
    {
        ui->pBNext->setEnabled(false);
    }
    else if(ui->lPageNo->text().toInt()==1)
    {
      ui->pBNext->setEnabled(true);
    }


    int i=0;
    int j=0;
    if(ui->lPageNo->text().toInt()==1)
    {
        j=5;

    }
    else
    {
        i=(ui->lPageNo->text().toInt()-1)*5;
        j=i+5;
    }
    for (i;i<j;i++)
    {
        QDomNode itemNode = activityItems.at(i);
         questionLayout[qNoInPage-1] = new QGridLayout;


        if(itemNode.isElement())
        {

            if(itemNode.toElement().attribute("Type")=="Mcq")
            {
                int noOfChoises=itemNode.toElement().attribute("NoOfChoises").toInt();
                int mcqQusrionNo=itemNode.toElement().attribute("McqNo").toInt();
                int questionNo=itemNode.toElement().attribute("QusetionNo").toInt();


                QDomElement itemElement=itemNode.toElement();
                QDomNode question=itemElement.elementsByTagName("Question").at(0);
                qusestionLables[questionNo]=new QLabel(QString::number(questionNo)+")"+question.firstChild().nodeValue());



                if(noOfChoises==2)
                {
                    QDomNode answer1=itemElement.elementsByTagName("Choice").at(0);
                    QDomNode answer2=itemElement.elementsByTagName("Choice").at(1);

                    rBMcqAnswers[mcqQusrionNo-1][0]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][0]->setText(answer1.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][1]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][1]->setText(answer2.firstChild().nodeValue());

                    questionLayout[qNoInPage-1]->addWidget(qusestionLables[questionNo],0,0,1,40,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("1)", this),1,0,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][0],1,1,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("2)", this), 1,20,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][1],1,21,1,19,0);



                }
                if(noOfChoises==3)
                {
                    QDomNode answer1=itemElement.elementsByTagName("Choice").at(0);
                    QDomNode answer2=itemElement.elementsByTagName("Choice").at(1);
                    QDomNode answer3=itemElement.elementsByTagName("Choice").at(2);

                    rBMcqAnswers[mcqQusrionNo-1][0]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][0]->setText(answer1.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][1]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][1]->setText(answer2.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][2]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][2]->setText(answer3.firstChild().nodeValue());

                    questionLayout[qNoInPage-1]->addWidget(qusestionLables[questionNo],0,0,1,40,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("1)", this),1,0,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][0],1,1,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("2)", this), 1,20,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][1],1,21,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("3)", this), 2,0,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][2],2,1,1,39,0);


                }
                if(noOfChoises==4)
                {
                    QDomNode answer1=itemElement.elementsByTagName("Choice").at(0);
                    QDomNode answer2=itemElement.elementsByTagName("Choice").at(1);
                    QDomNode answer3=itemElement.elementsByTagName("Choice").at(2);
                    QDomNode answer4=itemElement.elementsByTagName("Choice").at(3);

                    rBMcqAnswers[mcqQusrionNo-1][0]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][0]->setText(answer1.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][1]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][1]->setText(answer2.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][2]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][2]->setText(answer3.firstChild().nodeValue());
                    rBMcqAnswers[mcqQusrionNo-1][3]=new QRadioButton();
                    rBMcqAnswers[mcqQusrionNo-1][3]->setText(answer4.firstChild().nodeValue());

                    questionLayout[qNoInPage-1]->addWidget(qusestionLables[questionNo],0,0,1,40,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("1)", this),1,0,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][0],1,1,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("2)", this), 1,20,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][1],1,21,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("3)", this), 2,0,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][2],2,1,1,19,0);
                    questionLayout[qNoInPage-1]->addWidget(new QLabel("4)", this),2,20,1,1,0);
                    questionLayout[qNoInPage-1]->addWidget(rBMcqAnswers[mcqQusrionNo-1][3],2,21,1,19,0);



                }

                //mcqFrames[mcqQusrionNo-1]=new QFrame();
                //mcqFrames[mcqQusrionNo-1]->setLayout(mcqQuestionLayout[mcqQusrionNo-1]);
                if(qNoInPage==1)
                ui->fQuestion1->setLayout(questionLayout[qNoInPage-1]);
                if(qNoInPage==2)
                    ui->fQuestion2->setLayout(questionLayout[qNoInPage-1]);
                if(qNoInPage==3)
                    ui->fQuestion3->setLayout(questionLayout[qNoInPage-1]);
                if(qNoInPage==4)
                    ui->fQuestion4->setLayout(questionLayout[qNoInPage-1]);
                if(qNoInPage==5)
                    ui->fQuestion5->setLayout(questionLayout[qNoInPage-1]);

                qNoInPage++;

                QDomNode teacherAnswer=itemElement.elementsByTagName("TeacherAnswer").at(0);

                int mcqQusrionAnswer=teacherAnswer.firstChild().nodeValue().toInt();

                if(mcqQusrionAnswer!=0)
                {
                    rBMcqAnswers[mcqQusrionNo-1][mcqQusrionAnswer-1]->setChecked(true);

                }
                //paperQuestionsLayout->addWidget(mcqFrames[mcqQusrionNo-1],1);
               // paperQuestionsLayout->addWidget(ui->fQuestion1]);






            }
            if(itemNode.toElement().attribute("Type")=="Essay")
            {
                 int questionNo=itemNode.toElement().attribute("QusetionNo").toInt();
                 int EssayQusrionNo=itemNode.toElement().attribute("EssayNo").toInt();

                 QDomElement itemElement=itemNode.toElement();
                 QDomNode question=itemElement.elementsByTagName("Question").at(0);
                 qusestionLables[questionNo]=new QLabel(QString::number(questionNo)+")"+question.firstChild().nodeValue());

                 questionLayout[qNoInPage-1]->addWidget(qusestionLables[questionNo]);

                 essayAnswers[EssayQusrionNo-1] = new QTextEdit;
                 questionLayout[qNoInPage-1]->addWidget(essayAnswers[EssayQusrionNo-1]);

                 if(qNoInPage==1)
                 ui->fQuestion1->setLayout(questionLayout[qNoInPage-1]);
                 if(qNoInPage==2)
                     ui->fQuestion2->setLayout(questionLayout[qNoInPage-1]);
                 if(qNoInPage==3)
                     ui->fQuestion3->setLayout(questionLayout[qNoInPage-1]);
                 if(qNoInPage==4)
                     ui->fQuestion4->setLayout(questionLayout[qNoInPage-1]);
                 if(qNoInPage==5)
                     ui->fQuestion5->setLayout(questionLayout[qNoInPage-1]);


                 qNoInPage++;

                 QDomNode teacherAnswer=itemElement.elementsByTagName("TeacherAnswer").at(0);

                 QString essayQusrionAnswer=teacherAnswer.firstChild().nodeValue();
                 essayAnswers[EssayQusrionNo-1]->setText(essayQusrionAnswer);

            }
        }



    }


    ui->gBQuestions->setLayout(paperQuestionsLayout);


}





void AnswerToPaper::saveAnswers()
{
    QFile newPaperFile(paperOpenPath);
    if(!newPaperFile.open(QFile::ReadWrite| QIODevice::Text))
    {
        qDebug()<<"error";

    }
    else
    {
        QDomDocument document;

        document.setContent(&newPaperFile);

        QDomElement root= document.firstChildElement();

        QDomNodeList activityItems = root.elementsByTagName("Activity");

        int i=0;
        int j=0;
        if(ui->lPageNo->text().toInt()==1)
        {
            j=5;

        }
        else
        {
            i=(ui->lPageNo->text().toInt()-1)*5;
            j=i+5;
        }

        for (i;i<j;i++)
        {

            QDomNode itemNode = activityItems.at(i);
             if(itemNode.isElement())
             {
                  if(itemNode.toElement().attribute("Type")=="Mcq")
                  {

                      QDomElement itemElement=itemNode.toElement();
                      QDomNode teacherAnswer=itemElement.elementsByTagName("TeacherAnswer").at(0);


                      if(!teacherAnswer.isNull())
                      {
                          int mcqQusrionNo=itemNode.toElement().attribute("McqNo").toInt();
                          int noOfChoises=itemNode.toElement().attribute("NoOfChoises").toInt();

                          QDomElement newTeacherAnswer = document.createElement(QString("TeacherAnswer"));


                          for(int k=0;k<noOfChoises;k++)
                          {

                              if(rBMcqAnswers[mcqQusrionNo-1][k]->isChecked())
                              {

                                  newTeacherAnswer.appendChild(document.createTextNode(QString::number(k+1)));

                                  itemNode.replaceChild(newTeacherAnswer,teacherAnswer);

                                  break;
                              }

                          }


                      }
                      else
                      {

                          QDomElement newTeacherAnswer = document.createElement(QString("TeacherAnswer"));

                          int mcqQusrionNo=itemNode.toElement().attribute("McqNo").toInt();
                          int noOfChoises=itemNode.toElement().attribute("NoOfChoises").toInt();


                         for(int m=0;m<noOfChoises;m++)
                         {



                             if(rBMcqAnswers[mcqQusrionNo-1][m]->isChecked())
                             {
                                 newTeacherAnswer.appendChild(document.createTextNode(QString::number(m+1)));

                                 itemNode.appendChild(newTeacherAnswer);


                                 break;
                             }

                         }

                      }

                  }
                if(itemNode.toElement().attribute("Type")=="Essay")
                  {
                    QDomElement itemElement=itemNode.toElement();
                    QDomNode teacherAnswer=itemElement.elementsByTagName("TeacherAnswer").at(0);

                    if(!teacherAnswer.isNull())
                    {
                        QDomElement newTeacherAnswer = document.createElement(QString("TeacherAnswer"));
                         int essayQusrionNo=itemNode.toElement().attribute("EssayNo").toInt();
                         QString answer=essayAnswers[essayQusrionNo-1]->document()->toPlainText();
                        newTeacherAnswer.appendChild(document.createTextNode(answer));

                        itemNode.replaceChild(newTeacherAnswer,teacherAnswer);


                    }
                    else
                    {
                        QDomElement newTeacherAnswer = document.createElement(QString("TeacherAnswer"));
                        int essayQusrionNo=itemNode.toElement().attribute("EssayNo").toInt();
                        QString answer=essayAnswers[essayQusrionNo-1]->document()->toPlainText();
                        newTeacherAnswer.appendChild(document.createTextNode(answer));

                        itemNode.appendChild(newTeacherAnswer);


                    }

                  }


             }

             }

        newPaperFile.close();

        if(!newPaperFile.open(QFile::ReadWrite|QIODevice::Truncate | QIODevice::Text))
        {
            qDebug()<<"error";

        }
        else
        {
            QTextStream stream(&newPaperFile);
            stream <<document.toString();
            //qDebug() <<document.toString();
            newPaperFile.close();
        //  QMessageBox::information(this,"Success","Mcq Qustion Added");

       }

        }


}

void AnswerToPaper::on_pBPrivious_clicked()
{
    saveAnswers();
        ui->lPageNo->setText(QString::number(ui->lPageNo->text().toInt()-1));
        if(ui->lPageNo->text().toInt()==1)
        {
            ui->pBPrivious->setEnabled(false);
        }

        ui->pBNext->setEnabled(true);


        toCreatePaperLayout();

}

void AnswerToPaper::on_pBNext_clicked()
{
    saveAnswers();
      ui->lPageNo->setText(QString::number(ui->lPageNo->text().toInt()+1));
      if(totalNoOfQuestions/5==ui->lPageNo->text().toInt())
      {
          if(totalNoOfQuestions%5>0)
          {
          }
          else
          {
              ui->pBNext->setEnabled(false);

          }

      }
      else if(totalNoOfQuestions/5<ui->lPageNo->text().toInt())
      {
          ui->pBNext->setEnabled(false);

      }
      ui->pBPrivious->setEnabled(true);

      toCreatePaperLayout();

}














