/********************************************************************************
** Form generated from reading UI file 'student.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDENT_H
#define UI_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QFrame *line;
    QLCDNumber *lcdTime;
    QComboBox *cBSettings;
    QGroupBox *groupBox;
    QPushButton *pBHomeWork;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QStringLiteral("Student"));
        Student->resize(1060, 644);
        QFont font;
        font.setPointSize(12);
        Student->setFont(font);
        line = new QFrame(Student);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 40, 1061, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        lcdTime = new QLCDNumber(Student);
        lcdTime->setObjectName(QStringLiteral("lcdTime"));
        lcdTime->setGeometry(QRect(20, 12, 81, 31));
        cBSettings = new QComboBox(Student);
        cBSettings->setObjectName(QStringLiteral("cBSettings"));
        cBSettings->setGeometry(QRect(930, 10, 111, 31));
        cBSettings->setFont(font);
        groupBox = new QGroupBox(Student);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 80, 1011, 221));
        pBHomeWork = new QPushButton(groupBox);
        pBHomeWork->setObjectName(QStringLiteral("pBHomeWork"));
        pBHomeWork->setGeometry(QRect(40, 20, 171, 181));

        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "Student", 0));
        cBSettings->clear();
        cBSettings->insertItems(0, QStringList()
         << QApplication::translate("Student", "Settings", 0)
         << QApplication::translate("Student", "Administration", 0)
         << QApplication::translate("Student", "Shut down", 0)
        );
        groupBox->setTitle(QString());
        pBHomeWork->setText(QApplication::translate("Student", "Home Work", 0));
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
