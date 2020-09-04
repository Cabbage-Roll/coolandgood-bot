#ifndef KB_HPP
#define KB_HPP
#include <windows.h>
#include <iostream>
void kb(short d, bool m){
    int mu=0;
    if(d==VK_DOWN)
        mu=16;
    INPUT ip;
    int im;
    ip.type = INPUT_KEYBOARD;
    ip.ki.wScan = 0;
    ip.ki.time = 0;
    ip.ki.dwExtraInfo = 0;
    ip.ki.wVk = d;
    for(im=0;im<=3*m;im++){
    ip.ki.dwFlags = 0;
    SendInput(1, &ip, sizeof(INPUT));
    Sleep(1+mu);
    ip.ki.dwFlags = KEYEVENTF_KEYUP;
    SendInput(1, &ip, sizeof(INPUT));
    Sleep(166-133*m);
    }
}
#endif
