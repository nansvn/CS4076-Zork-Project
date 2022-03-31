#include "bossmode.h"
#include "ui_bossmode.h"
#include <QPainter>
#include <QProcess>
#include "imageschange.h"
#include <ctime>
#include "Entourage.h"
#include <QMessageBox>
#include <array>

/*static class members*/
static int num;

BossMode::BossMode(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BossMode)
{
    ui->setupUi(this);
    this->setWindowTitle("Boss Challenge!");
    createRooms();

    QPixmap pix;
    QImage QOP(":/Boss/Image/QOP.png");//filename
    ui->label->setPixmap(pix.fromImage(QOP));
    ui->label->setScaledContents(true);
    ui->label->show();

    //TP
    srand((int)time(0));
    num = rand() % 10;
    currentRoom = room[num];
    Flag[num]=1;

    gameover = new GameOver();
    connect(gameover, SIGNAL(BossDeath()), this, SLOT(GameWon()));
    connect(gameover, SIGNAL(PlayerDeath()), this, SLOT(GameLost()));

    vector<Item>::iterator j = currentRoom->itemsInRoom.begin();
    ui->progressBar_BossHealth->setMaximum((*j).health);
    ui->progressBar_BossHealth->setValue((*j).health);
    double perc_bosshealth = (ui->progressBar_BossHealth->value() - ui->progressBar_BossHealth->minimum()) * 100.0
                        / (ui->progressBar_BossHealth->maximum() - ui->progressBar_BossHealth->minimum());
    ui->progressBar_BossHealth->setFormat(tr("Boss Health : %1%").arg(QString::number(perc_bosshealth, 'f', 1)));
    ui->progressBar_BossHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    ui->progressBar_PlayerHealth->setValue(1000);
    double perc_playerhealth = (ui->progressBar_PlayerHealth->value() - ui->progressBar_PlayerHealth->minimum()) * 100.0
                        / (ui->progressBar_PlayerHealth->maximum() - ui->progressBar_PlayerHealth->minimum());

    ui->progressBar_PlayerHealth->setFormat(tr("Player Health : %1%").arg(QString::number(perc_playerhealth, 'f', 1)));
    ui->progressBar_PlayerHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    ui->progressBar_PlayerStamina->setValue(1000);
    double perc_playerstamina = (ui->progressBar_PlayerStamina->value() - ui->progressBar_PlayerStamina->minimum()) * 100.0
                        / (ui->progressBar_PlayerStamina->maximum() - ui->progressBar_PlayerStamina->minimum());

    ui->progressBar_PlayerStamina->setFormat(tr("Player Stamina : %1%").arg(QString::number(perc_playerstamina, 'f', 1)));
    ui->progressBar_PlayerStamina->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

    ui->textEdit->append("\nYou walk into somewhere in the castle. Countless demons are slumbering here");
    ui->textEdit->append("Your footsteps have awakened the demons");
    ui->textEdit->append("You have no choice but to take up arms for the battle!\n");

    QString qstr = QString::fromStdString(currentRoom->longDescription());
    ui->textEdit->append(qstr);

    QString qstr1 = QString::fromStdString(XiaoMing->longDescription());
    ui->textEdit->append(qstr1);

    QString qstr2 = QString::fromStdString(Parker->longDescription());//follower
        ui->textEdit->append(qstr2);

    QString go = QString::fromStdString(Parker->inspire());
        ui->textEdit->append(go);
}



BossMode::~BossMode()
{
    delete ui;
}

