#include "createadmin.h"
#include "ui_createadmin.h"

CreateAdmin::CreateAdmin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CreateAdmin)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
    filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
}

CreateAdmin::~CreateAdmin()
{
    delete ui;
}


void CreateAdmin::on_pBCreateAdmin_clicked()
{
    int x=0;
    if(ui->lEStudentName->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter Student Name");
        x=1;

    }

    if(ui->lEAdminUserName->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please EnterAdmin UserName");
        x=1;

    }
    if(ui->lEAdminPassword->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter AdminPassword");
        x=1;

    }
    if(ui->lEAdminconformPassowrd->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter AdminConfomPassword");
        x=1;

    }
    if(!(ui->lEAdminPassword->text()==ui->lEAdminconformPassowrd->text()))
    {
        QMessageBox::information(this,"Error","Password And Confrm Passwod not match");
        x=1;

    }

    if(x==0)
    {


        QFile newConfigFile(filepath);
        if(!newConfigFile.open(QFile::ReadWrite| QIODevice::Text))
        {

        }
        else
        {
            QDomDocument document;
            QDomElement root;


            if(newConfigFile.size()==0)
            {
                root = document.createElement("Administration");
                QDomElement student= document.createElement("Student");
                student.setAttribute("StudenttName",ui->lEStudentName->text());

                QDomElement admin=document.createElement("AdminAccount");
                admin.setAttribute("AdminUserName",ui->lEAdminUserName->text());
                admin.setAttribute("AdminPassword",ui->lEAdminPassword->text());

                root.appendChild(student);
                root.appendChild(admin);


            }
            else
            {
                document.setContent(&newConfigFile);
                root= document.firstChildElement();


                QDomElement student= document.createElement("Student");
                student.setAttribute("StudenttName",ui->lEStudentName->text());

                QDomElement admin=document.createElement("AdminAccount");
                admin.setAttribute("AdminUserName",ui->lEAdminUserName->text());
                admin.setAttribute("AdminPassword",ui->lEAdminPassword->text());

                root.appendChild(student);
                root.appendChild(admin);



            }

            document.appendChild(root);
            newConfigFile.close();

            if(!newConfigFile.open(QFile::ReadWrite|QIODevice::Truncate | QIODevice::Text))
            {

            }
            else
            {
                QTextStream stream(&newConfigFile);
                stream <<document.toString();
                newConfigFile.close();

           }

            QMessageBox::information(this,"Success","Profile Successfully creates");
            this->close();



        }
   }

}

