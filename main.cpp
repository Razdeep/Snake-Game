#include<iostream>
#include"utils.h"

bool gameOver;

int main()
{
    gameOver=false;
    std::cout<<"Welcome to the Snake game"<<std::endl;
    while(!gameOver)
    {
        Utils::Utils::drawBoard();
    }

    return EXIT_SUCCESS;
}