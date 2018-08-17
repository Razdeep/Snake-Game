#ifndef CORE_H_
#define CORE_H_
#include"utils.h"
#include"snake.h"
namespace Core{
    class Core{
        public:
        static void init();
        static void play();
        static void getInput();
        static void updateMatrix();
        static void draw(const Snake&);

    };
};
#endif