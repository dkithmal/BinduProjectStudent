#include "adminactivity.h"
#include "ui_adminactivity.h"

AdminActivity::AdminActivity(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminActivity)
{
    ui->setupUi(this);
    filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
    ui->tabWidget->setCurrentIndex(0);
}

AdminActivity::~AdminActivity()
{
    delete ui;

}

void AdminActivity::on_pBUpdateStudent_clicked()
{
    if(ui->lEStudentName->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter New Student Name");
    }
    else
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

                QDomElement newStudent=document.createElement("Student");
                newStudent.setAttribute("StudenttName",ui->lEStudentName->text());

                root.replaceChild(newStudent,student.at(0));


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

                QMessageBox::information(this,"Success","Studnt Name Successfully chnaged");
                this->close();




        }

    }
}

void AdminActivity::on_pBUpdateAdmin_clicked()
{
    int x=0;
    if(ui->lEAdminNewPassword->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter Password");
        x=1;
    }
    if(ui->lEAdminConPassword->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter conf Password");
        x=1;

    }
    if(ui->lEAdminNewPassword->text()!=ui->lEAdminConPassword->text())
    {
        QMessageBox::information(this,"Error","New Password And confrm password dose not match");
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



                document.setContent(&newConfigFile);
                root= document.firstChildElement();


                QDomNodeList admin= root.elementsByTagName("AdminAccount");

                QDomElement newAdmin=document.createElement("AdminAccount");
                if(ui->lEAdminUserName->text().isEmpty())
                {
                    newAdmin.setAttribute("AdminUserName",admin.at(0).toElement().attribute("AdminUserName"));

                }
                else
                {
                    newAdmin.setAttribute("AdminUserName",ui->lEAdminUserName->text());

                }

                newAdmin.setAttribute("AdminPassword",ui->lEAdminNewPassword->text());


                root.replaceChild(newAdmin,admin.at(0));


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

                QMessageBox::information(this,"Success","Admin Account Successfully chnaged");
                this->close();




        }

    }
}
