#ifndef CODESHIFT_HPP
#define CODESHIFT_HPP
#include "piece.hpp"
#include <windows.h>
void codeshift(char* bag){
    bag[1]=bag[2];
    bag[2]=bag[3];
    bag[3]=bag[4];
    bag[4]=bag[5];
    bag[5]=bag[6];
    Sleep(1);
    screen = GetDC(desktop);
    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[6]=determinepiece(pixel);
    ReleaseDC(NULL, screen);
}
#endif
