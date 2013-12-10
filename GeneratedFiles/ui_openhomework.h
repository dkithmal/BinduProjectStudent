/********************************************************************************
** Form generated from reading UI file 'openhomework.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENHOMEWORK_H
#define UI_OPENHOMEWORK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenHomeWork
{
public:
    QPushButton *pBClose;
    QPushButton *pBOpen;
    QLabel *label;
    QLabel *label_2;
    QListWidget *lWSelectSubject;
    QListWidget *lWSelectHomeWork;

    void setupUi(QWidget *OpenHomeWork)
    {
        if (OpenHomeWork->objectName().isEmpty())
            OpenHomeWork->setObjectName(QStringLiteral("OpenHomeWork"));
        OpenHomeWork->resize(502, 459);
        QFont font;
        font.setPointSize(12);
        OpenHomeWork->setFont(font);
        pBClose = new QPushButton(OpenHomeWork);
        pBClose->setObjectName(QStringLiteral("pBClose"));
        pBClose->setGeometry(QRect(420, 420, 75, 31));
        pBOpen = new QPushButton(OpenHomeWork);
        pBOpen->setObjectName(QStringLiteral("pBOpen"));
        pBOpen->setGeometry(QRect(260, 370, 221, 41));
        label = new QLabel(OpenHomeWork);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 111, 31));
        label_2 = new QLabel(OpenHomeWork);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 5, 101, 21));
        lWSelectSubject = new QListWidget(OpenHomeWork);
        lWSelectSubject->setObjectName(QStringLiteral("lWSelectSubject"));
        lWSelectSubject->setGeometry(QRect(10, 30, 221, 401));
        QFont font1;
        font1.setPointSize(15);
        lWSelectSubject->setFont(font1);
        lWSelectHomeWork = new QListWidget(OpenHomeWork);
        lWSelectHomeWork->setObjectName(QStringLiteral("lWSelectHomeWork"));
        lWSelectHomeWork->setGeometry(QRect(260, 30, 221, 331));
        lWSelectHomeWork->setFont(font1);

        retranslateUi(OpenHomeWork);
        QObject::connect(pBClose, SIGNAL(clicked()), OpenHomeWork, SLOT(close()));

        QMetaObject::connectSlotsByName(OpenHomeWork);
    } // setupUi

    void retranslateUi(QWidget *OpenHomeWork)
    {
        OpenHomeWork->setWindowTitle(QApplication::translate("OpenHomeWork", "Select Home Work to Open", 0));
        pBClose->setText(QApplication::translate("OpenHomeWork", "Close", 0));
        pBOpen->setText(QApplication::translate("OpenHomeWork", "Do HomeWork", 0));
        label->setText(QApplication::translate("OpenHomeWork", "Select Subject", 0));
        label_2->setText(QApplication::translate("OpenHomeWork", "Select Paper", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenHomeWork: public Ui_OpenHomeWork {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENHOMEWORK_H
