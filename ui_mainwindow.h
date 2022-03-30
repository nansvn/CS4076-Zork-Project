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
#include <QtWidgets/QGridLayout>
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
    QPushButton *pushButton_walk;
    QLabel *label_2;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_south;
    QPushButton *pushButton_north;
    QPushButton *pushButton_west;
    QPushButton *pushButton_tele;
    QPushButton *pushButton_east;
    QPushButton *pushButton_map;
    QPushButton *pushButton_wordle;
    QMenuBar *menuBar;
    QMenu *menuGame;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 665);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 0, 331, 321));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {background-color:rgb(255,132,139,0); broder-radius:3px;color:rbg(0,0,0);}|"));
        pushButton_boss = new QPushButton(centralWidget);
        pushButton_boss->setObjectName(QString::fromUtf8("pushButton_boss"));
        pushButton_boss->setGeometry(QRect(750, 450, 231, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(400, 10, 581, 291));
        pushButton_walk = new QPushButton(centralWidget);
        pushButton_walk->setObjectName(QString::fromUtf8("pushButton_walk"));
        pushButton_walk->setGeometry(QRect(750, 330, 231, 51));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 350, 331, 251));
        label_2->setPixmap(QPixmap(QString::fromUtf8("Image/DH.jpg")));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(370, 360, 351, 211));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(7);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_south = new QPushButton(gridLayoutWidget);
        pushButton_south->setObjectName(QString::fromUtf8("pushButton_south"));

        gridLayout->addWidget(pushButton_south, 3, 1, 1, 1);

        pushButton_north = new QPushButton(gridLayoutWidget);
        pushButton_north->setObjectName(QString::fromUtf8("pushButton_north"));

        gridLayout->addWidget(pushButton_north, 0, 1, 1, 1);

        pushButton_west = new QPushButton(gridLayoutWidget);
        pushButton_west->setObjectName(QString::fromUtf8("pushButton_west"));

        gridLayout->addWidget(pushButton_west, 1, 0, 1, 1);

        pushButton_tele = new QPushButton(gridLayoutWidget);
        pushButton_tele->setObjectName(QString::fromUtf8("pushButton_tele"));

        gridLayout->addWidget(pushButton_tele, 1, 1, 1, 1);

        pushButton_east = new QPushButton(gridLayoutWidget);
        pushButton_east->setObjectName(QString::fromUtf8("pushButton_east"));

        gridLayout->addWidget(pushButton_east, 1, 2, 1, 1);

        pushButton_map = new QPushButton(centralWidget);
        pushButton_map->setObjectName(QString::fromUtf8("pushButton_map"));
        pushButton_map->setGeometry(QRect(750, 390, 231, 51));
        pushButton_wordle = new QPushButton(centralWidget);
        pushButton_wordle->setObjectName(QString::fromUtf8("pushButton_wordle"));
        pushButton_wordle->setGeometry(QRect(750, 520, 231, 61));
        MainWindow->setCentralWidget(centralWidget);
        textEdit->raise();
        pushButton_boss->raise();
        label->raise();
        label_2->raise();
        pushButton_walk->raise();
        gridLayoutWidget->raise();
        pushButton_map->raise();
        pushButton_wordle->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1054, 27));
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
        pushButton_walk->setText(QCoreApplication::translate("MainWindow", "Walk Around", nullptr));
        label_2->setText(QString());
        pushButton_south->setText(QCoreApplication::translate("MainWindow", "South", nullptr));
        pushButton_north->setText(QCoreApplication::translate("MainWindow", "North", nullptr));
        pushButton_west->setText(QCoreApplication::translate("MainWindow", "West", nullptr));
        pushButton_tele->setText(QCoreApplication::translate("MainWindow", "Teleport", nullptr));
        pushButton_east->setText(QCoreApplication::translate("MainWindow", "East", nullptr));
        pushButton_map->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        pushButton_wordle->setText(QCoreApplication::translate("MainWindow", "Wordle Challenge", nullptr));
        menuGame->setTitle(QCoreApplication::translate("MainWindow", "Game", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
