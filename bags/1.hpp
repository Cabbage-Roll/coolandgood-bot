#ifndef BAG1_HPP
#define BAG1_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b1(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        z.placed=true;
        break;
    case 'l':
        if(o.placed){
            kb(VK_UP,0);
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
        if(j.placed){
            kb(VK_LEFT,1);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            o.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 's':
        if(z.placed){
            kb(VK_CW,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            s.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_SPACE,0);
        holded=false;
        i.placed=true;
        break;
    case 'j':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        j.placed=true;
        break;
    case 't':
        if(i.placed){
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

void b1LOJ(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        z.placed=true;
        break;
    case 'l':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        l.placed=true;
        break;
    case 'o':
        if(l.placed){
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            o.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 's':
        if(z.placed){
            kb(VK_CW,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            s.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_SPACE,0);
        holded=false;
        i.placed=true;
        break;
    case 'j':
        if(o.placed){
            kb(VK_UP,0);
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            j.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 't':
        if(i.placed){
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

void b12(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        z.placed=true;
        break;
    case 'l':
        if(j.placed){
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            l.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'o':
        if(l.placed){
            kb(VK_LEFT,1);
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            o.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 's':
        if(z.placed){
            kb(VK_CW,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            s.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'i':
        kb(VK_CCW,0);
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        i.placed=true;
        break;
    case 'j':
        kb(VK_LEFT,1);
        kb(VK_RIGHT,0);
        kb(VK_SPACE,0);
        holded=false;
        j.placed=true;
        break;
    case 't':
        if(l.placed){
            kb(VK_RIGHT,0);
            kb(VK_RIGHT,0);
            if(z.placed){
                kb(VK_CCW,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }else{
                kb(VK_DOWN,0);
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }
        }else{
            kb(VK_RIGHT,0);
            kb(VK_SPACE,0);
            holded=false;
            t.placed=true;
        }
        break;
    }
}
#endif