void BossMode::on_AttackButton_clicked()
{
    int flag=1;//flag = 1 - monster defeated
    for(int ii=0;ii<10;ii++){
        if(Flag[ii]==0){
            isover=false;
            flag=0;
        }
    }

    if(isover == true)
    {
        QMessageBox::about(this,"You won!!","You have killed all your enemies, You are the hero of the country! ");
        QMessageBox::StandardButton reply=QMessageBox::question(this,"You won!!","Congrats!Do you want to replay the game?",
                               QMessageBox::Yes|QMessageBox::No);
        if(reply==QMessageBox::Yes){
            QProcess process(this);
            process.startDetached("lab5_test.exe");
            close();
        }
        if(reply==QMessageBox::No){
        }
    }
    else
    {
        ui->textEdit->append("\nThe monster looks angry. It rushes towards you and attacks first.");
        vector<Item>::iterator i = XiaoMing->itemsInCharacter.begin();
        vector<Item>::iterator j = currentRoom->itemsInRoom.begin();
        std::string PlayerHealth_str = std::to_string((*i).health);
        QString PlayerHealth_qstr = QString::fromStdString(PlayerHealth_str);
        std::string PlayerStamina_str = std::to_string((*i).stamina);
        QString PlayerStamina_qstr = QString::fromStdString(PlayerStamina_str);
        std::string BossHealth_str = std::to_string((*j).health);
        QString BossHealth_qstr = QString::fromStdString(BossHealth_str);

        if((*i).stamina - 20 < 0)
        {
            (*i).health -= (*j).attack;
            if((*i).health < 0)
                (*i).health = 0;

            std::string PlayerHealth_str=std::to_string((*i).health);
            QString PlayerHealth_qstr=QString::fromStdString(PlayerHealth_str);
            ui->textEdit->append("\nPlayer Health: " + PlayerHealth_qstr);
            ui->textEdit->append("Player Stamina: " + PlayerStamina_qstr);

            ui->progressBar_PlayerHealth->setValue((*i).health);
            double perc_playerhealth = (ui->progressBar_PlayerHealth->value() - ui->progressBar_PlayerHealth->minimum()) * 100.0
                                / (ui->progressBar_PlayerHealth->maximum() - ui->progressBar_PlayerHealth->minimum()); // 百分比计算公式
            ui->progressBar_PlayerHealth->setFormat(tr("Player Health : %1%").arg(QString::number(perc_playerhealth, 'f', 1)));
            ui->progressBar_PlayerHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

            if((*i).health == 0)
            {
                emit this->GameLost();
                isover = true;
            }
        }
        else
        {
            if(rand() % 3)
            {
                ui->textEdit->append("\nYou successfully dodged the attack!");
                ui->textEdit->append("Your stamina has decreased accordingly\n");
                (*i).stamina -= 20;

                std::string PlayerStamina_str=std::to_string((*i).stamina);
                QString PlayerStamina_qstr=QString::fromStdString(PlayerStamina_str);
                ui->textEdit->append("\nPlayer Health: " + PlayerHealth_qstr);
                ui->textEdit->append("Player Stamina: " + PlayerStamina_qstr);

                ui->progressBar_PlayerStamina->setValue((*i).stamina);
                double perc_playerstamina = (ui->progressBar_PlayerStamina->value() - ui->progressBar_PlayerStamina->minimum()) * 100.0
                                    / (ui->progressBar_PlayerStamina->maximum() - ui->progressBar_PlayerStamina->minimum()); // 百分比计算公式
                ui->progressBar_PlayerStamina->setFormat(tr("Player Stamina : %1%").arg(QString::number(perc_playerstamina, 'f', 1)));
                ui->progressBar_PlayerStamina->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);
            }
            else
            {
                ui->textEdit->append("\nYou fail to dodge and are hit by the monster. Your health decreased! \n");
                (*i).health -= (*j).attack;
                if((*i).health < 0)
                    (*i).health = 0;

                std::string PlayerHealth_str=std::to_string((*i).health);
                QString PlayerHealth_qstr=QString::fromStdString(PlayerHealth_str);
                ui->textEdit->append("Player Health: " + PlayerHealth_qstr);
                ui->textEdit->append("Player Stamina: " + PlayerStamina_qstr);

                ui->progressBar_PlayerHealth->setValue((*i).health);
                double perc_playerhealth = (ui->progressBar_PlayerHealth->value() - ui->progressBar_PlayerHealth->minimum()) * 100.0
                                    / (ui->progressBar_PlayerHealth->maximum() - ui->progressBar_PlayerHealth->minimum()); // 百分比计算公式

                ui->progressBar_PlayerHealth->setFormat(tr("Player Health : %1%").arg(QString::number(perc_playerhealth, 'f', 1)));
                ui->progressBar_PlayerHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

                if((*i).health == 0)
                {
                    emit this->GameLost();
                    isover = true;
                }
            }
        }

        if(isover==true){}
        else
        {
        ui->textEdit->append("\nYou slash at the monster with your sword.");
        if(rand() % 2)
        {
            ui->textEdit->append("\nYou slip and fall. Your attack missed.");
            ui->textEdit->append("BOSS Health: " + BossHealth_qstr);
        }
        else
        {
            ui->textEdit->append("\nYour attack hits the monster successfully.");
            ui->textEdit->append("The monster is unsteady on his feet.");
            (*j).health -= (*i).attack;
            if((*j).health < 0)
                (*j).health = 0;

            std::string BossHealth_str=std::to_string((*j).health);
            QString BossHealth_qstr=QString::fromStdString(BossHealth_str);
            ui->textEdit->append("Monster Health: " + BossHealth_qstr);

            ui->progressBar_BossHealth->setValue((*j).health);
            double perc_bosshealth = (ui->progressBar_BossHealth->value() - ui->progressBar_BossHealth->minimum()) * 100.0
                                / (ui->progressBar_BossHealth->maximum() - ui->progressBar_BossHealth->minimum()); // 百分比计算公式
            ui->progressBar_BossHealth->setFormat(tr("Boss Health : %1%").arg(QString::number(perc_bosshealth, 'f', 1)));
            ui->progressBar_BossHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);

            if((*j).health == 0)
            {
                emit this->GameWon();
                if(flag == 1)
                    isover = true;
                else
                    isover=false;
                ui->AttackButton->setVisible(false);
            }
        }
        }
    }

    ui->textEdit->append("\n");
}

