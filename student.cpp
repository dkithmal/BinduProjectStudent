#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
   filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
   setStudentNameInDekstop();

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();
}

Student::~Student()
{
    delete ui;
}

void Student::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");
    if ((time.second() % 2) == 0)
        text[2] = ' ';
    ui->lcdTime->display(text);
}

void Student::on_pBHomeWork_clicked()
{
    homeWorkTool= new HomeWorkTool;
    homeWorkTool->setModal(false);
    homeWorkTool->exec();
    //homeWorkTool->show();

}

void Student::on_cBSettings_currentIndexChanged(int index)
{
    if(index==1)
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

            QDomNodeList student = root.elementsByTagName("Student");

            if(student.isEmpty())
            {
                createAdmin= new CreateAdmin;
                createAdmin->setModal(false);
                ui->cBSettings->setCurrentIndex(0);
                createAdmin->exec();
                setStudentNameInDekstop();


            }

            else
            {
                adminLogin= new AdminLogin;
                adminLogin->setModal(false);
                ui->cBSettings->setCurrentIndex(0);
                adminLogin->exec();
                setStudentNameInDekstop();


            }




       }

    }
}

void Student::setStudentNameInDekstop()
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
                 ui->lStudentName->setText(student.at(0).toElement().attribute("StudenttName"));








         }

}


