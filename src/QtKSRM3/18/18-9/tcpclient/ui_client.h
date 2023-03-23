/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Client
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *clientStatusLabel;
    QProgressBar *clientProgressBar;
    QLineEdit *hostLineEdit;
    QLineEdit *portLineEdit;
    QPushButton *openButton;
    QPushButton *sendButton;

    void setupUi(QDialog *Client)
    {
        if (Client->objectName().isEmpty())
            Client->setObjectName(QString::fromUtf8("Client"));
        Client->resize(400, 300);
        label = new QLabel(Client);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 54, 12));
        label_2 = new QLabel(Client);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(60, 100, 54, 12));
        clientStatusLabel = new QLabel(Client);
        clientStatusLabel->setObjectName(QString::fromUtf8("clientStatusLabel"));
        clientStatusLabel->setGeometry(QRect(70, 175, 271, 51));
        clientProgressBar = new QProgressBar(Client);
        clientProgressBar->setObjectName(QString::fromUtf8("clientProgressBar"));
        clientProgressBar->setGeometry(QRect(60, 140, 291, 23));
        clientProgressBar->setValue(0);
        hostLineEdit = new QLineEdit(Client);
        hostLineEdit->setObjectName(QString::fromUtf8("hostLineEdit"));
        hostLineEdit->setGeometry(QRect(130, 45, 181, 20));
        portLineEdit = new QLineEdit(Client);
        portLineEdit->setObjectName(QString::fromUtf8("portLineEdit"));
        portLineEdit->setGeometry(QRect(130, 95, 181, 20));
        openButton = new QPushButton(Client);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(70, 240, 75, 23));
        sendButton = new QPushButton(Client);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(240, 240, 75, 23));

        retranslateUi(Client);

        QMetaObject::connectSlotsByName(Client);
    } // setupUi

    void retranslateUi(QDialog *Client)
    {
        Client->setWindowTitle(QApplication::translate("Client", "Client", nullptr));
        label->setText(QApplication::translate("Client", "\344\270\273\346\234\272\357\274\232", nullptr));
        label_2->setText(QApplication::translate("Client", "\347\253\257\345\217\243\357\274\232", nullptr));
        clientStatusLabel->setText(QApplication::translate("Client", "\347\212\266\346\200\201\357\274\232\347\255\211\345\276\205\346\211\223\345\274\200\346\226\207\344\273\266\357\274\201", nullptr));
        openButton->setText(QApplication::translate("Client", "\346\211\223  \345\274\200", nullptr));
        sendButton->setText(QApplication::translate("Client", "\345\217\221  \351\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Client: public Ui_Client {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
