#include "game.h"


game::game(QWidget * parent)
{
    //backround
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,800,675);

    //
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    //controllable object
    Player = new player();
    Player->setRect(0,0,100,100);
    Player->setPos(400,500);

    Player->setFlag(QGraphicsItem::ItemIsFocusable);
    Player->setFocus();
    scene->addItem(Player);

    //hp
    score = new Score();
    score->setPos(score->x(), score->y()+65);
    scene->addItem(score);

    health = new Health();
    health->setPos(health->x(),health->y()+35);
    scene->addItem(health);

    //rain
    QTimer *timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),Player,(SLOT(spawn())));
    timer->start(2000);

    show();

}
