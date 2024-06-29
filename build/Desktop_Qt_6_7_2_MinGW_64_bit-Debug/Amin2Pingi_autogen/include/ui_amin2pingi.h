/********************************************************************************
** Form generated from reading UI file 'amin2pingi.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AMIN2PINGI_H
#define UI_AMIN2PINGI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Amin2pingi
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Amin2pingi)
    {
        if (Amin2pingi->objectName().isEmpty())
            Amin2pingi->setObjectName("Amin2pingi");
        Amin2pingi->resize(800, 600);
        centralwidget = new QWidget(Amin2pingi);
        centralwidget->setObjectName("centralwidget");
        Amin2pingi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Amin2pingi);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 25));
        Amin2pingi->setMenuBar(menubar);
        statusbar = new QStatusBar(Amin2pingi);
        statusbar->setObjectName("statusbar");
        Amin2pingi->setStatusBar(statusbar);

        retranslateUi(Amin2pingi);

        QMetaObject::connectSlotsByName(Amin2pingi);
    } // setupUi

    void retranslateUi(QMainWindow *Amin2pingi)
    {
        Amin2pingi->setWindowTitle(QCoreApplication::translate("Amin2pingi", "Amin2pingi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Amin2pingi: public Ui_Amin2pingi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AMIN2PINGI_H
