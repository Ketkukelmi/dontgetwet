#include "health.h"
#include <QFont>
#include "game.h"

extern game * Game;

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    // initialize the score to 0
    health = 3;

    // draw the text
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 3
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",16));
}

void Health::decrease(){
    health--;
    setPlainText(QString("Health: ") + QString::number(health)); // Health: 2
    if(health == 0)
    {

       setPlainText("Game over ");
       setDefaultTextColor(Qt::blue);
       setFont(QFont("times",18));
    }
}

int Health::getHealth(){
    return health;
}
