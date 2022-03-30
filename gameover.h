#ifndef GAMEOVER_H
#define GAMEOVER_H

#include <QObject>

class GameOver : public QObject
{
    Q_OBJECT
public:
    explicit GameOver(QObject *parent = nullptr);

signals:
    void PlayerDeath();
    void BossDeath();

public slots:
};

#endif // GAMEOVER_H
