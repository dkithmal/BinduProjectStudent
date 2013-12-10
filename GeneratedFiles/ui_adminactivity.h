/********************************************************************************
** Form generated from reading UI file 'adminactivity.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINACTIVITY_H
#define UI_ADMINACTIVITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminActivity
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLineEdit *lEStudentName;
    QPushButton *pushButton;
    QPushButton *pBUpdateStudent;
    QWidget *tab_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lEAdminUserName;
    QLineEdit *lEAdminNewPassword;
    QLineEdit *lEAdminConPassword;
    QPushButton *pBUpdateAdmin;
    QPushButton *pushButton_4;

    void setupUi(QDialog *AdminActivity)
    {
        if (AdminActivity->objectName().isEmpty())
            AdminActivity->setObjectName(QStringLiteral("AdminActivity"));
        AdminActivity->resize(501, 242);
        tabWidget = new QTabWidget(AdminActivity);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 501, 251));
        QFont font;
        font.setPointSize(12);
        tabWidget->setFont(font);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 141, 21));
        lEStudentName = new QLineEdit(tab);
        lEStudentName->setObjectName(QStringLiteral("lEStudentName"));
        lEStudentName->setGeometry(QRect(180, 50, 181, 31));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(400, 162, 75, 31));
        pBUpdateStudent = new QPushButton(tab);
        pBUpdateStudent->setObjectName(QStringLiteral("pBUpdateStudent"));
        pBUpdateStudent->setGeometry(QRect(100, 130, 191, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 20, 141, 31));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 60, 121, 31));
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 100, 171, 31));
        lEAdminUserName = new QLineEdit(tab_2);
        lEAdminUserName->setObjectName(QStringLiteral("lEAdminUserName"));
        lEAdminUserName->setGeometry(QRect(230, 20, 171, 31));
        lEAdminNewPassword = new QLineEdit(tab_2);
        lEAdminNewPassword->setObjectName(QStringLiteral("lEAdminNewPassword"));
        lEAdminNewPassword->setGeometry(QRect(230, 60, 171, 31));
        lEAdminNewPassword->setEchoMode(QLineEdit::Password);
        lEAdminConPassword = new QLineEdit(tab_2);
        lEAdminConPassword->setObjectName(QStringLiteral("lEAdminConPassword"));
        lEAdminConPassword->setGeometry(QRect(230, 100, 171, 31));
        lEAdminConPassword->setEchoMode(QLineEdit::Password);
        pBUpdateAdmin = new QPushButton(tab_2);
        pBUpdateAdmin->setObjectName(QStringLiteral("pBUpdateAdmin"));
        pBUpdateAdmin->setGeometry(QRect(124, 162, 141, 31));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 170, 75, 31));
        tabWidget->addTab(tab_2, QString());

        retranslateUi(AdminActivity);
        QObject::connect(pushButton, SIGNAL(clicked()), AdminActivity, SLOT(close()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), AdminActivity, SLOT(close()));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(AdminActivity);
    } // setupUi

    void retranslateUi(QDialog *AdminActivity)
    {
        AdminActivity->setWindowTitle(QApplication::translate("AdminActivity", "Chnage Student Name And Admin", 0));
        label->setText(QApplication::translate("AdminActivity", "New Student Name", 0));
        pushButton->setText(QApplication::translate("AdminActivity", "Cancle", 0));
        pBUpdateStudent->setText(QApplication::translate("AdminActivity", "Update Student Name", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminActivity", "Change Student Name", 0));
        label_2->setText(QApplication::translate("AdminActivity", "Admin UserName", 0));
        label_3->setText(QApplication::translate("AdminActivity", "New Password", 0));
        label_4->setText(QApplication::translate("AdminActivity", "Confirm New Password", 0));
        pBUpdateAdmin->setText(QApplication::translate("AdminActivity", "Update Account", 0));
        pushButton_4->setText(QApplication::translate("AdminActivity", "Cancle", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminActivity", "Admin Edit", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminActivity: public Ui_AdminActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINACTIVITY_H
