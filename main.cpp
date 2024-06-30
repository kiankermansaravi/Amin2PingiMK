#include <QGraphicsView>
#include <QGraphicsScene>
#include <QApplication>
#include "Platform.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QGraphicsScene scene;
    QGraphicsView view(&scene);
    view.setWindowTitle("Platform Example");
    view.resize(400, 300);

    // Create a Platform object
    Platform platform(100, 20, QPointF(50, 250));
    scene.addItem(&platform);

    view.show();

    return app.exec();
}
