/********************************************************************************
** Form generated from reading UI file 'viewnote.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWNOTE_H
#define UI_VIEWNOTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ViewNote
{
public:
    QTextEdit *tENote;
    QPushButton *pushButton;

    void setupUi(QWidget *ViewNote)
    {
        if (ViewNote->objectName().isEmpty())
            ViewNote->setObjectName(QStringLiteral("ViewNote"));
        ViewNote->resize(778, 560);
        tENote = new QTextEdit(ViewNote);
        tENote->setObjectName(QStringLiteral("tENote"));
        tENote->setGeometry(QRect(0, 0, 781, 521));
        QFont font;
        font.setPointSize(12);
        tENote->setFont(font);
        pushButton = new QPushButton(ViewNote);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(700, 520, 75, 31));

        retranslateUi(ViewNote);
        QObject::connect(pushButton, SIGNAL(clicked()), ViewNote, SLOT(close()));

        QMetaObject::connectSlotsByName(ViewNote);
    } // setupUi

    void retranslateUi(QWidget *ViewNote)
    {
        ViewNote->setWindowTitle(QApplication::translate("ViewNote", "Vew Note", 0));
        pushButton->setText(QApplication::translate("ViewNote", "Close", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewNote: public Ui_ViewNote {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWNOTE_H
