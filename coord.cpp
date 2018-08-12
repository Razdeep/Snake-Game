#include "coord.h"
Coord Coord::getCoord() const{
    // Might be issues here
    return *this;
}
void Coord::setCoord(const int x,const int y)
{
    this->x=x;
    this->y=y;
}
void Coord::setCoord(const Coord& temp)
{
    this->x=temp.getX();
    this->y=temp.getY();
}
int Coord::getX() const{ return x; }
int Coord::getY() const{ return y; }
void Coord::incX(){
    x++;
}
void Coord::incY(){
    y--; // Maintaining the coordinate system
}
void Coord::decX(){
    x--;
}
void Coord::decY(){
    y++;
}