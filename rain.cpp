#include "rain.h"
#include "health.h"
#include "score.h"


extern game * Game;

Rain::Rain(QGraphicsItem *parent): QObject(), QGraphicsRectItem(parent)
{
    //rain falls randomly
    int random_num = rand () % 700;
    setPos(random_num,0);

    setRect(0,0,10,100);

    //rain falls this often
    QTimer * timer= new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(50);

}

void Rain::move()
{
    setPos(x(),y()+5);

    //destroy rain after it lefts screen
    if (pos().y() >600){
        //if you want to collect rain and take dmg when it falls
        //put this game->health->decrease();
        Game->score->increase();
        scene()->removeItem(this);
        delete this;
    }
    QList<QGraphicsItem *> colliding_items = collidingItems();

    // if one of the colliding items is an Enemy, destroy both the bullet and the enemy
    for (int i = 0, n = colliding_items.size(); i < n; ++i){
        if (typeid(*(colliding_items[i])) == typeid(player)){
                             // increase the score
                            //game->score->increase();
            Game->health->decrease();
            scene()->removeItem(this);
            delete this;
                            // remove them from the scene (still on the heap)
                        /*scene()->removeItem(colliding_items[i]);
                         scene()->removeItem(this);

                            // delete them from the heap to save memory
                         delete colliding_items[i];
                          delete this;

                            // return (all code below refers to a non existint bullet)
                             */
            if (pos().y() > 600){ //+ rect().height()

                scene()->removeItem(this);
                delete this;               
            }

            return;
        }
    }


}
/*
     setPlainText("Game over ");
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times",16));
    */


