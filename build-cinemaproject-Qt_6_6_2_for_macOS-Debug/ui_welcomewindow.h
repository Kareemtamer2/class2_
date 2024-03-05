/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_welcomewindow
{
public:
    QPushButton *logout_but;
    QLabel *hello_label;
    QLabel *user_welcome;
    QLabel *pic_label;

    void setupUi(QDialog *welcomewindow)
    {
        if (welcomewindow->objectName().isEmpty())
            welcomewindow->setObjectName("welcomewindow");
        welcomewindow->resize(551, 419);
        logout_but = new QPushButton(welcomewindow);
        logout_but->setObjectName("logout_but");
        logout_but->setGeometry(QRect(10, 360, 100, 32));
        hello_label = new QLabel(welcomewindow);
        hello_label->setObjectName("hello_label");
        hello_label->setGeometry(QRect(190, 0, 121, 41));
        user_welcome = new QLabel(welcomewindow);
        user_welcome->setObjectName("user_welcome");
        user_welcome->setGeometry(QRect(20, 60, 58, 16));
        pic_label = new QLabel(welcomewindow);
        pic_label->setObjectName("pic_label");
        pic_label->setGeometry(QRect(0, 90, 551, 241));

        retranslateUi(welcomewindow);

        QMetaObject::connectSlotsByName(welcomewindow);
    } // setupUi

    void retranslateUi(QDialog *welcomewindow)
    {
        welcomewindow->setWindowTitle(QCoreApplication::translate("welcomewindow", "Dialog", nullptr));
        logout_but->setText(QCoreApplication::translate("welcomewindow", "LOGOUT", nullptr));
        hello_label->setText(QCoreApplication::translate("welcomewindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700;\">HELLO</span></p></body></html>", nullptr));
        user_welcome->setText(QCoreApplication::translate("welcomewindow", "welcome", nullptr));
        pic_label->setText(QCoreApplication::translate("welcomewindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class welcomewindow: public Ui_welcomewindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
