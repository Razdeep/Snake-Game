#include<iostream>
#include"board.h"
void Board::print(const Snake& snake)
{
    for(int i=0;i<BOARD_LENGTH;i++)
    {
        for(int j=0;j<BOARD_WIDTH;j++)
        {
            if(i==0||i==BOARD_LENGTH-1)
                std::cout<<"*";
            else if(j==0||j==BOARD_WIDTH-1)
                std::cout<<"*";
            else if(snake.getHead().getX()==j && snake.getHead().getY()==i)
                std::cout<<"H";
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }
}