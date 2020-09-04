#ifndef BAG3_HPP
#define BAG3_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b3(char* bag){
switch(bag[1]){
        case 'z':
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            z.placed=true;
            break;
        case 'l':
            if(t.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                l.placed=true;
            }
            break;
        case 'o':
            if(s.placed==false){
                kb(VK_LEFT,1);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                o.placed=true;
            }else{
                kb(VK_LEFT,1);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_SPACE,0);
                holded=false;
                o.placed=true;
            }
            break;
        case 's':
            kb(VK_CCW,0);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            s.placed=true;
            break;
        case 'i':
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            i.placed=true;
            break;
        case 'j':
            if(o.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CW,0);
                kb(VK_LEFT,1);
                kb(VK_SPACE,0);
                holded=false;
                j.placed=true;
            }
            break;
        case 't':
            if(i.placed==true){
                kb(VK_RIGHT,0);
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }
            break;
        }
}
void b3p1(char* bag){
    switch(bag[1]){
    case 'z':
        break;
    case 'l':
        break;
    case 'o':
        break;
    case 's':
        break;
    case 'i':
        break;
    case 'j':
        break;
    case 't':
        break;
    }
}
#endif
