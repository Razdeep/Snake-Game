#ifndef COORD_H_
#define COORD_H_
class Coord{
        int x,y;
    public:
        Coord():x(0),y(0){};
        Coord(const int x,const int y):x(x),y(y){};
        // Coord(const Coord& coord);
        Coord getCoord() const;
        void setCoord(const int x,const int y);
        void setCoord(const Coord&);
        void incX();
        void incY();
        void decX();
        void decY();
        int getX() const;
        int getY() const;
};
#endif