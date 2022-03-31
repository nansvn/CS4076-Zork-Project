#ifndef BOSSMODE_H
#define BOSSMODE_H

#include <QWidget>

#include <string>
#include <QString>

#include "Room.h"
#include "item.h"
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
    void GameWon();
    void GameLost();
    void on_pushButton_clicked();

private:
    Ui::BossMode *ui;

    Room *currentRoom;
    Room *room[10];
    Character *XiaoMing;
    Character *Parker;
    void createRooms();

    GameOver *gameover;
    bool isover = false;
};

#endif // BOSSMODE_H
