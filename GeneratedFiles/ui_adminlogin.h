/********************************************************************************
** Form generated from reading UI file 'adminlogin.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINLOGIN_H
#define UI_ADMINLOGIN_H

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

class Ui_AdminLogin
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *pBLogin;
    QPushButton *pushButton_2;
    QLineEdit *lEAdminUserName;
    QLineEdit *lEAdminPassword;

    void setupUi(QDialog *AdminLogin)
    {
        if (AdminLogin->objectName().isEmpty())
            AdminLogin->setObjectName(QStringLiteral("AdminLogin"));
        AdminLogin->resize(399, 244);
        QFont font;
        font.setPointSize(12);
        AdminLogin->setFont(font);
        label = new QLabel(AdminLogin);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 40, 141, 21));
        label->setFont(font);
        label_2 = new QLabel(AdminLogin);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 90, 131, 21));
        pBLogin = new QPushButton(AdminLogin);
        pBLogin->setObjectName(QStringLiteral("pBLogin"));
        pBLogin->setGeometry(QRect(100, 150, 141, 41));
        pushButton_2 = new QPushButton(AdminLogin);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(300, 192, 75, 31));
        lEAdminUserName = new QLineEdit(AdminLogin);
        lEAdminUserName->setObjectName(QStringLiteral("lEAdminUserName"));
        lEAdminUserName->setGeometry(QRect(170, 40, 151, 31));
        lEAdminPassword = new QLineEdit(AdminLogin);
        lEAdminPassword->setObjectName(QStringLiteral("lEAdminPassword"));
        lEAdminPassword->setGeometry(QRect(170, 90, 151, 31));
        lEAdminPassword->setEchoMode(QLineEdit::Password);

        retranslateUi(AdminLogin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), AdminLogin, SLOT(close()));

        QMetaObject::connectSlotsByName(AdminLogin);
    } // setupUi

    void retranslateUi(QDialog *AdminLogin)
    {
        AdminLogin->setWindowTitle(QApplication::translate("AdminLogin", "Admin Login", 0));
        label->setText(QApplication::translate("AdminLogin", "Admin User Name", 0));
        label_2->setText(QApplication::translate("AdminLogin", "Admin Password", 0));
        pBLogin->setText(QApplication::translate("AdminLogin", "Login", 0));
        pushButton_2->setText(QApplication::translate("AdminLogin", "Cancle", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminLogin: public Ui_AdminLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINLOGIN_H
