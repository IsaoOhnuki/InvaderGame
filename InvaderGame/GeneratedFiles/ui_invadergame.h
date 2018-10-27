/********************************************************************************
** Form generated from reading UI file 'invadergame.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INVADERGAME_H
#define UI_INVADERGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InvaderGameClass
{
public:
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *InvaderGameClass)
    {
        if (InvaderGameClass->objectName().isEmpty())
            InvaderGameClass->setObjectName(QStringLiteral("InvaderGameClass"));
        InvaderGameClass->resize(600, 400);
        centralWidget = new QWidget(InvaderGameClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        InvaderGameClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(InvaderGameClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        InvaderGameClass->setStatusBar(statusBar);

        retranslateUi(InvaderGameClass);

        QMetaObject::connectSlotsByName(InvaderGameClass);
    } // setupUi

    void retranslateUi(QMainWindow *InvaderGameClass)
    {
        InvaderGameClass->setWindowTitle(QApplication::translate("InvaderGameClass", "InvaderGame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InvaderGameClass: public Ui_InvaderGameClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INVADERGAME_H
