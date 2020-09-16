#ifndef BAG2_HPP
#define BAG2_HPP
#include "../../piece.hpp"
#include "../../codehold.hpp"
void b2(char* bag){
    switch(bag[1]){
        case 'z':
            if(s_placed==true && j_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CCW,0);
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }
        break;
        case 'l':
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        break;
        case 'o':
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        break;
        case 's':
            if(j_placed==false){
                if(z_placed==false){
                    kb(VK_RIGHT,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    s_placed=true;
                }else{
                    codehold(bag);
                    n--;
                }
            }else{
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
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
            if(z_placed==false){
                kb(VK_CW,0);
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_LEFT,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }
        break;
        case 't':
            if((l_placed==true && s_placed==true) && j_placed==true){
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_CCW,0);
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

void b2FL(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_CCW,0);
        kb(VK_LEFT,0);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;
        break;
    case 'l':
        if(z_placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,0);
            kb(VK_DOWN,0);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;
        break;
    case 's':
        kb(VK_CW,0);
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        s_placed=true;
        break;
    case 'i':
        if(l_placed){
            if(z_placed){
                if(j_placed){
                    kb(VK_CW,0);
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    if(t_placed){
                        kb(VK_CW,0);
                        kb(VK_LEFT,0);
                    }else{
                        kb(VK_CW,0);
                    }
                    kb(VK_SPACE,0);
                    holded=false;
                    i_placed=true;
                }else{
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    i_placed=true;
                }
            }else{
                kb(VK_SPACE,0);
                holded=false;
                i_placed=true;
            }
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'j':
        if(s_placed){
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
    case 't':
        if(l_placed){
            if(i_placed){
                if(j_placed){
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    kb(VK_RIGHT,0);
                    kb(VK_CCW,0);
                    kb(VK_CCW,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    t_placed=true;
                }else{
                    codehold(bag);
                    n--;
                }
            }else if(j_placed){
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_RIGHT,0);
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }else if(j_placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,0);
            kb(VK_DOWN,0);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else if(holded){
            kb(VK_RIGHT,0);
            kb(VK_RIGHT,0);
            kb(VK_UP,0);
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
ztjislo
**/
#endif
