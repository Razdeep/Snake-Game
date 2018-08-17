#include "coord.h"
#include "utils.h"
#ifndef SNAKE_H_
#define SNAKE_H_
class Snake{
    public:
        static const int MAX_LENGTH=30;
        Utils::Utils::Direction direction;
        Coord head;
        Coord body[MAX_LENGTH];
        int length;
        Snake():length(0){
            direction=Utils::Utils::NORTH;
            head.setCoord(10,10);
            //testing 
            length=3;
            body[0].setCoord(10,11);
            body[1].setCoord(10,12);
            body[2].setCoord(10,13);
        }
        Coord getHead() const;
        int getLength() const;
        void forward();
        void setLength(const int);
        void incLength();
        void setDirection(Utils::Utils::Direction);//@TODO
};
#endif