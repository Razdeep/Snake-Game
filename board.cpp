#include<iostream>
#include"board.h"
void Board::fillBoardMatrix(const Snake& snake)
{
    // Fills the clear board with snake and food
    Board::clearBoard();
    for(int i=0;i<BOARD_LENGTH;i++)
    {
        for(int j=0;j<BOARD_WIDTH;j++)
        {
            if(snake.getHead().getX()==j && snake.getHead().getY()==i)
                board_matrix[i][j]='H';
        }
    }
}
void Board::clearBoard()
{
    for(int i=0;i<BOARD_LENGTH;++i)
    {
        for(int j=0;j<BOARD_WIDTH;j++)
        {
            if(i==0||i==BOARD_LENGTH-1||j==0||j==BOARD_WIDTH-1)
                board_matrix[i][j]='*';
            else board_matrix[i][j]=' ';
        }
    }
}
void Board::print()
{
    for(int i=0;i<BOARD_LENGTH;i++)
    {
        for(int j=0;j<BOARD_WIDTH;j++)
        {
            std::cout<<board_matrix[i][j];
        }
        std::cout<<std::endl;
    }
}