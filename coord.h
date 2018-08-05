#ifndef __COORD_H
#def __COORD_H
class Coord{
        int x,y;
    public:
        Coord(int x,int y):x(x),y(y);
        Coord(const Coord& coord);
        Coord getCoord() const;
        void setCoord(const int x,const int y):x(x),y(y);
        void incX();
        void decX();
        int getX() const;
        int getY() const;
}