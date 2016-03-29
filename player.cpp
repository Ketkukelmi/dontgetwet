#include "player.h"
#include "rain.h"
#include <QDebug>
player::player(QGraphicsItem *parent): QGraphicsRectItem(parent)
{

}
void player::keyPressEvent(QKeyEvent *event)
{
    //movement
    if (event->key() == Qt::Key_Left){
        if (pos().x() > 0)
        setPos(x()-10,y());
    }
    else if (event->key() == Qt::Key_Right){
        if (pos().x() + 100 < 800)
        setPos(x()+10,y());
    }
    else if (event->key() == Qt::Key_Space){
            qApp->quit();
            QProcess::startDetached(qApp->arguments()[0], qApp->arguments());

        }
}
void player::spawn()
{
    //create rain
    Rain *rain = new Rain();
    scene()->addItem(rain);
}

