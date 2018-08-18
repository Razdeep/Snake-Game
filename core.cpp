#include "core.h"
#include <iostream>
#include "utils.h"
#include "board.h"
void Core::Core::init()
{
    
}
void Core::Core::play()
{
    // Utils::Utils::drawBoard();
    Snake snake;
    // draw(snake);
    Board board;
    board.fillBoardMatrix(snake);
    board.print();
    snake.setLength(5);
    std::cout<<"Current length"<<snake.getLength()<<std::endl;
}