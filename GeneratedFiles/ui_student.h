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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Student
{
public:
    QGridLayout *gridLayout_6;
    QWidget *wMainWidget;
    QGridLayout *gridLayout_4;
    QWidget *wHeader;
    QGridLayout *gridLayout_5;
    QSpacerItem *horizontalSpacer_4;
    QLabel *lStudentName;
    QLabel *label;
    QLabel *lClock;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pBSettings;
    QSpacerItem *horizontalSpacer_5;
    QWidget *wDropDownMenu;
    QGridLayout *gridLayout;
    QListWidget *lWSettings;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pBHomeWork;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Student)
    {
        if (Student->objectName().isEmpty())
            Student->setObjectName(QStringLiteral("Student"));
        Student->resize(1201, 644);
        QFont font;
        font.setPointSize(12);
        Student->setFont(font);
        gridLayout_6 = new QGridLayout(Student);
        gridLayout_6->setSpacing(0);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        wMainWidget = new QWidget(Student);
        wMainWidget->setObjectName(QStringLiteral("wMainWidget"));
        gridLayout_4 = new QGridLayout(wMainWidget);
        gridLayout_4->setSpacing(0);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        wHeader = new QWidget(wMainWidget);
        wHeader->setObjectName(QStringLiteral("wHeader"));
        wHeader->setMinimumSize(QSize(1200, 40));
        wHeader->setMaximumSize(QSize(16777215, 40));
        wHeader->setFont(font);
        gridLayout_5 = new QGridLayout(wHeader);
        gridLayout_5->setSpacing(0);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        lStudentName = new QLabel(wHeader);
        lStudentName->setObjectName(QStringLiteral("lStudentName"));
        lStudentName->setMinimumSize(QSize(150, 40));
        QFont font1;
        font1.setPointSize(15);
        font1.setBold(true);
        font1.setWeight(75);
        lStudentName->setFont(font1);

        gridLayout_5->addWidget(lStudentName, 0, 5, 1, 1);

        label = new QLabel(wHeader);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(15);
        label->setFont(font2);

        gridLayout_5->addWidget(label, 0, 3, 1, 1);

        lClock = new QLabel(wHeader);
        lClock->setObjectName(QStringLiteral("lClock"));
        lClock->setMinimumSize(QSize(80, 40));
        lClock->setMaximumSize(QSize(80, 40));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        lClock->setFont(font3);

        gridLayout_5->addWidget(lClock, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer, 0, 6, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_8, 0, 0, 1, 1);

        pBSettings = new QPushButton(wHeader);
        pBSettings->setObjectName(QStringLiteral("pBSettings"));
        pBSettings->setMinimumSize(QSize(40, 40));

        gridLayout_5->addWidget(pBSettings, 0, 7, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(10, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_5, 0, 4, 1, 1);


        gridLayout_4->addWidget(wHeader, 0, 0, 1, 1);


        gridLayout_6->addWidget(wMainWidget, 0, 0, 1, 1);

        wDropDownMenu = new QWidget(Student);
        wDropDownMenu->setObjectName(QStringLiteral("wDropDownMenu"));
        wDropDownMenu->setMinimumSize(QSize(0, 100));
        wDropDownMenu->setMaximumSize(QSize(16777215, 100));
        gridLayout = new QGridLayout(wDropDownMenu);
        gridLayout->setSpacing(0);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lWSettings = new QListWidget(wDropDownMenu);
        lWSettings->setObjectName(QStringLiteral("lWSettings"));
        lWSettings->setMinimumSize(QSize(150, 100));
        lWSettings->setMaximumSize(QSize(150, 100));
        lWSettings->setFont(font2);

        gridLayout->addWidget(lWSettings, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_6->addWidget(wDropDownMenu, 1, 0, 1, 1);

        widget = new QWidget(Student);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 1, 1, 1);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(1150, 250));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pBHomeWork = new QPushButton(groupBox);
        pBHomeWork->setObjectName(QStringLiteral("pBHomeWork"));
        pBHomeWork->setMinimumSize(QSize(180, 200));

        gridLayout_3->addWidget(pBHomeWork, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_6, 0, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_9, 0, 2, 1, 1);


        gridLayout_6->addWidget(widget, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 187, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_6->addItem(verticalSpacer_3, 3, 0, 1, 1);


        retranslateUi(Student);

        QMetaObject::connectSlotsByName(Student);
    } // setupUi

    void retranslateUi(QWidget *Student)
    {
        Student->setWindowTitle(QApplication::translate("Student", "Student", 0));
        lStudentName->setText(QString());
        label->setText(QApplication::translate("Student", "Student Name :", 0));
        lClock->setText(QApplication::translate("Student", "12:30", 0));
        pBSettings->setText(QString());
        groupBox->setTitle(QString());
        pBHomeWork->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Student: public Ui_Student {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDENT_H
