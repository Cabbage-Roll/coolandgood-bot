#ifndef BAG5_HPP
#define BAG5_HPP
#include "../../piece.hpp"
#include "../../codehold.hpp"
void b5(char* bag){
switch(bag[1]){
        case 'z':
            if(i_placed){
                if(j_placed){
                    kb(VK_RIGHT,0);
                    kb(VK_RIGHT,0);
                    kb(VK_CW,0);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_CW,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    z_placed=true;
                }else{
                    kb(VK_RIGHT,1);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_UP,0);
                    kb(VK_LEFT,1);
                    kb(VK_SPACE,0);
                    holded=false;
                    z_placed=true;
                }
            }else{
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }
            break;
        case 'l':
            if(j_placed==false || s_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_UP,0);
                kb(VK_RIGHT,1);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }
            break;
        case 'o':
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            o_placed=true;
            holded=false;
            break;
        case 's':
            if(t_placed==false || z_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_RIGHT,1);
                kb(VK_LEFT,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }
            break;
        case 'i':
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;
            break;
        case 'j':
            if(t_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_RIGHT,1);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }
            break;
        case 't':
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
            break;
        }
}
/**bags that dont work cuz no t spin
iojszlt
**/

void b5IJ(char* bag){
    switch(bag[1]){
    case 'z':
        if(l_placed){
            kb(VK_RIGHT,1);
            if(s_placed){
                kb(VK_CCW,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
            }else{
                kb(VK_LEFT,0);
            }
            kb(VK_SPACE,0);
            z_placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'l':
        if(i_placed){
            kb(VK_CCW,0);
            kb(VK_RIGHT,0);
            kb(VK_DOWN,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }else{
            kb(VK_CW,0);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        o_placed=true;
        holded=false;
        break;
    case 's':
        if(t_placed){
            kb(VK_RIGHT,1);
            if(z_placed){
                kb(VK_CW,0);
                kb(VK_LEFT,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
            }
            kb(VK_SPACE,0);
            s_placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        if(l_placed || s_placed){
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            i_placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'j':
        kb(VK_UP,0);
        kb(VK_LEFT,0);
        kb(VK_SPACE,0);
        j_placed=true;
        holded=false;
        break;
    case 't':
        kb(VK_RIGHT,1);
        kb(VK_CCW,0);
        kb(VK_DOWN,0);
        kb(VK_CCW,0);
        kb(VK_SPACE,0);
        holded=false;
        t_placed=true;
        break;
    }
}
/**
jilozst
osizjlt
**/
#endif
