/********************************************************************************
** Form generated from reading UI file 'createadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEADMIN_H
#define UI_CREATEADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_CreateAdmin
{
public:
    QLabel *label;
    QLineEdit *lEStudentName;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lEAdminUserName;
    QLineEdit *lEAdminPassword;
    QLineEdit *lEAdminconformPassowrd;
    QPushButton *pBCreateAdmin;
    QPushButton *pushButton_2;

    void setupUi(QDialog *CreateAdmin)
    {
        if (CreateAdmin->objectName().isEmpty())
            CreateAdmin->setObjectName(QStringLiteral("CreateAdmin"));
        CreateAdmin->resize(535, 302);
        QFont font;
        font.setPointSize(12);
        CreateAdmin->setFont(font);
        label = new QLabel(CreateAdmin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 131, 31));
        lEStudentName = new QLineEdit(CreateAdmin);
        lEStudentName->setObjectName(QStringLiteral("lEStudentName"));
        lEStudentName->setGeometry(QRect(190, 30, 191, 31));
        label_2 = new QLabel(CreateAdmin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 160, 131, 31));
        label_2->setFont(font);
        label_3 = new QLabel(CreateAdmin);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(30, 205, 121, 21));
        label_3->setFont(font);
        label_4 = new QLabel(CreateAdmin);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 245, 161, 21));
        lEAdminUserName = new QLineEdit(CreateAdmin);
        lEAdminUserName->setObjectName(QStringLiteral("lEAdminUserName"));
        lEAdminUserName->setGeometry(QRect(210, 160, 141, 31));
        lEAdminPassword = new QLineEdit(CreateAdmin);
        lEAdminPassword->setObjectName(QStringLiteral("lEAdminPassword"));
        lEAdminPassword->setGeometry(QRect(210, 199, 141, 31));
        lEAdminPassword->setEchoMode(QLineEdit::Password);
        lEAdminconformPassowrd = new QLineEdit(CreateAdmin);
        lEAdminconformPassowrd->setObjectName(QStringLiteral("lEAdminconformPassowrd"));
        lEAdminconformPassowrd->setGeometry(QRect(210, 239, 141, 31));
        lEAdminconformPassowrd->setEchoMode(QLineEdit::Password);
        pBCreateAdmin = new QPushButton(CreateAdmin);
        pBCreateAdmin->setObjectName(QStringLiteral("pBCreateAdmin"));
        pBCreateAdmin->setGeometry(QRect(380, 170, 141, 61));
        pushButton_2 = new QPushButton(CreateAdmin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 252, 75, 31));

        retranslateUi(CreateAdmin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), CreateAdmin, SLOT(close()));

        QMetaObject::connectSlotsByName(CreateAdmin);
    } // setupUi

    void retranslateUi(QDialog *CreateAdmin)
    {
        CreateAdmin->setWindowTitle(QApplication::translate("CreateAdmin", "New Student Profile", 0));
        label->setText(QApplication::translate("CreateAdmin", "Student Name", 0));
        label_2->setText(QApplication::translate("CreateAdmin", "Admin UserName", 0));
        label_3->setText(QApplication::translate("CreateAdmin", "Admin Password", 0));
        label_4->setText(QApplication::translate("CreateAdmin", "Admin Con Password", 0));
        pBCreateAdmin->setText(QApplication::translate("CreateAdmin", "Create Account", 0));
        pushButton_2->setText(QApplication::translate("CreateAdmin", "Cancle", 0));
    } // retranslateUi

};

namespace Ui {
    class CreateAdmin: public Ui_CreateAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEADMIN_H
