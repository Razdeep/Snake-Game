// This file is for unit testing
// For now I would like to skip using google test
// as I am facing some issues with it
// I would be using manual compile shell script instead.

// test.cpp

#include<iostream>
#include"snake.h"
using namespace std;
void printSnakeLocation(const Snake& snake)
{
    cout<<"Current Location of the snake is (";
    cout<<snake.getHead().getX()<<","<<snake.getHead().getY()<<")"<<endl;
}
int main(int argc,char** argv)
{
    Snake snake;

    printSnakeLocation(snake);
    snake.forward();
    printSnakeLocation(snake);
    
    snake.setDirection(Utils::Utils::Direction::EAST);
    snake.forward();
    printSnakeLocation(snake);
    return EXIT_SUCCESS;
}
