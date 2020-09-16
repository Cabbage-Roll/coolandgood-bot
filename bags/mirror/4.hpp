#ifndef BAG4_HPP
#define BAG4_HPP
#include "../../piece.hpp"
#include "../../codehold.hpp"
void b4(char* bag){
switch(bag[1]){
        case 'z':
            if(o_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }
            break;
        case 'l':
            if(s_placed==true && z_placed==true){
                kb(VK_CW,0);
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }else if(s_placed==true){
                kb(VK_LEFT,1);
                kb(VK_UP,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }else{
                codehold(bag);
                n--;
            }
            break;
        case 'o':
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
            break;
        case 's':
            if(z_placed==false){
                kb(VK_LEFT,1);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }else{
                kb(VK_CCW,0);
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }
            break;
        case 'i':
            kb(VK_CW,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;
            break;
        case 'j':
            kb(VK_CW,0);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
            break;
        case 't':
            if(i_placed==false || j_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_RIGHT,1);
                kb(VK_CCW,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
            break;
        }
}
void b4ZS(char* bag){
    switch(bag[1]){
    case 'z':
        if(l_placed){
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }else{
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }
        break;
    case 'l':
        if(o_placed){
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;
        break;
    case 's':
        if(z_placed){
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
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
    case 'j':
        kb(VK_CW,0);
        kb(VK_RIGHT,0);
        kb(VK_SPACE,0);
        holded=false;
        j_placed=true;
        break;
    case 't':
        if(i_placed && j_placed){
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CW,0);
            kb(VK_CW,0);
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
/**
siztojl
**/
#endif
