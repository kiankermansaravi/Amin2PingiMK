#ifndef AMIN2PINGI_H
#define AMIN2PINGI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Amin2pingi;
}
QT_END_NAMESPACE

class Amin2pingi : public QMainWindow
{
    Q_OBJECT

public:
    Amin2pingi(QWidget *parent = nullptr);
    ~Amin2pingi();

private:
    Ui::Amin2pingi *ui;
};
#endif // AMIN2PINGI_H
