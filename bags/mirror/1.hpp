#ifndef MBAG1_HPP
#define MBAG1_HPP
#include "../../piece.hpp"
#include "../../codehold.hpp"
void mb1(char* bag){
    switch(bag[1]){
    case 's':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        s_placed=true;
        break;
    case 'j':
        if(o_placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'o':
        if(l_placed){
            kb(VK_RIGHT,1);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'z':
        if(s_placed){
            kb(VK_CCW,0);
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
        break;
    case 'l':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        l_placed=true;
        break;
    case 't':
        if(i_placed){
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    }
}

void mb1LOJ(char* bag){
    switch(bag[1]){
    case 's':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        s_placed=true;
        break;
    case 'j':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        j_placed=true;
        break;
    case 'o':
        if(j_placed){
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'z':
        if(s_placed){
            kb(VK_CCW,0);
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
        break;
    case 'l':
        if(o_placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 't':
        if(i_placed){
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    }
}

void mb12(char* bag){
    switch(bag[1]){
    case 's':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        s_placed=true;
        break;
    case 'j':
        if(l_placed){
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'o':
        if(j_placed){
            kb(VK_RIGHT,1);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'z':
        if(s_placed){
            kb(VK_CCW,0);
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_CW,0);
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
        break;
    case 'l':
        kb(VK_RIGHT,1);
        kb(VK_LEFT,0);
        kb(VK_SPACE,0);
        holded=false;
        l_placed=true;
        break;
    case 't':
        if(j_placed){
            kb(VK_LEFT,0);
            kb(VK_LEFT,0);
            if(s_placed){
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }else{
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
        break;
    }
}
#endif
