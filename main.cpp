#include<iostream>
#include"utils.h"
#include"core.h"

bool gameOver;
char userInput;
int main()
{
    gameOver=false;
    std::cout<<"Welcome to the Snake game"<<std::endl;
    while(!gameOver)
    {
        Utils::Utils::drawBoard();
        Core::Core::play();

    }

    return EXIT_SUCCESS;
}