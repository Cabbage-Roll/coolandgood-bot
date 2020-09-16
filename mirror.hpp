#ifndef MIRROR_HPP
#define MIRROR_HPP
#include "piece.hpp"
#include "kb.hpp"
void normal(){
    left=VK_LEFT;
    right=VK_RIGHT;
    cw=VK_CW;
    ccw=VK_CCW;
    z='z';
    l='l';
    o='o';
    s='s';
    i='i';
    j='j';
    t='t';
    mirr=false;
}

void mirror(){
    left=VK_RIGHT;
    right=VK_LEFT;
    cw=VK_CCW;
    ccw=VK_CW;
    z='s';
    l='j';
    o='o';
    s='z';
    i='i';
    j='l';
    t='t';
    mirr=true;
}

void mk(char* bag){
    if(bag[1]=='z' || bag[1]=='l' || bag[1]=='s' || bag[1]=='j' || bag[1]=='t'){
        kb(VK_RIGHT,0);
    }
}
#endif
