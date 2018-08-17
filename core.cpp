#include "core.h"
#include <iostream>
#include "utils.h"
#include "board.h"
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
void Core::Core::draw(const Snake& snake)
{
    // const int BOARD_HEIGHT=20,BOARD_WIDTH=20;
    // for(int i=0;i<BOARD_HEIGHT;i++)
    // {
    //     for(int j=0;j<BOARD_WIDTH;j++)
    //     {
    //         if(snake.getHead().getX()==j && snake.getHead().getY()==i)
    //             std::cout<<"H";
    //         else std::cout<<" ";
    //     }
    //     std::cout<<std::endl;
    // }
}