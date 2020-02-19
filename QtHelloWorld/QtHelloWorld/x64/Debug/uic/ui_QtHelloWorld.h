/********************************************************************************
** Form generated from reading UI file 'QtHelloWorld.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTHELLOWORLD_H
#define UI_QTHELLOWORLD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtHelloWorldClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QtHelloWorldClass)
    {
        if (QtHelloWorldClass->objectName().isEmpty())
            QtHelloWorldClass->setObjectName(QString::fromUtf8("QtHelloWorldClass"));
        QtHelloWorldClass->resize(600, 400);
        menuBar = new QMenuBar(QtHelloWorldClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        QtHelloWorldClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtHelloWorldClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtHelloWorldClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(QtHelloWorldClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        QtHelloWorldClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QtHelloWorldClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtHelloWorldClass->setStatusBar(statusBar);

        retranslateUi(QtHelloWorldClass);

        QMetaObject::connectSlotsByName(QtHelloWorldClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtHelloWorldClass)
    {
        QtHelloWorldClass->setWindowTitle(QApplication::translate("QtHelloWorldClass", "QtHelloWorld", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtHelloWorldClass: public Ui_QtHelloWorldClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTHELLOWORLD_H
