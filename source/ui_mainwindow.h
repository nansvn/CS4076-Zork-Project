/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton_boss;
    QLabel *label;
    QPushButton *pushButton_map;
    QPushButton *pushButton_wordle;
    QPushButton *pushButton_tele;
    QPushButton *pushButton_north;
    QPushButton *pushButton_west;
    QPushButton *pushButton_east;
    QPushButton *pushButton_south;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1009, 658);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 0, 311, 381));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {background-color:rgb(255,132,139,0); broder-radius:3px;color:rbg(0,0,0);}|"));
        pushButton_boss = new QPushButton(centralWidget);
        pushButton_boss->setObjectName(QString::fromUtf8("pushButton_boss"));
        pushButton_boss->setGeometry(QRect(710, 420, 231, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 0, 641, 381));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Background/Image/1.jpg")));
        pushButton_map = new QPushButton(centralWidget);
        pushButton_map->setObjectName(QString::fromUtf8("pushButton_map"));
        pushButton_map->setGeometry(QRect(20, 440, 231, 51));
        pushButton_wordle = new QPushButton(centralWidget);
        pushButton_wordle->setObjectName(QString::fromUtf8("pushButton_wordle"));
        pushButton_wordle->setGeometry(QRect(710, 490, 231, 61));
        pushButton_tele = new QPushButton(centralWidget);
        pushButton_tele->setObjectName(QString::fromUtf8("pushButton_tele"));
        pushButton_tele->setGeometry(QRect(20, 500, 231, 61));
        pushButton_north = new QPushButton(centralWidget);
        pushButton_north->setObjectName(QString::fromUtf8("pushButton_north"));
        pushButton_north->setGeometry(QRect(440, 400, 111, 61));
        pushButton_west = new QPushButton(centralWidget);
        pushButton_west->setObjectName(QString::fromUtf8("pushButton_west"));
        pushButton_west->setGeometry(QRect(330, 460, 111, 61));
        pushButton_east = new QPushButton(centralWidget);
        pushButton_east->setObjectName(QString::fromUtf8("pushButton_east"));
        pushButton_east->setGeometry(QRect(550, 460, 111, 61));
        pushButton_south = new QPushButton(centralWidget);
        pushButton_south->setObjectName(QString::fromUtf8("pushButton_south"));
        pushButton_south->setGeometry(QRect(440, 520, 111, 61));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1009, 27));
        menuGame = new QMenu(menuBar);
        menuGame->setObjectName(QString::fromUtf8("menuGame"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuGame->menuAction());
        menuGame->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_boss->setText(QCoreApplication::translate("MainWindow", "Boss Challenge", nullptr));
        label->setText(QString());
        pushButton_map->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        pushButton_wordle->setText(QCoreApplication::translate("MainWindow", "Wordle Challenge", nullptr));
        pushButton_tele->setText(QCoreApplication::translate("MainWindow", "Teleport", nullptr));
        pushButton_north->setText(QCoreApplication::translate("MainWindow", "North", nullptr));
        pushButton_west->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        pushButton_east->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
        pushButton_south->setText(QCoreApplication::translate("MainWindow", "South", nullptr));
        menuGame->setTitle(QCoreApplication::translate("MainWindow", "Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
