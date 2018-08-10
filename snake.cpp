#include"snake.h"
#include"coord.h"
Coord Snake::getHead() const{
    return head;
}
void Snake::forward()
{
    // Shift each point from the head
    
    for(int i=0;i<MAX_LENGTH-1;++i)
    {
        body[i+1]=body[i];
    }
    body[0].setCoord(head);
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