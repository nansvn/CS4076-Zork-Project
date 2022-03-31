#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QWidget>
#include <QMainWindow>
#include <QPushButton>
#include <QTextEdit>
#include <QProgressBar>
#include "Character.h"
#include <string>
#include <QString>

#include "wordle.h"
#include "Room.h"
#include "item.h"
#include "Character.h"
#include "bossmode.h"
#include "imageschange.h"

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    Images_Change ic;
    ~MainWindow();

private slots:
    void on_pushButton_west_clicked();

    void on_pushButton_north_clicked();

    void on_pushButton_south_clicked();

    void on_pushButton_tele_clicked();

    void on_pushButton_east_clicked();

    void on_pushButton_wordle_clicked();

    void on_pushButton_boss_clicked();

    void on_pushButton_map_clicked();


private:
    Ui::MainWindow *ui;
    wordle wordle;
    BossMode bossMode;
    void switch_BossMode();


    Room *currentRoom;
    Room *room[100];
    Character *XiaoMing;
    void createRooms();
    void printWelcome();
    void createItems();
    void displayItems();

private slots:
    void on_actionExit_triggered();
};

#endif // MAINWINDOW_H
