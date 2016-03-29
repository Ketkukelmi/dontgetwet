#ifndef PLAYER_H
#define PLAYER_H

#include <QGraphicsRectItem>
#include <QObject>
#include <QGraphicsItem>
#include <QKeyEvent>
#include <QgraphicsView>
#include <QGraphicsScene>
#include <QProcess>
#include <QApplication>


class player: public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    player(QGraphicsItem * parent=0);
    void keyPressEvent(QKeyEvent *event);
public slots:
    void spawn();

};

#endif // PLAYER_H