void BossMode::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

    a = new Room("Chamber",0);
    b = new Room("Dungeon",1);
    c = new Room("Storage Room",2);
    d = new Room("Prison",3);
    e = new Room("Library",4);
    f = new Room("Barbican",5);
    g = new Room("Kitchen",6);
    h = new Room("Forest",7);
    i = new Room("Courtyard",8);
    j = new Room("Throne",9);

    a->addItem(new Item("MogulKahn", 126, 20));
    b->addItem(new Item("Nessaj", 115, 43));
    c->addItem(new Item("Lucifer", 139, 15));
    d->addItem(new Item("N'aix", 128, 20));
    e->addItem(new Item("Abaddon", 142, 37));
    f->addItem(new Item("Banehallow", 190, 13));
    g->addItem(new Item("Balanar", 132, 19));
    h->addItem(new Item("Azgalor", 135, 19));
    i->addItem(new Item("Pudge", 185, 14));
    j->addItem(new Item("Slardar", 125, 21));

//             (N, E, S, W)
    a->setExits(f, b, d, c);
    b->setExits(NULL, j, NULL, a);
    c->setExits(NULL, a, NULL, NULL);
    d->setExits(a, e, NULL, i);
    e->setExits(NULL, NULL, NULL, d);
    f->setExits(NULL, g, a, h);
    g->setExits(NULL, NULL, NULL, f);
    h->setExits(NULL, f, NULL, NULL);
    i->setExits(NULL, d, NULL, NULL);
    j->setExits(NULL, NULL, NULL, b);


    room[0] = a;
    room[1] = b;
    room[2] = c;
    room[3] = d;
    room[4] = e;
    room[5] = f;
    room[6] = g;
    room[7] = h;
    room[8] = i;
    room[9] = j;

    currentRoom = a;

    Parker = new Entourage("Goblin");
    Parker->addItem(new Item("Goblin", 35, 0, 10));

    XiaoMing = new Character("XiaoMing");
    XiaoMing->addItem(new Item("Player", 1000+Parker->itemsInCharacter.at(0).health, 1000, 50+Parker->itemsInCharacter.at(0).attack));

}

void BossMode::GameWon()
{
    ui->textEdit->append("\nYou killed the demon.");
}


void BossMode:: GameLost()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Game Over","Game over!Do you want to restart the game?",
                           QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
        QProcess process(this);
        process.startDetached("lab5_test.exe");
        close();
    }
    if(reply==QMessageBox::No){
    }
}


void BossMode::on_pushButton_clicked(){
    //TP
    srand((int)time(0));
    num = rand() % 10;
    currentRoom=room[num];

    vector<Item>::iterator j = currentRoom->itemsInRoom.begin();
    ui->progressBar_BossHealth->setMaximum((*j).health);
    ui->progressBar_BossHealth->setValue((*j).health);
    double perc_bosshealth = (ui->progressBar_BossHealth->value() - ui->progressBar_BossHealth->minimum()) * 100.0
                        / (ui->progressBar_BossHealth->maximum() - ui->progressBar_BossHealth->minimum());

    ui->progressBar_BossHealth->setFormat(tr("Boss Health : %1%").arg(QString::number(perc_bosshealth, 'f', 1)));
    ui->progressBar_BossHealth->setAlignment(Qt::AlignLeft | Qt::AlignVCenter);


    if(Flag[num]==0){
        currentRoom = room[num];
        Flag[num]=1;
        ui->textEdit->append("\nYou move to another room. Demon is sleeping here.");
        ui->AttackButton->setVisible(true);
        QPixmap boss(ic.NextImage2());
        ui->label->setPixmap(boss);
        ui->label->setScaledContents(true);
        ui->label->show();
        }
    else{
        ui->textEdit->append("\nThe room is silent and demon is dead, only dust dancing in the air.");
        ui->textEdit->append("Keep searching. Your mission is not complete yet. \n");
        ui->AttackButton->setVisible(false);
    }
}

void BossMode::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Background/Image/background.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

}
