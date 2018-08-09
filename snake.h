#include "coord.h"
#include "utils.h"
#ifndef __SNAKE_H
#define __SNAKE_H
class Snake{
    public:
        enum Utils::Utils::Direction direction;
        Coord head;
        int length;
        Snake():length(0){
            direction=Utils::Utils::NORTH;
            head.setCoord(10,10);
        }
        Coord getHead() const;
        void forward();
        void incLength();
        
};
#endif