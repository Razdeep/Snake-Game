#ifndef BOARD_H_
#define BOARD_H_
#include "snake.h"
class Board{
    static const int BOARD_LENGTH=20,BOARD_WIDTH=20;
    char board_matrix[BOARD_LENGTH][BOARD_WIDTH];
    public:
    Board(){}
    void fillBoardMatrix(const Snake& snake);
    void print();
};
#endif