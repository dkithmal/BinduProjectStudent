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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HomeWorkTool
{
public:
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pBDoHomeWork;
    QPushButton *pBOpenOtherFile;
    QPushButton *pBReadNote;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *HomeWorkTool)
    {
        if (HomeWorkTool->objectName().isEmpty())
            HomeWorkTool->setObjectName(QStringLiteral("HomeWorkTool"));
        HomeWorkTool->resize(720, 271);
        QFont font;
        font.setPointSize(12);
        HomeWorkTool->setFont(font);
        pushButton_4 = new QPushButton(HomeWorkTool);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(620, 230, 75, 31));
        layoutWidget = new QWidget(HomeWorkTool);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 671, 202));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        pBDoHomeWork = new QPushButton(layoutWidget);
        pBDoHomeWork->setObjectName(QStringLiteral("pBDoHomeWork"));
        pBDoHomeWork->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(pBDoHomeWork, 0, 1, 1, 1);

        pBOpenOtherFile = new QPushButton(layoutWidget);
        pBOpenOtherFile->setObjectName(QStringLiteral("pBOpenOtherFile"));
        pBOpenOtherFile->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(pBOpenOtherFile, 0, 5, 1, 1);

        pBReadNote = new QPushButton(layoutWidget);
        pBReadNote->setObjectName(QStringLiteral("pBReadNote"));
        pBReadNote->setMinimumSize(QSize(200, 200));

        gridLayout->addWidget(pBReadNote, 0, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 0, 6, 1, 1);


        retranslateUi(HomeWorkTool);
        QObject::connect(pushButton_4, SIGNAL(clicked()), HomeWorkTool, SLOT(close()));

        QMetaObject::connectSlotsByName(HomeWorkTool);
    } // setupUi

    void retranslateUi(QWidget *HomeWorkTool)
    {
        HomeWorkTool->setWindowTitle(QApplication::translate("HomeWorkTool", "Home Work Tool", 0));
        pushButton_4->setText(QApplication::translate("HomeWorkTool", "Close", 0));
        pBDoHomeWork->setText(QApplication::translate("HomeWorkTool", "To Do HomeWork", 0));
        pBOpenOtherFile->setText(QApplication::translate("HomeWorkTool", "To Open Other files", 0));
        pBReadNote->setText(QApplication::translate("HomeWorkTool", "To Read Note", 0));
    } // retranslateUi

};

namespace Ui {
    class HomeWorkTool: public Ui_HomeWorkTool {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEWORKTOOL_H
