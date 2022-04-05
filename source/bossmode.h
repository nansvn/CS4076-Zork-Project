#ifndef BOSSMODE_H
#define BOSSMODE_H

#include <QWidget>
#include <string>
#include <QString>

#include "Room.h"
#include "Object.h"
#include "Character.h"
#include "gameover.h"
#include "imageschange.h"
#include "Entourage.h"


namespace Ui {
class BossMode;
}

class BossMode : public QWidget
{
    Q_OBJECT

public:
    explicit BossMode(QWidget *parent = 0);
    void paintEvent(QPaintEvent *);
    Images_Change ic;
    int Flag[10]={0};
    ~BossMode();

private slots:
    void on_AttackButton_clicked();
    void on_pushButton_clicked();
    void GameWon();
    void GameLost();

private:
    Ui::BossMode *ui;
    bool isover = false;
    void createRooms();
    Room *currentRoom;
    Room *room[10];
    Character *XiaoMing;
    Character *Parker;
    GameOver *gameover;

};

#endif // BOSSMODE_H
