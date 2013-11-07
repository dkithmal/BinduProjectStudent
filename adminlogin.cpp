#include "adminlogin.h"
#include "ui_adminlogin.h"

AdminLogin::AdminLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminLogin)
{
    ui->setupUi(this);
    this->setWindowFlags(this->windowFlags() & ~Qt::WindowContextHelpButtonHint);
        filepath ="D:/dk work/Motarola/BinduStudent/Administration/Admin.xml";
}

AdminLogin::~AdminLogin()
{
    delete ui;
}

void AdminLogin::on_pBLogin_clicked()
{
    int x=0;
    if(ui->lEAdminUserName->text().isEmpty())
    {
         QMessageBox::information(this,"Error","Please Enter AdminUserName");
         x=1;
    }
    if(ui->lEAdminPassword->text().isEmpty())
    {
        QMessageBox::information(this,"Error","Please Enter Admin Password");
        x=1;
    }

    if(x==0)
    {        QFile newConfigFile(filepath);
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
                if(admin.at(0).toElement().attribute("AdminUserName")==ui->lEAdminUserName->text())
                {
                    if(admin.at(0).toElement().attribute("AdminPassword")==ui->lEAdminPassword->text())
                    {
                        adminActivity= new AdminActivity;
                        adminActivity->setModal(false);
                        this->close();
                        adminActivity->exec();


                    }
                    else
                    {
                         QMessageBox::information(this,"Error","UserName Or password Incorrect");

                    }


                }
                else
                {
                    QMessageBox::information(this,"Error","UserName Or password Incorrect");

                }






        }

    }

}
