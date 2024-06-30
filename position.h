#ifndef POSITION_H
#define POSITION_H

class Position {
public:

    Position();
    Position(int x, int y);


    int getX() const;
    int getY() const;


protected:
    int x;
    int y;
};

#endif
