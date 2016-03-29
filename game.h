#ifndef GAME_H
#define GAME_H

#include <QTimer>
#include <QFont>
#include <QGraphicsTextItem>
#include <QObject>
#include <QWidget>
#include <QgraphicsView>
#include <QGraphicsScene>
#include <QGraphicsPixmapItem>
#include <qgraphicsscene.h>
#include <QTextEdit>
#include <typeinfo>
#include <player.h>
#include <health.h>
#include <score.h>



class game: public QGraphicsView
{
Q_OBJECT

public:
    game(QWidget *parent=0);
    player *Player;
    QGraphicsScene *scene;
    Health *health;
    Score *score;
};

#endif // GAME_H
