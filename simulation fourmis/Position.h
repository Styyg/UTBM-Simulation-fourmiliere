#ifndef __POSITION_H__
#define __POSITION_H__

class Position
{
private:
    int x = 0;
    int y = 0;

public:
    Position() {}
    Position(int x, int y) {this->x = x; this->y = y;}

    bool operator==(Position);
    bool operator!=(Position);

    int getX() {return x;};
    int getY() {return y;};
    
    void setX(int x) {this->x = x;};
    void setY(int y) {this->y = y;};
    void setPos(int x, int y) {this->x = x; this->y = y;}
    void setPos(Position pos) {this->x = pos.getX(); this->y = pos.getY();}
    // test si les 2 positions sont adjacentes
    bool isNextTo(Position pos);
};

#endif