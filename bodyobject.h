#ifndef BODYOBJECT_H
#define BODYOBJECT_H

#include <QGraphicsPixmapItem>
#include <QGraphicsScene>
#include "Position.h"

class BodyObject : public QGraphicsPixmapItem {
public:
    int width;
    int height;
    Position position;

    BodyObject(int width, int height, Position position, QGraphicsPixmapItem* parent = nullptr);

    virtual ~BodyObject();


    virtual void draw(QGraphicsScene &scene);
};

#endif
