#include"snake.h"
#include"coord.h"
Coord Snake::getHead() const{
    return head;
}
void Snake::forward()
{
    if(direction==Utils::Utils::NORTH)
    {
        head.incY();
    }
    else if(direction==Utils::Utils::SOUTH)
    {
        head.decY();
    }
    else if(direction==Utils::Utils::EAST)
    {
        head.incX();
    }
    else{
       head.decX();
    }
}
void Snake::incLength()
{
    length++;
}