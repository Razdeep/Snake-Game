#ifndef BOARD_H_
#define BOARD_H_
#include "snake.h"
class Board{
    static const int BOARD_LENGTH=20,BOARD_WIDTH=20;
    public:
    Board(){}
    void print(const Snake& snake);
};
#endif