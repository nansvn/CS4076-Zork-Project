#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "imageschange.h"
#include <iostream>
#include <ctime>
#include <QPainter>
#include <QMessageBox>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setFixedSize(1004,670);
    createRooms();
    printWelcome();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//WEST
void MainWindow::on_pushButton_west_clicked()
{
    Room* nextRoom = currentRoom->nextRoom("west");

    if (nextRoom == NULL)
        ui->textEdit->append("There is no way ahead, turn around.");
    else {
        currentRoom = nextRoom;
        QString qstr = QString::fromStdString(currentRoom->longDescription());
        ui->textEdit->append(qstr);
        QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
        ui->label->setPixmap(pixmap);
        ui->label->setScaledContents(true);
        ui->label->show();
    }
}

//NORTH
void MainWindow::on_pushButton_north_clicked()
{
    Room* nextRoom = currentRoom->nextRoom("north");

    if (nextRoom == NULL)
        ui->textEdit->append("There is no way ahead, turn around.");
    else {
        currentRoom = nextRoom;
        QString qstr = QString::fromStdString(currentRoom->longDescription());
        ui->textEdit->append(qstr);
        QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
        ui->label->setPixmap(pixmap);
        ui->label->setScaledContents(true);
        ui->label->show();
    }
}

//SOUTH
void MainWindow::on_pushButton_south_clicked()
{
    Room* nextRoom = currentRoom->nextRoom("south");

    if (nextRoom == NULL)
        ui->textEdit->append("There is no way ahead, turn around.");
    else {
        currentRoom = nextRoom;
        QString qstr = QString::fromStdString(currentRoom->longDescription());
        ui->textEdit->append(qstr);
        QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
        ui->label->setPixmap(pixmap);
        ui->label->setScaledContents(true);
        ui->label->show();
    }
}

//EAST
void MainWindow::on_pushButton_east_clicked()
{
    Room* nextRoom = currentRoom->nextRoom("east");

    if (nextRoom == NULL)
        ui->textEdit->append("There is no way ahead, turn around.");
    else {
        currentRoom = nextRoom;
        QString qstr = QString::fromStdString(currentRoom->longDescription());
        ui->textEdit->append(qstr);
        QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
        ui->label->setPixmap(pixmap);
        ui->label->setScaledContents(true);
        ui->label->show();
    }
}

//TP
void MainWindow::on_pushButton_tele_clicked()
{
    srand((int)time(0));
    int t = rand() % 10;
    currentRoom = room[t];
    QString t_qstr = QString::fromStdString(currentRoom->shortDescription());

    ui->textEdit->append("\nYou use the teleportation spell. Everything in front of you fades");
    ui->textEdit->append("After a few minutes, you are awake and find yourself standing at the center of [" + t_qstr + "]");


    QString qstr = QString::fromStdString(currentRoom->longDescription());
    ui->textEdit->append(qstr);
    QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
    ui->label->setPixmap(pixmap);
    ui->label->setScaledContents(true);
    ui->label->show();
}

//MAP
void MainWindow::on_pushButton_map_clicked()
{
    ui->textEdit->append("\nYou reach in your bag and take out a map");
    ui->textEdit->append("                          [Throne]        ");
    ui->textEdit->append("                              |        ");
    ui->textEdit->append("                              |        ");
    ui->textEdit->append("[Forest] ----- [Barbican] --- [Kitchen]");
    ui->textEdit->append("                              |                 ");
    ui->textEdit->append("                              |                 ");
    ui->textEdit->append("[Storage] --- [Chamber] --- [Dungeon]");
    ui->textEdit->append("                              |                 ");
    ui->textEdit->append("                              |                 ");
    ui->textEdit->append("[Courtyard] -- [Prison] --- [Library]");
    QString qstr = QString::fromStdString(currentRoom->location());
    ui->textEdit->append(qstr);
}




void MainWindow::createRooms()  {
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

    a->addItem(new Object("MogulKahn", 126, 20));
    b->addItem(new Object("Nessaj", 115, 23));
    c->addItem(new Object("Lucifer", 139, 15));
    d->addItem(new Object("N'aix", 128, 20));
    e->addItem(new Object("Abaddon", 142, 17));
    f->addItem(new Object("Banehallow", 190, 13));
    g->addItem(new Object("Balanar", 132, 19));
    h->addItem(new Object("Azgalor", 135, 19));
    i->addItem(new Object("Pudge", 185, 14));
    j->addItem(new Object("Slardar", 125, 21));

//             (N, E, S, W)
    a->setExits(f, b, d, c);
    b->setExits(NULL, NULL, NULL, a);
    c->setExits(NULL, a, NULL, NULL);
    d->setExits(a, e, NULL, i);
    e->setExits(NULL, NULL, NULL, d);
    f->setExits(j, g, a, h);
    g->setExits(NULL, NULL, NULL, f);
    h->setExits(NULL, f, NULL, NULL);
    i->setExits(NULL, d, NULL, NULL);
    j->setExits(NULL, NULL, f, NULL);

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

    XiaoMing = new Character("XiaoMing");
    XiaoMing->addObject(new Object("Player", 1000, 1000, 50));

}

void MainWindow::printWelcome() {
    ui->textEdit->append("Welcome to Zork world!\n");
    QString qstr = QString::fromStdString(currentRoom->longDescription());
    ui->textEdit->append(qstr);
    QPixmap pixmap(ic.ChangeImage(currentRoom->getIndex()));
    ui->label->setPixmap(pixmap);
    ui->label->setScaledContents(true);
    ui->label->show();
}


void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Background/Image/background.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);

}


void MainWindow::on_pushButton_wordle_clicked()
{
   QMessageBox::StandardButton reply=QMessageBox::question(this,"Wordle","Are you sure you want to play Wordle?",
                          QMessageBox::Yes|QMessageBox::No);
   if(reply==QMessageBox::Yes){
       wordle.show();
   }
   if(reply==QMessageBox::No){
   }

}

// BOSS
void MainWindow::on_pushButton_boss_clicked()
{
    QMessageBox::StandardButton reply=QMessageBox::question(this,"Boss Mode","Do you want to start your challenge?",
                           QMessageBox::Yes|QMessageBox::No);
    if(reply==QMessageBox::Yes){
        bossMode.show();
    }
    if(reply==QMessageBox::No){
    }
}

// Exit
void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

