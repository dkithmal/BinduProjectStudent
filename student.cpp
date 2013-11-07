#include "student.h"
#include "ui_student.h"

Student::Student(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Student)
{
    ui->setupUi(this);
   filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
   setStudentNameInDekstop();
   ui->lWSettings->setHidden(true);

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(showTime()));
    timer->start(1000);

    showTime();




    // gui deco




    //to full screan view image
    QPalette p = palette();

    //Load image to QPixmap, Give full path of image
   QPixmap pixmap1(":/BinduStudent/new/imgs/06.jpeg"); //For emulator C: is ..\epoc32\winscw\c so image must be at that location

   //resize image if it is larger than screen size.
   QDesktopWidget* desktopWidget = QApplication::desktop();
   QRect rect = desktopWidget->availableGeometry();

   QSize size(rect.width(), rect.height()+40);
   //resize as per your requirement..
   QPixmap pixmap(pixmap1.scaled(size));

   p.setBrush(QPalette::Background,  pixmap);
   QWidget::setPalette(p);


   QPixmap pixmap2(":/BinduStudent/new/imgs/settings_symbol.png");
   QIcon cBSettings(pixmap2);
   ui->pBSettings->setIcon(cBSettings);
    QSize size2(30,30);
    ui->pBSettings->setIconSize(size2);
    ui->lWSettings->setStyleSheet( "background-color: rgba(0,0,0, 80%); color:Azure;");



   ui->groupBox->setStyleSheet("background-color: rgba(0,0,0, 80%); ");


   ui->wHeader->setStyleSheet(" background-color:black ;");
   ui->lClock->setStyleSheet(" color:Azure ;");
   ui->label->setStyleSheet(" color:Azure ;");
   ui->lStudentName->setStyleSheet(" color:Azure ;");

    ui->lWSettings->addItem(new QListWidgetItem(QIcon(":/BinduStudent/new/imgs/admin.png"), "Admin"));
    ui->lWSettings->addItem(new QListWidgetItem(QIcon(":/BinduStudent/new/imgs/shutdown.png"), "Shut Down"));
    QSize sizeforSettingList(20,20);
    ui->lWSettings->setIconSize(sizeforSettingList);


    QPixmap homeWorktoolPM(":/BinduStudent/new/imgs/hw.png");

    QIcon homeWorktoolIcon(homeWorktoolPM);
    ui->pBHomeWork->setIcon(homeWorktoolIcon);
    ui->pBHomeWork->setIconSize(homeWorktoolPM.rect().size());
}

Student::~Student()
{
    delete ui;
}

void Student::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("h:m ap");
   // if ((time.second() % 2) == 0)
    //    text[2] = ' ';
    ui->lClock->setText(text);
}

void Student::on_pBHomeWork_clicked()
{
    homeWorkTool= new HomeWorkTool;
    homeWorkTool->setModal(false);
    homeWorkTool->exec();
    //homeWorkTool->show();

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



void Student::on_pBSettings_clicked()
{    if(ui->lWSettings->isHidden())
    {
        ui->lWSettings->setHidden(false);
    }
    else
    {
        ui->lWSettings->setHidden(true);

    }

}

void Student::on_lWSettings_clicked(const QModelIndex &index)
{
    if(ui->lWSettings->currentItem()->text()=="Admin")
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
               // ui->cBSettings->setCurrentIndex(0);
                 ui->lWSettings->setHidden(true);
                createAdmin->exec();
                setStudentNameInDekstop();


            }

            else
            {
                adminLogin= new AdminLogin;
                adminLogin->setModal(false);
               // ui->cBSettings->setCurrentIndex(0);
                 ui->lWSettings->setHidden(true);
                adminLogin->exec();
                setStudentNameInDekstop();


            }




       }




    }
    if(ui->lWSettings->currentItem()->text()=="ShutDown")
    {




    }
}
