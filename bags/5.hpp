#ifndef BAG5_HPP
#define BAG5_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b5(char* bag){
switch(bag[1]){
        case 'z':
            if(i.placed){
                if(j.placed){
                    kb(VK_RIGHT,0);
                    kb(VK_RIGHT,0);
                    kb(VK_CW,0);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_CW,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    z.placed=true;
                }else{
                    kb(VK_RIGHT,1);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_UP,0);
                    kb(VK_LEFT,1);
                    kb(VK_SPACE,0);
                    holded=false;
                    z.placed=true;
                }
            }else{
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                z.placed=true;
            }
            break;
        case 'l':
            if(j.placed==false || s.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_UP,0);
                kb(VK_RIGHT,1);
                kb(VK_SPACE,0);
                holded=false;
                l.placed=true;
            }
            break;
        case 'o':
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            o.placed=true;
            holded=false;
            break;
        case 's':
            if(t.placed==false || z.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_RIGHT,1);
                kb(VK_LEFT,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                s.placed=true;
            }
            break;
        case 'i':
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            i.placed=true;
            break;
        case 'j':
            if(t.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_RIGHT,1);
                kb(VK_SPACE,0);
                holded=false;
                j.placed=true;
            }
            break;
        case 't':
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            t.placed=true;
            break;
        }
}

void b5IJ(char* bag){
    switch(bag[1]){
    case 'z':
        if(l.placed){
            kb(VK_RIGHT,1);
            if(s.placed){
                kb(VK_CCW,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
            }else{
                kb(VK_LEFT,0);
            }
            kb(VK_SPACE,0);
            z.placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'l':
        kb(VK_CW,0);
        kb(VK_RIGHT,0);
        kb(VK_SPACE,0);
        l.placed=true;
        holded=false;
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        o.placed=true;
        holded=false;
        break;
    case 's':
        if(t.placed){
            kb(VK_RIGHT,1);
            if(z.placed){
                kb(VK_CW,0);
                kb(VK_LEFT,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
            }
            kb(VK_SPACE,0);
            s.placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        if(j.placed || s.placed){
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            i.placed=true;
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
        j.placed=true;
        holded=false;
        break;
    case 't':
        kb(VK_RIGHT,1);
        kb(VK_CCW,0);
        kb(VK_DOWN,0);
        kb(VK_CCW,0);
        kb(VK_SPACE,0);
        holded=false;
        t.placed=true;
        break;
    }
}
/**
jilozst
osizjlt
**/
#endif
