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
    this->setFixedSize(1050,665);
    createRooms();
    printWelcome();

    //show player
    QPixmap pix;
    QImage hero(":/Hero/Image/DH.jpg");//filename，图片的路径名字
    ui->label_2->setPixmap(pix.fromImage(hero));// ui->pix就是label的控件名字
    ui->label_2->setScaledContents(true);
    ui->label_2->show();

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
        //ui->textEdit->append(currentRoom->longDescription());
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
    }
}

//TP
void MainWindow::on_pushButton_tele_clicked()
{
    srand((int)time(0));
    int t = rand() % 10;
    //int -> string -> qstring
    std::string t_str = std::to_string(t);
    QString t_qstr = QString::fromStdString(t_str);

    ui->textEdit->append("\nYou use the teleportation spell and are teleported to somewhere");
    ui->textEdit->append("You are currently in room " + t_qstr);

    currentRoom = room[t];
    QString qstr = QString::fromStdString(currentRoom->longDescription());
    ui->textEdit->append(qstr);
}

//MAP
void MainWindow::on_pushButton_map_clicked()
{
    ui->textEdit->append("The map is: ");
    ui->textEdit->append("[h] --- [f] --- [g]        ");
    ui->textEdit->append("         |                 ");
    ui->textEdit->append("         |                 ");
    ui->textEdit->append("[c] --- [a] --- [b] --- [j]");
    ui->textEdit->append("         |                 ");
    ui->textEdit->append("         |                 ");
    ui->textEdit->append("[i] --- [d] --- [e]        ");
}




void MainWindow::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j;

    a = new Room("a");
    b = new Room("b");
    c = new Room("c");
    d = new Room("d");
    e = new Room("e");
    f = new Room("f");
    g = new Room("g");
    h = new Room("h");
    i = new Room("i");
    j = new Room("j");

    a->addItem(new Item("MogulKahn", 126, 20));
    b->addItem(new Item("Nessaj", 115, 23));
    c->addItem(new Item("Lucifer", 139, 15));
    d->addItem(new Item("N'aix", 128, 20));
    e->addItem(new Item("Abaddon", 142, 17));
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

    XiaoMing = new Character("XiaoMing");
    XiaoMing->addItem(new Item("Player", 1000, 1000, 50));

}

void MainWindow::printWelcome() {
    ui->textEdit->append("Welcome to Zork world!");
    QString qstr = QString::fromStdString(currentRoom->longDescription());
    ui->textEdit->append(qstr);
}


void MainWindow::on_pushButton_walk_clicked()
{
    QPixmap pixmap(ic.NextImage());
    ui->label->setPixmap(pixmap);
    ui->label->setScaledContents(true);
    ui->label->show();
}

void MainWindow::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPixmap pix;
    pix.load(":/Hero/Image/background.png");
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

//exit



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

