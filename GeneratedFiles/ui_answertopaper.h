/********************************************************************************
** Form generated from reading UI file 'answertopaper.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANSWERTOPAPER_H
#define UI_ANSWERTOPAPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnswerToPaper
{
public:
    QPushButton *pBNext;
    QPushButton *pBClose;
    QLabel *lPageNo;
    QPushButton *pBPrivious;
    QGroupBox *gBHeader;
    QGroupBox *gBQuestions;
    QFrame *fQuestion1;
    QFrame *fQuestion2;
    QFrame *fQuestion3;
    QFrame *fQuestion4;
    QFrame *fQuestion5;

    void setupUi(QWidget *AnswerToPaper)
    {
        if (AnswerToPaper->objectName().isEmpty())
            AnswerToPaper->setObjectName(QStringLiteral("AnswerToPaper"));
        AnswerToPaper->resize(1113, 622);
        pBNext = new QPushButton(AnswerToPaper);
        pBNext->setObjectName(QStringLiteral("pBNext"));
        pBNext->setGeometry(QRect(580, 582, 75, 31));
        pBClose = new QPushButton(AnswerToPaper);
        pBClose->setObjectName(QStringLiteral("pBClose"));
        pBClose->setGeometry(QRect(974, 580, 131, 41));
        lPageNo = new QLabel(AnswerToPaper);
        lPageNo->setObjectName(QStringLiteral("lPageNo"));
        lPageNo->setGeometry(QRect(550, 590, 21, 16));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        lPageNo->setFont(font);
        pBPrivious = new QPushButton(AnswerToPaper);
        pBPrivious->setObjectName(QStringLiteral("pBPrivious"));
        pBPrivious->setGeometry(QRect(450, 582, 75, 31));
        gBHeader = new QGroupBox(AnswerToPaper);
        gBHeader->setObjectName(QStringLiteral("gBHeader"));
        gBHeader->setGeometry(QRect(0, 0, 1111, 81));
        QFont font1;
        font1.setPointSize(12);
        gBHeader->setFont(font1);
        gBQuestions = new QGroupBox(AnswerToPaper);
        gBQuestions->setObjectName(QStringLiteral("gBQuestions"));
        gBQuestions->setGeometry(QRect(0, 80, 1111, 501));
        QFont font2;
        font2.setPointSize(11);
        gBQuestions->setFont(font2);
        fQuestion1 = new QFrame(gBQuestions);
        fQuestion1->setObjectName(QStringLiteral("fQuestion1"));
        fQuestion1->setGeometry(QRect(0, 0, 1110, 100));
        fQuestion1->setFrameShape(QFrame::StyledPanel);
        fQuestion1->setFrameShadow(QFrame::Raised);
        fQuestion2 = new QFrame(gBQuestions);
        fQuestion2->setObjectName(QStringLiteral("fQuestion2"));
        fQuestion2->setGeometry(QRect(0, 100, 1110, 100));
        fQuestion2->setFrameShape(QFrame::StyledPanel);
        fQuestion2->setFrameShadow(QFrame::Raised);
        fQuestion3 = new QFrame(gBQuestions);
        fQuestion3->setObjectName(QStringLiteral("fQuestion3"));
        fQuestion3->setGeometry(QRect(0, 200, 1110, 100));
        fQuestion3->setFrameShape(QFrame::StyledPanel);
        fQuestion3->setFrameShadow(QFrame::Raised);
        fQuestion4 = new QFrame(gBQuestions);
        fQuestion4->setObjectName(QStringLiteral("fQuestion4"));
        fQuestion4->setGeometry(QRect(0, 300, 1110, 100));
        fQuestion4->setFrameShape(QFrame::StyledPanel);
        fQuestion4->setFrameShadow(QFrame::Raised);
        fQuestion5 = new QFrame(gBQuestions);
        fQuestion5->setObjectName(QStringLiteral("fQuestion5"));
        fQuestion5->setGeometry(QRect(0, 400, 1110, 100));
        fQuestion5->setFrameShape(QFrame::StyledPanel);
        fQuestion5->setFrameShadow(QFrame::Raised);

        retranslateUi(AnswerToPaper);

        QMetaObject::connectSlotsByName(AnswerToPaper);
    } // setupUi

    void retranslateUi(QWidget *AnswerToPaper)
    {
        AnswerToPaper->setWindowTitle(QApplication::translate("AnswerToPaper", "Answer To Paper", 0));
        pBNext->setText(QApplication::translate("AnswerToPaper", "Next", 0));
        pBClose->setText(QApplication::translate("AnswerToPaper", "Save All And Close", 0));
        lPageNo->setText(QApplication::translate("AnswerToPaper", "1", 0));
        pBPrivious->setText(QApplication::translate("AnswerToPaper", "Privious", 0));
        gBHeader->setTitle(QString());
        gBQuestions->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class AnswerToPaper: public Ui_AnswerToPaper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANSWERTOPAPER_H
