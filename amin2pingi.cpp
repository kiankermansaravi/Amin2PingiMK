#include "amin2pingi.h"
#include "./ui_amin2pingi.h"

Amin2pingi::Amin2pingi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Amin2pingi)
{
    ui->setupUi(this);
}

Amin2pingi::~Amin2pingi()
{
    delete ui;
}
