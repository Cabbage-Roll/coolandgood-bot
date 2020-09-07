#ifndef BAG4_HPP
#define BAG4_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b4(char* bag){
switch(bag[1]){
        case 'z':
            if(o.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                z.placed=true;
            }
            break;
        case 'l':
            if(s.placed==true && z.placed==true){
                kb(VK_CW,0);
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                l.placed=true;
            }else if(s.placed==true){
                kb(VK_LEFT,1);
                kb(VK_UP,0);
                kb(VK_SPACE,0);
                holded=false;
                l.placed=true;
            }else{
                codehold(bag);
                n--;
            }
            break;
        case 'o':
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            o.placed=true;
            break;
        case 's':
            if(z.placed==false){
                kb(VK_LEFT,1);
                kb(VK_SPACE,0);
                holded=false;
                s.placed=true;
            }else{
                kb(VK_CCW,0);
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                s.placed=true;
            }
            break;
        case 'i':
            kb(VK_CW,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            i.placed=true;
            break;
        case 'j':
            kb(VK_CW,0);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            j.placed=true;
            break;
        case 't':
            if(i.placed==false || j.placed==false){
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
                t.placed=true;
            }
            break;
        }
}
void b4ZS(char* bag){
    switch(bag[1]){
    case 'z':
        if(l.placed){
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            z.placed=true;
        }else{
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            z.placed=true;
        }
        break;
    case 'l':
        if(o.placed){
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            l.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        o.placed=true;
        break;
    case 's':
        if(z.placed){
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            s.placed=true;
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
        i.placed=true;
        break;
    case 'j':
        kb(VK_CW,0);
        kb(VK_RIGHT,0);
        kb(VK_SPACE,0);
        holded=false;
        j.placed=true;
        break;
    case 't':
        if(i.placed && j.placed){
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_DOWN,0);
            kb(VK_CW,0);
            kb(VK_CW,0);
            kb(VK_SPACE,0);
            holded=false;
            t.placed=true;
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
