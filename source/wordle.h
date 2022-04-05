#ifndef WORDLE_H
#define WORDLE_H
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class wordle; }
QT_END_NAMESPACE

class wordle : public QWidget
{
    Q_OBJECT

public:
    wordle(QWidget *parent = nullptr);
    ~wordle();

private slots:
    void check();
    void on_textEdit_3_textChanged();
    void on_textEdit_textChanged();
    void on_textEdit_2_textChanged();
    void on_textEdit_4_textChanged();
    void on_textEdit_5_textChanged();
    void on_textEdit_6_textChanged();
    void on_textEdit_7_textChanged();
    void on_textEdit_8_textChanged();
    void on_textEdit_9_textChanged();
    void on_textEdit_10_textChanged();
    void on_textEdit_11_textChanged();
    void on_textEdit_12_textChanged();
    void on_textEdit_13_textChanged();
    void on_textEdit_14_textChanged();
    void on_textEdit_15_textChanged();
    void on_textEdit_16_textChanged();
    void on_textEdit_17_textChanged();
    void on_textEdit_18_textChanged();
    void on_textEdit_19_textChanged();
    void on_textEdit_20_textChanged();
    void on_textEdit_21_textChanged();
    void on_textEdit_22_textChanged();
    void on_textEdit_23_textChanged();
    void on_textEdit_24_textChanged();
    void on_textEdit_25_textChanged();
    void on_textEdit_26_textChanged();
    void on_textEdit_27_textChanged();
    void on_textEdit_28_textChanged();
    void on_textEdit_29_textChanged();
    void on_textEdit_30_textChanged();

    void Line1();
    void Line2();
    void Line3();
    void Line4();
    void Line5();
    void Line6();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();

    void win1();
    void win2();
    void win3();
    void win4();
    void win5();
    void win6();

private:
    Ui::wordle *ui;
};
#endif // WORDLE_H
