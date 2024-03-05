/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loginwindow
{
public:
    QWidget *centralwidget;
    QLabel *name_label;
    QLabel *pass_label;
    QLineEdit *name_line;
    QLineEdit *pass_line;
    QPushButton *register_but;
    QPushButton *login_but;
    QLabel *error_label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *loginwindow)
    {
        if (loginwindow->objectName().isEmpty())
            loginwindow->setObjectName("loginwindow");
        loginwindow->resize(800, 600);
        centralwidget = new QWidget(loginwindow);
        centralwidget->setObjectName("centralwidget");
        name_label = new QLabel(centralwidget);
        name_label->setObjectName("name_label");
        name_label->setGeometry(QRect(210, 275, 71, 21));
        pass_label = new QLabel(centralwidget);
        pass_label->setObjectName("pass_label");
        pass_label->setGeometry(QRect(170, 340, 101, 20));
        name_line = new QLineEdit(centralwidget);
        name_line->setObjectName("name_line");
        name_line->setGeometry(QRect(290, 270, 211, 31));
        pass_line = new QLineEdit(centralwidget);
        pass_line->setObjectName("pass_line");
        pass_line->setGeometry(QRect(290, 330, 211, 31));
        pass_line->setEchoMode(QLineEdit::Password);
        register_but = new QPushButton(centralwidget);
        register_but->setObjectName("register_but");
        register_but->setGeometry(QRect(190, 400, 100, 32));
        login_but = new QPushButton(centralwidget);
        login_but->setObjectName("login_but");
        login_but->setGeometry(QRect(440, 400, 100, 32));
        error_label = new QLabel(centralwidget);
        error_label->setObjectName("error_label");
        error_label->setGeometry(QRect(120, 130, 501, 141));
        loginwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(loginwindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        loginwindow->setMenuBar(menubar);
        statusbar = new QStatusBar(loginwindow);
        statusbar->setObjectName("statusbar");
        loginwindow->setStatusBar(statusbar);

        retranslateUi(loginwindow);

        QMetaObject::connectSlotsByName(loginwindow);
    } // setupUi

    void retranslateUi(QMainWindow *loginwindow)
    {
        loginwindow->setWindowTitle(QCoreApplication::translate("loginwindow", "loginwindow", nullptr));
        name_label->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#bdc6c4;\">NAME</span></p></body></html>", nullptr));
        pass_label->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700; color:#bababa;\">PASSWORD</span></p></body></html>", nullptr));
        register_but->setText(QCoreApplication::translate("loginwindow", "REGISTER", nullptr));
        login_but->setText(QCoreApplication::translate("loginwindow", "LOGIN", nullptr));
        error_label->setText(QCoreApplication::translate("loginwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:24pt; font-weight:700; color:#ec383c;\">*ERROR, WRONG USER OR PASS*</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginwindow: public Ui_loginwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
