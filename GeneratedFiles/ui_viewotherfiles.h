/********************************************************************************
** Form generated from reading UI file 'viewotherfiles.ui'
**
** Created by: Qt User Interface Compiler version 5.1.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWOTHERFILES_H
#define UI_VIEWOTHERFILES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ViewOtherFiles
{
public:
    QListWidget *lWFileList;
    QPushButton *pBOpen;
    QPushButton *pBClose;
    QLabel *label;

    void setupUi(QDialog *ViewOtherFiles)
    {
        if (ViewOtherFiles->objectName().isEmpty())
            ViewOtherFiles->setObjectName(QStringLiteral("ViewOtherFiles"));
        ViewOtherFiles->resize(313, 553);
        lWFileList = new QListWidget(ViewOtherFiles);
        lWFileList->setObjectName(QStringLiteral("lWFileList"));
        lWFileList->setGeometry(QRect(20, 30, 271, 471));
        QFont font;
        font.setPointSize(12);
        lWFileList->setFont(font);
        pBOpen = new QPushButton(ViewOtherFiles);
        pBOpen->setObjectName(QStringLiteral("pBOpen"));
        pBOpen->setGeometry(QRect(20, 510, 171, 31));
        pBClose = new QPushButton(ViewOtherFiles);
        pBClose->setObjectName(QStringLiteral("pBClose"));
        pBClose->setGeometry(QRect(220, 510, 75, 31));
        label = new QLabel(ViewOtherFiles);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 0, 201, 21));
        label->setFont(font);

        retranslateUi(ViewOtherFiles);
        QObject::connect(pBClose, SIGNAL(clicked()), ViewOtherFiles, SLOT(close()));

        QMetaObject::connectSlotsByName(ViewOtherFiles);
    } // setupUi

    void retranslateUi(QDialog *ViewOtherFiles)
    {
        ViewOtherFiles->setWindowTitle(QApplication::translate("ViewOtherFiles", "Select Other File To view", 0));
        pBOpen->setText(QApplication::translate("ViewOtherFiles", "open", 0));
        pBClose->setText(QApplication::translate("ViewOtherFiles", "close", 0));
        label->setText(QApplication::translate("ViewOtherFiles", "Other Files", 0));
    } // retranslateUi

};

namespace Ui {
    class ViewOtherFiles: public Ui_ViewOtherFiles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWOTHERFILES_H
