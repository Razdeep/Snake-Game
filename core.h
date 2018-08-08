#ifndef __CORE_H
#define __CORE_H
#include"utils.h"
#include"snake.h"
namespace Core{
    class Core{
        public:
        static char matrix[Utils::Utils::BOARD_HEIGHT][Utils::Utils::BOARD_WIDTH];
        static Utils::Utils::Direction direction;
        static void init();
        static void play();
        static void getInput();
        static void updateMatrix();
        static void draw(const Snake&);

    };
};
#endif