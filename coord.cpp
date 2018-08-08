#include "coord.h"
void Coord::setCoord(const int x,const int y)
{
    this->x=x;
    this->y=y;
}
int Coord::getX() const{ return x; }
int Coord::getY() const{ return y; }