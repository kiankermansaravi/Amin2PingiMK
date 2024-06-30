#include "bodyobject.h"

BodyObject::BodyObject(int width, int height, Position position, QGraphicsPixmapItem* parent)
    : QGraphicsPixmapItem(parent), width(width), height(height), position(position) {
    setPos(position.getX(), position.getY());
}

BodyObject::~BodyObject() {
}

void BodyObject::draw(QGraphicsScene &scene) {
    scene.addItem(this);
}
