/********************************************************************************
** Form generated from reading UI file 'homeworktool.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEWORKTOOL_H
#define UI_HOMEWORKTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWorkTool
{
public:
    QPushButton *pBDoHomeWork;
    QPushButton *pBReadNote;
    QPushButton *pBOpenOtherFile;
    QPushButton *pushButton_4;

    void setupUi(QWidget *HomeWorkTool)
    {
        if (HomeWorkTool->objectName().isEmpty())
            HomeWorkTool->setObjectName(QStringLiteral("HomeWorkTool"));
        HomeWorkTool->resize(720, 271);
        QFont font;
        font.setPointSize(12);
        HomeWorkTool->setFont(font);
        pBDoHomeWork = new QPushButton(HomeWorkTool);
        pBDoHomeWork->setObjectName(QStringLiteral("pBDoHomeWork"));
        pBDoHomeWork->setGeometry(QRect(20, 20, 221, 201));
        pBReadNote = new QPushButton(HomeWorkTool);
        pBReadNote->setObjectName(QStringLiteral("pBReadNote"));
        pBReadNote->setGeometry(QRect(260, 20, 211, 201));
        pBOpenOtherFile = new QPushButton(HomeWorkTool);
        pBOpenOtherFile->setObjectName(QStringLiteral("pBOpenOtherFile"));
        pBOpenOtherFile->setGeometry(QRect(490, 20, 211, 201));
        pushButton_4 = new QPushButton(HomeWorkTool);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 230, 75, 31));

        retranslateUi(HomeWorkTool);

        QMetaObject::connectSlotsByName(HomeWorkTool);
    } // setupUi

    void retranslateUi(QWidget *HomeWorkTool)
    {
        HomeWorkTool->setWindowTitle(QApplication::translate("HomeWorkTool", "Form", 0));
        pBDoHomeWork->setText(QApplication::translate("HomeWorkTool", "To Do HomeWork", 0));
        pBReadNote->setText(QApplication::translate("HomeWorkTool", "To Read Note", 0));
        pBOpenOtherFile->setText(QApplication::translate("HomeWorkTool", "To Open Other files", 0));
        pushButton_4->setText(QApplication::translate("HomeWorkTool", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeWorkTool: public Ui_HomeWorkTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORKTOOL_H
