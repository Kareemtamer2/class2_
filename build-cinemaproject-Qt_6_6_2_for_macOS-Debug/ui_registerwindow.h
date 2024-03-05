/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_registerwindow
{
public:
    QLabel *user_label;
    QLabel *pass_label;
    QLabel *confirm_label;
    QLineEdit *user_line;
    QLineEdit *pass_line;
    QLineEdit *confirm_line;
    QLabel *date_label;
    QComboBox *month_box;
    QLineEdit *date_line;
    QLineEdit *year_line;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *gender_label;
    QGroupBox *gender_box;
    QRadioButton *male_but;
    QRadioButton *female_but;
    QLabel *type_label;
    QGroupBox *type_box;
    QRadioButton *user_but;
    QRadioButton *admin_but;
    QGroupBox *genre_box;
    QCheckBox *action_but;
    QCheckBox *comedy_but;
    QCheckBox *horror_but;
    QCheckBox *romance_but;
    QCheckBox *drama_but;
    QCheckBox *other_but;
    QLabel *fav_label;
    QPushButton *register_but2;

    void setupUi(QDialog *registerwindow)
    {
        if (registerwindow->objectName().isEmpty())
            registerwindow->setObjectName("registerwindow");
        registerwindow->resize(815, 688);
        user_label = new QLabel(registerwindow);
        user_label->setObjectName("user_label");
        user_label->setGeometry(QRect(50, 30, 101, 21));
        pass_label = new QLabel(registerwindow);
        pass_label->setObjectName("pass_label");
        pass_label->setGeometry(QRect(40, 80, 101, 31));
        confirm_label = new QLabel(registerwindow);
        confirm_label->setObjectName("confirm_label");
        confirm_label->setGeometry(QRect(10, 130, 131, 20));
        user_line = new QLineEdit(registerwindow);
        user_line->setObjectName("user_line");
        user_line->setGeometry(QRect(160, 30, 161, 31));
        pass_line = new QLineEdit(registerwindow);
        pass_line->setObjectName("pass_line");
        pass_line->setGeometry(QRect(150, 80, 161, 31));
        pass_line->setEchoMode(QLineEdit::Password);
        confirm_line = new QLineEdit(registerwindow);
        confirm_line->setObjectName("confirm_line");
        confirm_line->setGeometry(QRect(150, 120, 161, 31));
        confirm_line->setEchoMode(QLineEdit::Password);
        date_label = new QLabel(registerwindow);
        date_label->setObjectName("date_label");
        date_label->setGeometry(QRect(70, 200, 191, 21));
        month_box = new QComboBox(registerwindow);
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->addItem(QString());
        month_box->setObjectName("month_box");
        month_box->setGeometry(QRect(10, 250, 103, 32));
        date_line = new QLineEdit(registerwindow);
        date_line->setObjectName("date_line");
        date_line->setGeometry(QRect(120, 260, 113, 21));
        year_line = new QLineEdit(registerwindow);
        year_line->setObjectName("year_line");
        year_line->setGeometry(QRect(250, 260, 113, 21));
        label_5 = new QLabel(registerwindow);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(150, 230, 58, 16));
        label_6 = new QLabel(registerwindow);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(270, 230, 58, 16));
        gender_label = new QLabel(registerwindow);
        gender_label->setObjectName("gender_label");
        gender_label->setGeometry(QRect(40, 320, 81, 31));
        gender_box = new QGroupBox(registerwindow);
        gender_box->setObjectName("gender_box");
        gender_box->setGeometry(QRect(30, 360, 121, 91));
        male_but = new QRadioButton(gender_box);
        male_but->setObjectName("male_but");
        male_but->setGeometry(QRect(10, 30, 99, 20));
        female_but = new QRadioButton(gender_box);
        female_but->setObjectName("female_but");
        female_but->setGeometry(QRect(10, 60, 99, 20));
        type_label = new QLabel(registerwindow);
        type_label->setObjectName("type_label");
        type_label->setGeometry(QRect(200, 320, 141, 21));
        type_box = new QGroupBox(registerwindow);
        type_box->setObjectName("type_box");
        type_box->setGeometry(QRect(210, 360, 120, 80));
        user_but = new QRadioButton(type_box);
        user_but->setObjectName("user_but");
        user_but->setGeometry(QRect(0, 30, 99, 20));
        admin_but = new QRadioButton(type_box);
        admin_but->setObjectName("admin_but");
        admin_but->setGeometry(QRect(0, 60, 99, 20));
        genre_box = new QGroupBox(registerwindow);
        genre_box->setObjectName("genre_box");
        genre_box->setGeometry(QRect(390, 350, 251, 151));
        action_but = new QCheckBox(genre_box);
        action_but->setObjectName("action_but");
        action_but->setGeometry(QRect(0, 30, 85, 20));
        comedy_but = new QCheckBox(genre_box);
        comedy_but->setObjectName("comedy_but");
        comedy_but->setGeometry(QRect(0, 70, 85, 20));
        horror_but = new QCheckBox(genre_box);
        horror_but->setObjectName("horror_but");
        horror_but->setGeometry(QRect(0, 110, 85, 20));
        romance_but = new QCheckBox(genre_box);
        romance_but->setObjectName("romance_but");
        romance_but->setGeometry(QRect(130, 30, 85, 20));
        drama_but = new QCheckBox(genre_box);
        drama_but->setObjectName("drama_but");
        drama_but->setGeometry(QRect(130, 70, 85, 20));
        other_but = new QCheckBox(genre_box);
        other_but->setObjectName("other_but");
        other_but->setGeometry(QRect(130, 110, 85, 20));
        fav_label = new QLabel(registerwindow);
        fav_label->setObjectName("fav_label");
        fav_label->setGeometry(QRect(400, 310, 171, 31));
        register_but2 = new QPushButton(registerwindow);
        register_but2->setObjectName("register_but2");
        register_but2->setGeometry(QRect(30, 540, 171, 81));

        retranslateUi(registerwindow);

        QMetaObject::connectSlotsByName(registerwindow);
    } // setupUi

    void retranslateUi(QDialog *registerwindow)
    {
        registerwindow->setWindowTitle(QCoreApplication::translate("registerwindow", "Dialog", nullptr));
        user_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">USERNAME</span></p></body></html>", nullptr));
        pass_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">PASSWORD</span></p></body></html>", nullptr));
        confirm_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">CONFIRM PASS</span></p></body></html>", nullptr));
        date_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">DATE OF BIRTH</span></p></body></html>", nullptr));
        month_box->setItemText(0, QCoreApplication::translate("registerwindow", "MONTH", nullptr));
        month_box->setItemText(1, QCoreApplication::translate("registerwindow", "jan", nullptr));
        month_box->setItemText(2, QCoreApplication::translate("registerwindow", "feb", nullptr));
        month_box->setItemText(3, QCoreApplication::translate("registerwindow", "mar", nullptr));
        month_box->setItemText(4, QCoreApplication::translate("registerwindow", "april", nullptr));
        month_box->setItemText(5, QCoreApplication::translate("registerwindow", "may", nullptr));
        month_box->setItemText(6, QCoreApplication::translate("registerwindow", "june", nullptr));
        month_box->setItemText(7, QCoreApplication::translate("registerwindow", "july", nullptr));
        month_box->setItemText(8, QCoreApplication::translate("registerwindow", "august", nullptr));
        month_box->setItemText(9, QCoreApplication::translate("registerwindow", "sep", nullptr));
        month_box->setItemText(10, QCoreApplication::translate("registerwindow", "nov", nullptr));
        month_box->setItemText(11, QCoreApplication::translate("registerwindow", "dec", nullptr));

        label_5->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">DAY</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">YEAR</span></p></body></html>", nullptr));
        gender_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">GENDER</span></p></body></html>", nullptr));
        gender_box->setTitle(QCoreApplication::translate("registerwindow", "CHOOSE", nullptr));
        male_but->setText(QCoreApplication::translate("registerwindow", "MALE", nullptr));
        female_but->setText(QCoreApplication::translate("registerwindow", "FEMALE", nullptr));
        type_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">ACCOUNT TYPE</span></p></body></html>", nullptr));
        type_box->setTitle(QCoreApplication::translate("registerwindow", "TYPE", nullptr));
        user_but->setText(QCoreApplication::translate("registerwindow", "USER", nullptr));
        admin_but->setText(QCoreApplication::translate("registerwindow", "ADMIN", nullptr));
        genre_box->setTitle(QCoreApplication::translate("registerwindow", "GENRES", nullptr));
        action_but->setText(QCoreApplication::translate("registerwindow", "ACTION", nullptr));
        comedy_but->setText(QCoreApplication::translate("registerwindow", "COMEDY", nullptr));
        horror_but->setText(QCoreApplication::translate("registerwindow", "HORROR", nullptr));
        romance_but->setText(QCoreApplication::translate("registerwindow", "ROMANCE", nullptr));
        drama_but->setText(QCoreApplication::translate("registerwindow", "DRAMA", nullptr));
        other_but->setText(QCoreApplication::translate("registerwindow", "OTHER...", nullptr));
        fav_label->setText(QCoreApplication::translate("registerwindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:18pt; font-weight:700;\">FAVOURITE GENRES</span></p></body></html>", nullptr));
        register_but2->setText(QCoreApplication::translate("registerwindow", "REGISTER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registerwindow: public Ui_registerwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
