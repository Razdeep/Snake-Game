#include<iostream>
#include"utils.h"

void Utils::Utils::drawBoard()
{
    std::cout<<"Drawing board"<<std::endl;
    for(int i=0;i<Utils::Utils::BOARD_HEIGHT;i++)
        std::cout<<"*";
    std::cout<<std::endl;
    
    for(int i=0;i<Utils::Utils::BOARD_HEIGHT;i++)
    {
        for(int j=0;j<Utils::Utils::BOARD_WIDTH;j++)
        {
            if(j==0||j==Utils::Utils::BOARD_WIDTH-1)
                std::cout<<"*";
            else std::cout<<" ";
        }
        std::cout<<std::endl;
    }

    for(int i=0;i<Utils::Utils::BOARD_HEIGHT;i++)
        std::cout<<"*";
    std::cout<<std::endl;

}