#ifndef __UTILS_H
#define __UTILS_H
namespace Utils{
    class Utils{
        public:
        const static int BOARD_HEIGHT=20,BOARD_WIDTH=20;
        enum Direction{NORTH=0,SOUTH,EAST,WEST};
        static void showBanner();
        static void drawBoard();
        static void getInput();
        static void delay(const int);
    };
};
#endif