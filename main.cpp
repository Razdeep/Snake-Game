#include<iostream>
#include"utils.h"
#include"core.h"

bool gameOver;
char userInput;
int main()
{
    int tempDebug=-1;
    gameOver=false;
    std::cout<<"Welcome to the Snake game"<<std::endl;
    while(!gameOver)
    {
        // Utils::Utils::drawBoard();
        Core::Core::play();
        std::cout<<"In mainloop, enter any int and hit enter"<<std::endl;
        std::cin>>tempDebug;
    }

    return EXIT_SUCCESS;
}