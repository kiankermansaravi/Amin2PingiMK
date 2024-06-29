#include "amin2pingi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Amin2pingi w;
    w.show();
    return a.exec();
}
