/********************************************************************************
** Form generated from reading UI file 'bossmode.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOSSMODE_H
#define UI_BOSSMODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BossMode
{
public:
    QTextEdit *textEdit;
    QProgressBar *progressBar_BossHealth;
    QProgressBar *progressBar_PlayerHealth;
    QProgressBar *progressBar_PlayerStamina;
    QPushButton *AttackButton;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QWidget *BossMode)
    {
        if (BossMode->objectName().isEmpty())
            BossMode->setObjectName(QString::fromUtf8("BossMode"));
        BossMode->resize(651, 706);
        textEdit = new QTextEdit(BossMode);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(10, 330, 621, 251));
        textEdit->setStyleSheet(QString::fromUtf8("QTextEdit {background-color:rgb(255,132,139,0); broder-radius:3px;color:rbg(0,0,0);}|"));
        progressBar_BossHealth = new QProgressBar(BossMode);
        progressBar_BossHealth->setObjectName(QString::fromUtf8("progressBar_BossHealth"));
        progressBar_BossHealth->setGeometry(QRect(310, 600, 271, 21));
        progressBar_BossHealth->setValue(0);
        progressBar_PlayerHealth = new QProgressBar(BossMode);
        progressBar_PlayerHealth->setObjectName(QString::fromUtf8("progressBar_PlayerHealth"));
        progressBar_PlayerHealth->setGeometry(QRect(310, 630, 271, 21));
        progressBar_PlayerHealth->setMaximum(1000);
        progressBar_PlayerHealth->setValue(0);
        progressBar_PlayerStamina = new QProgressBar(BossMode);
        progressBar_PlayerStamina->setObjectName(QString::fromUtf8("progressBar_PlayerStamina"));
        progressBar_PlayerStamina->setGeometry(QRect(310, 660, 271, 21));
        progressBar_PlayerStamina->setMaximum(1000);
        progressBar_PlayerStamina->setValue(0);
        AttackButton = new QPushButton(BossMode);
        AttackButton->setObjectName(QString::fromUtf8("AttackButton"));
        AttackButton->setGeometry(QRect(20, 630, 101, 41));
        pushButton = new QPushButton(BossMode);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(130, 630, 101, 41));
        label = new QLabel(BossMode);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 0, 621, 321));
        label->setPixmap(QPixmap(QString::fromUtf8(":/Boss/Image/Balana.jpg")));

        retranslateUi(BossMode);

        QMetaObject::connectSlotsByName(BossMode);
    } // setupUi

    void retranslateUi(QWidget *BossMode)
    {
        BossMode->setWindowTitle(QCoreApplication::translate("BossMode", "Form", nullptr));
        AttackButton->setText(QCoreApplication::translate("BossMode", "Attack", nullptr));
        pushButton->setText(QCoreApplication::translate("BossMode", "Next", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class BossMode: public Ui_BossMode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOSSMODE_H
