#ifndef RAIN_H
#define RAIN_H

#include <QObject>
#include <QGraphicsRectItem>
#include <QGraphicsItem>
#include <QTimer>
#include <QList>
#include <QGraphicsScene>
#include <stdlib.h>
#include "game.h"
#include <QFont>
#include <QGraphicsTextItem>


class Rain: public QObject,public  QGraphicsRectItem
{
    Q_OBJECT
public:
    Rain(QGraphicsItem *parent=0);

public slots:
    void move();

};



#endif // RAIN_H
