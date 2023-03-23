/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *connectButton;
    QTreeWidget *fileList;
    QProgressBar *progressBar;
    QPushButton *cdToParentButton;
    QPushButton *downloadButton;
    QLineEdit *ftpServerLineEdit;
    QLineEdit *userNameLineEdit;
    QLineEdit *passWordLineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(585, 421);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 335, 401, 41));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(13, 10, 71, 20));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(13, 40, 71, 20));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(270, 40, 54, 20));
        connectButton = new QPushButton(centralWidget);
        connectButton->setObjectName(QString::fromUtf8("connectButton"));
        connectButton->setGeometry(QRect(500, 38, 75, 23));
        fileList = new QTreeWidget(centralWidget);
        fileList->setObjectName(QString::fromUtf8("fileList"));
        fileList->setGeometry(QRect(10, 80, 561, 211));
        fileList->setAnimated(false);
        fileList->header()->setCascadingSectionResizes(false);
        fileList->header()->setMinimumSectionSize(25);
        fileList->header()->setDefaultSectionSize(90);
        fileList->header()->setHighlightSections(false);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(20, 310, 401, 23));
        progressBar->setValue(24);
        cdToParentButton = new QPushButton(centralWidget);
        cdToParentButton->setObjectName(QString::fromUtf8("cdToParentButton"));
        cdToParentButton->setGeometry(QRect(464, 310, 81, 23));
        downloadButton = new QPushButton(centralWidget);
        downloadButton->setObjectName(QString::fromUtf8("downloadButton"));
        downloadButton->setGeometry(QRect(470, 340, 75, 23));
        ftpServerLineEdit = new QLineEdit(centralWidget);
        ftpServerLineEdit->setObjectName(QString::fromUtf8("ftpServerLineEdit"));
        ftpServerLineEdit->setGeometry(QRect(90, 10, 461, 20));
        userNameLineEdit = new QLineEdit(centralWidget);
        userNameLineEdit->setObjectName(QString::fromUtf8("userNameLineEdit"));
        userNameLineEdit->setGeometry(QRect(90, 38, 131, 20));
        passWordLineEdit = new QLineEdit(centralWidget);
        passWordLineEdit->setObjectName(QString::fromUtf8("passWordLineEdit"));
        passWordLineEdit->setGeometry(QRect(320, 38, 151, 20));
        passWordLineEdit->setEchoMode(QLineEdit::Password);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 585, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "FTP\345\256\242\346\210\267\347\253\257", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "FTP\346\234\215\345\212\241\345\231\250\357\274\232", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        connectButton->setText(QApplication::translate("MainWindow", "\350\277\236  \346\216\245", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = fileList->headerItem();
        ___qtreewidgetitem->setText(4, QApplication::translate("MainWindow", "\344\277\256\346\224\271\346\227\245\346\234\237", nullptr));
        ___qtreewidgetitem->setText(3, QApplication::translate("MainWindow", "\346\211\200\345\261\236\347\273\204", nullptr));
        ___qtreewidgetitem->setText(2, QApplication::translate("MainWindow", "\346\213\245\346\234\211\350\200\205", nullptr));
        ___qtreewidgetitem->setText(1, QApplication::translate("MainWindow", "\345\244\247\345\260\217", nullptr));
        ___qtreewidgetitem->setText(0, QApplication::translate("MainWindow", "\346\226\207\344\273\266", nullptr));
        cdToParentButton->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236\344\270\212\347\272\247\347\233\256\345\275\225", nullptr));
        downloadButton->setText(QApplication::translate("MainWindow", "\344\270\213  \350\275\275", nullptr));
        ftpServerLineEdit->setText(QApplication::translate("MainWindow", "v0.ftp.upyun.com", nullptr));
        ftpServerLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\346\234\215\345\212\241\345\231\250\345\234\260\345\235\200", nullptr));
#ifndef QT_NO_TOOLTIP
        userNameLineEdit->setToolTip(QApplication::translate("MainWindow", "\351\273\230\350\256\244\347\224\250\346\210\267\345\220\215\350\257\267\344\275\277\347\224\250\357\274\232anonymous \357\274\214\346\255\244\346\227\266\345\257\206\347\240\201\344\273\273\346\204\217", nullptr));
#endif // QT_NO_TOOLTIP
        userNameLineEdit->setText(QApplication::translate("MainWindow", "qtertest/qtftptest0", nullptr));
        userNameLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", nullptr));
        passWordLineEdit->setText(QApplication::translate("MainWindow", "pjD0lUUv6femyodL8a1wrJBcZYaoDG4t", nullptr));
        passWordLineEdit->setPlaceholderText(QApplication::translate("MainWindow", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
