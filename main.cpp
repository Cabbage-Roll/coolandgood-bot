#include <iostream>
#define WINVER 0x0500
#include <windows.h>
#include <bits/stdc++.h>
#include <fstream>

#include "piece.hpp"
#include "determinepiece.hpp"
#include "kb.hpp"
#include "codehold.hpp"
#include "pos.hpp"

#include "bags/1.hpp"
#include "bags/2.hpp"
#include "bags/3.hpp"
#include "bags/4.hpp"
#include "bags/5.hpp"

using namespace std;

HWND desktop = GetDesktopWindow();
HDC screen;
unsigned long pixel;

void codeshift(char* bag){
    bag[1]=bag[2];
    bag[2]=bag[3];
    bag[3]=bag[4];
    bag[4]=bag[5];
    bag[5]=bag[6];
    Sleep(1);
    screen = GetDC(desktop);
    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[6]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));
    ReleaseDC(NULL, screen);
}

void codeflush(char* bag){
    z.placed=false;
    l.placed=false;
    o.placed=false;
    s.placed=false;
    i.placed=false;
    j.placed=false;
    t.placed=false;
    codeshift(bag);
}
void debug1(char* bag){
    cout<<"holds: "<<hold<<"\n";
    cout<<"all:"<<bag[0]<<bag[1]<<bag[2]<<bag[3]<<bag[4]<<bag[5]<<bag[6]<<"\n";
    cout<<"placed zlosijt:"<<z.placed<<l.placed<<o.placed<<s.placed<<i.placed<<j.placed<<t.placed<<"\n";
    cout<<"\n";
}

void debug2(char* bag){
    cout<<"n: "<<n<<"\n";
    cout<<"holded: "<<holded<<"\n";
    cout<<"\n";
}

void commoncode(char* bag){
    if((n>0 && holded==false) || hold==1){
        codeshift(bag);
        }

    if(n==6 && hold>0){
        codehold(bag);
    }

}

int main()
{
    ifstream config;
    config.open("config.txt", ios::in);
    for(n=0;n<10;n++){
        config>>cfg[n];
        cout<<cfg[n]<<endl;
    }
    char* bag=(char*)malloc(sizeof(char)*7);
    bag[0]='x';
    ///wait for B keypress
    short waitfor=0x42;
    while(1){
        if(GetAsyncKeyState(waitfor))
        break;
        Sleep(10);
    }
    cout<<"B PRESSED"<<"\n";

    ///scan the state of board during countdown
    ///can be shortened
    screen = GetDC(desktop);
    pixel = GetPixel(screen, cfg[5], cfg[0]);
    bag[1]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));

    pixel = GetPixel(screen, cfg[5], cfg[1]);
    bag[2]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));

    pixel = GetPixel(screen, cfg[5], cfg[2]);
    bag[3]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));

    pixel = GetPixel(screen, cfg[5], cfg[3]);
    bag[4]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));

    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[5]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));


    ///wait for match to start, by detecting if a piece spawned
    do{
        ReleaseDC(NULL, screen);
        screen = GetDC(desktop);
        pixel = GetPixel(screen, cfg[5]-cfg[6], cfg[7]);
        Sleep(1);
    }while(GetGValue(pixel)==0);
    ///scan the 5th piece of next queue again

    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[6]=determinepiece(GetRValue(pixel), GetGValue(pixel), GetBValue(pixel));


    ReleaseDC(NULL, screen);

    ///Special 1st bag
    if((pos('o',bag)<pos('j',bag) || pos('o',bag)<pos('l',bag)) && pos('o',bag)+pos('t',bag)!=3){
        if(pos('j',bag)<pos('l',bag)){
            for(n=0;n<7;n++){
                commoncode(bag);
                b1(bag);
            }
        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b1LOJ(bag);
            }
        }
    }else{
        for(n=0;n<7;n++){
            commoncode(bag);
            b12(bag);
        }
    }
    while(1){
        ///2nd bag
        codeflush(bag);
        if(pos('j',bag)<pos('z',bag) || pos('j',bag)<pos('s',bag)){
            for(n=0;n<7;n++){
                commoncode(bag);
                if(((bag[0]=='o' || bag[0]=='j') && n<6) && holded==false){
                    codehold(bag);
                    n--;
                    continue;
                }
                b2(bag);
            }

        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b2FL(bag);
            }

        }
        ///3rd bag
        codeflush(bag);
        if(pos('o',bag)<pos('j',bag) || pos('t',bag)<pos('l',bag)){
            for(n=0;n<7;n++){
                commoncode(bag);
                b3(bag);
            }
        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b3p1(bag);
            }
        }
        ///4th bag
        codeflush(bag);
        if(pos('z',bag)<pos('s',bag) && pos('z',bag)<pos('o',bag)){
            for(n=0;n<7;n++){
                commoncode(bag);
                b4ZS(bag);
            }
        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b4(bag);
            }
        }
        ///5th bag
        codeflush(bag);
        if(pos('z',bag)<pos('l',bag)){
            for(n=0;n<7;n++){
                commoncode(bag);
                b5(bag);
            }
        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b5IJ(bag);
            }
        }
        ///1st bag
        codeflush(bag);
        if((pos('o',bag)<pos('j',bag) || pos('o',bag)<pos('l',bag)) && pos('o',bag)+pos('t',bag)!=3){
            if(pos('j',bag)<pos('l',bag)){
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1(bag);
                }
            }else{
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1LOJ(bag);
                }
            }
        }else{
            for(n=0;n<7;n++){
                commoncode(bag);
                b12(bag);
            }
        }
    }
    return 0;
}
