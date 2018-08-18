#include "core.h"
#include <iostream>
#include "utils.h"
#include "board.h"
#include <unistd.h>
void Core::Core::init()
{

}
void Core::Core::play()
{
    // Utils::Utils::drawBoard();
    Snake snake;
    // draw(snake);
    // snake.setLength(5);
    Board board;
    while(1)
    {
        board.fillBoardMatrix(snake);
        board.print();
        snake.forward();
        sleep(1);
    }
}