#ifndef BAG3_HPP
#define BAG3_HPP
#include "../../piece.hpp"
#include "../../codehold.hpp"
void b3(char* bag){
    switch(bag[1]){
        case 'z':
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
            break;
        case 'l':
            if(t_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }
            break;
        case 'o':
            if(s_placed==false){
                kb(VK_LEFT,1);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                o_placed=true;
            }else{
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                o_placed=true;
            }
            break;
        case 's':
            kb(VK_CCW,0);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
            break;
        case 'i':
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;
            break;
        case 'j':
            if(o_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_LEFT,1);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }
            break;
        case 't':
            if(i_placed==true){
                kb(VK_RIGHT,0);
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
            break;
        }
}
void b3p1(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;
        break;
    case 'l':
        if(t_placed==false){
            codehold(bag);
            n--;
        }else{
            kb(VK_CW,0);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }
        break;
    case 'o':
        kb(VK_LEFT,0);
        kb(VK_LEFT,0);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;
        break;
    case 's':
        if(j_placed){
            kb(VK_CCW,0);
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_CCW,0);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
        break;
    case 'j':
        if(o_placed){
            kb(VK_CW,0);
            kb(VK_LEFT,1);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }
        break;
    case 't':
        if(i_placed==true){
            kb(VK_RIGHT,0);
            kb(VK_CW,0);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            kb(VK_RIGHT,0);
            kb(VK_DOWN,0);
            kb(VK_RIGHT,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
        break;
    }
}
#endif
