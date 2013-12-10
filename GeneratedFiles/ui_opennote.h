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
    QListWidget *lWSelectNote;
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
        lWSelectNote = new QListWidget(OpenNote);
        lWSelectNote->setObjectName(QStringLiteral("lWSelectNote"));
        lWSelectNote->setGeometry(QRect(260, 40, 221, 331));
        QFont font;
        font.setPointSize(15);
        lWSelectNote->setFont(font);
        label_2 = new QLabel(OpenNote);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 15, 101, 21));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        label = new QLabel(OpenNote);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 10, 111, 31));
        label->setFont(font1);
        lWSelectSubject = new QListWidget(OpenNote);
        lWSelectSubject->setObjectName(QStringLiteral("lWSelectSubject"));
        lWSelectSubject->setGeometry(QRect(10, 40, 221, 401));
        lWSelectSubject->setFont(font);
        pBOpen = new QPushButton(OpenNote);
        pBOpen->setObjectName(QStringLiteral("pBOpen"));
        pBOpen->setGeometry(QRect(260, 380, 221, 41));
        pBOpen->setFont(font1);
        pBClose = new QPushButton(OpenNote);
        pBClose->setObjectName(QStringLiteral("pBClose"));
        pBClose->setGeometry(QRect(400, 440, 75, 31));
        pBClose->setFont(font1);

        retranslateUi(OpenNote);
        QObject::connect(pBClose, SIGNAL(clicked()), OpenNote, SLOT(close()));

        QMetaObject::connectSlotsByName(OpenNote);
    } // setupUi

    void retranslateUi(QWidget *OpenNote)
    {
        OpenNote->setWindowTitle(QApplication::translate("OpenNote", "Select Note To Open", 0));
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
