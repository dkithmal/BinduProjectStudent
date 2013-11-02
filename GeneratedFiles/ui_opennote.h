/********************************************************************************
** Form generated from reading UI file 'opennote.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENNOTE_H
#define UI_OPENNOTE_H

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

class Ui_OpenNote
{
public:
    QListWidget *lWSelectHomeWork;
    QLabel *label_2;
    QLabel *label;
    QListWidget *lWSelectSubject;
    QPushButton *pBOpen;
    QPushButton *pBClose;

    void setupUi(QWidget *OpenNote)
    {
        if (OpenNote->objectName().isEmpty())
            OpenNote->setObjectName(QStringLiteral("OpenNote"));
        OpenNote->resize(499, 485);
        lWSelectHomeWork = new QListWidget(OpenNote);
        lWSelectHomeWork->setObjectName(QStringLiteral("lWSelectHomeWork"));
        lWSelectHomeWork->setGeometry(QRect(260, 40, 221, 331));
        QFont font;
        font.setPointSize(12);
        lWSelectHomeWork->setFont(font);
        label_2 = new QLabel(OpenNote);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 15, 101, 21));
        label_2->setFont(font);
        label = new QLabel(OpenNote);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 111, 31));
        label->setFont(font);
        lWSelectSubject = new QListWidget(OpenNote);
        lWSelectSubject->setObjectName(QStringLiteral("lWSelectSubject"));
        lWSelectSubject->setGeometry(QRect(10, 40, 221, 401));
        QFont font1;
        font1.setPointSize(15);
        lWSelectSubject->setFont(font1);
        pBOpen = new QPushButton(OpenNote);
        pBOpen->setObjectName(QStringLiteral("pBOpen"));
        pBOpen->setGeometry(QRect(300, 380, 161, 31));
        pBOpen->setFont(font);
        pBClose = new QPushButton(OpenNote);
        pBClose->setObjectName(QStringLiteral("pBClose"));
        pBClose->setGeometry(QRect(420, 420, 75, 31));
        pBClose->setFont(font);

        retranslateUi(OpenNote);

        QMetaObject::connectSlotsByName(OpenNote);
    } // setupUi

    void retranslateUi(QWidget *OpenNote)
    {
        OpenNote->setWindowTitle(QApplication::translate("OpenNote", "Form", 0));
        label_2->setText(QApplication::translate("OpenNote", "Select Note", 0));
        label->setText(QApplication::translate("OpenNote", "Select Subject", 0));
        pBOpen->setText(QApplication::translate("OpenNote", "Open Note", 0));
        pBClose->setText(QApplication::translate("OpenNote", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenNote: public Ui_OpenNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENNOTE_H
