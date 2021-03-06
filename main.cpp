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
#include "codeshift.hpp"
#include "codeflush.hpp"
#include "commoncode.hpp"
#include "mirror.hpp"

#include "bags/1.hpp"
#include "bags/2.hpp"
#include "bags/3.hpp"
#include "bags/4.hpp"
#include "bags/5.hpp"

using namespace std;

int main()
{
    ifstream config;
    config.open("config.txt");
    for(n=0;n<10;n++){
        config>>cfg[n];
    }
    config.close();
    char* bag=(char*)malloc(sizeof(char)*7);
    bag[0]='x';
    while(1){
        if(GetAsyncKeyState(0x42))
            break;
        Sleep(10);
    }
    cout<<"B PRESSED"<<"\n";
    screen = GetDC(desktop);
    pixel = GetPixel(screen, cfg[5], cfg[0]);
    bag[1]=determinepiece(pixel);
    pixel = GetPixel(screen, cfg[5], cfg[1]);
    bag[2]=determinepiece(pixel);
    pixel = GetPixel(screen, cfg[5], cfg[2]);
    bag[3]=determinepiece(pixel);
    pixel = GetPixel(screen, cfg[5], cfg[3]);
    bag[4]=determinepiece(pixel);
    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[5]=determinepiece(pixel);
    do{
        ReleaseDC(NULL, screen);
        screen = GetDC(desktop);
        pixel = GetPixel(screen, cfg[5]-cfg[6], cfg[7]);
        Sleep(17);
    }while(GetGValue(pixel)==0);
    pixel = GetPixel(screen, cfg[5], cfg[4]);
    bag[6]=determinepiece(pixel);
    ReleaseDC(NULL, screen);


    normal();
    ///Special 1st bag plus

    if(pos(s,bag)<pos(z,bag)){
        mirror();
        cout<<"mirror"<<endl;
    }
        if((pos(o,bag)<pos(j,bag) || pos(o,bag)<pos(l,bag)) && pos(o,bag)+pos(t,bag)!=3){
                ///tzsoijl
            if(pos(j,bag)<pos(l,bag)){
                cout<<"b1 chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1(bag);
                }
            }else{
                cout<<"b1LOJ chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1LOJ(bag);
                }
            }
        }else{
            cout<<"b12 chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                b12(bag);
            }
        }

    while(1){
        ///2nd bag
        codeflush(bag);
        if(pos(j,bag)<pos(z,bag) || pos(j,bag)<pos(s,bag)){
            cout<<"b2 chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                if(((bag[0]==o || bag[0]==j) && n<6) && holded==false){
                    codehold(bag);
                    continue;
                }
                b2(bag);
            }

        }else{
            cout<<"b2FL chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                b2FL(bag);
            }

        }
        ///3rd bag
        codeflush(bag);
        if((pos(o,bag)<pos(j,bag) || pos(t,bag)<pos(l,bag)) || pos(o,bag)==1){
            cout<<"b3 chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                b3(bag);
            }
        }else{
            cout<<"b3p1 chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                b3p1(bag);
                path1=true;
            }
        }
        ///4th bag
        codeflush(bag);
        if(path1==false){
            if(pos(z,bag)<pos(s,bag) && pos(z,bag)<pos(o,bag)){
                cout<<"b4ZS chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b4ZS(bag);
                }
            }else{
                cout<<"b4 chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b4(bag);
                }
            }
        }else{
            if(pos(s,bag)<pos(z,bag)){
                cout<<"b4_15 chosen"<<endl;
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b4_15(bag);
                }
            }else{
                cout<<"b4_16 chosen"<<endl;
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b4_16(bag);
                }
            }
        }
        ///5th bag
        codeflush(bag);
        if(path1==true){
            cout<<"b5_1 chosen"<<endl;
            for(n=0;n<7;n++){
                commoncode(bag);
                b5_1(bag);
            }
        }else{
            if((pos(z,bag)<pos(l,bag) || pos(z,bag)<pos(s,bag)) && pos(j,bag)+pos(l,bag)>5){
                cout<<"b5 chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b5(bag);
                }
            }else{
                cout<<"b5IJ chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b5IJ(bag);
                }
            }
        }
        normal();
        if(pos(s,bag)<pos(z,bag)){
        mirror();
        cout<<"mirror"<<endl;
        }

        ///1st bag
        codeflush(bag);
        if((pos(o,bag)<pos(j,bag) || pos(o,bag)<pos(l,bag)) && (pos(o,bag)+pos(t,bag)!=3 && pos(s,bag)+pos(t,bag)!=3)){
            if(pos(j,bag)<pos(l,bag)){
                cout<<"b1 chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1(bag);
                }
            }else{
                cout<<"b1LOJ chosen\n";
                for(n=0;n<7;n++){
                    commoncode(bag);
                    b1LOJ(bag);
                }
            }
        }else{
            cout<<"b12 chosen\n";
            for(n=0;n<7;n++){
                commoncode(bag);
                b12(bag);
            }
        }
    }

    return 0;
}
