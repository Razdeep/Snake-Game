#ifndef __UTILS_H
#define __UTILS_H
namespace Utils{
    class Utils{
        public:
        enum Direction{NORTH,SOUTH,EAST,WEST};
        static void showBanner();
        static void drawBoard();
        static void getInput();
        static void delay(const int);
    };
};
#endif