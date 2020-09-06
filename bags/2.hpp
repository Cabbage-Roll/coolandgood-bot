#ifndef BAG2_HPP
#define BAG2_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b2(char* bag){
    switch(bag[1]){
        case 'z':
            if(s.placed==true && j.placed==false){
                codehold(bag);
                n--;
            }else{
                kb(VK_CCW,0);
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                z.placed=true;
            }
        break;
        case 'l':
            kb(VK_RIGHT,1);
            kb(VK_CCW,0);
            kb(VK_SPACE,0);
            holded=false;
            l.placed=true;
        break;
        case 'o':
            kb(VK_LEFT,1);
            kb(VK_SPACE,0);
            holded=false;
            o.placed=true;
        break;
        case 's':
            if(j.placed==false){
                if(z.placed==false){
                    kb(VK_RIGHT,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    s.placed=true;
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
            if(z.placed==false){
                kb(VK_CW,0);
                kb(VK_LEFT,0);
                kb(VK_SPACE,0);
                holded=false;
                j.placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_LEFT,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                j.placed=true;
            }
        break;
        case 't':
            if((l.placed==true && s.placed==true) && j.placed==true){
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_CCW,0);
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

void b2FL(char* bag){
    switch(bag[1]){
    case 'z':
        kb(VK_CCW,0);
        kb(VK_LEFT,0);
        kb(VK_SPACE,0);
        holded=false;
        z.placed=true;
        break;
    case 'l':
        if(z.placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,0);
            kb(VK_DOWN,0);
            kb(VK_LEFT,0);
            kb(VK_SPACE,0);
            holded=false;
            l.placed=true;
        }else{
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            l.placed=true;
        }
        break;
    case 'o':
        kb(VK_LEFT,1);
        kb(VK_SPACE,0);
        holded=false;
        o.placed=true;
        break;
    case 's':
        kb(VK_CW,0);
        kb(VK_RIGHT,1);
        kb(VK_SPACE,0);
        holded=false;
        s.placed=true;
        break;
    case 'i':
        if(l.placed){
            if(z.placed){
                if(j.placed){
                    kb(VK_CW,0);
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    if(t.placed){
                        kb(VK_CW,0);
                        kb(VK_LEFT,0);
                    }else{
                        kb(VK_CW,0);
                    }
                    kb(VK_SPACE,0);
                    holded=false;
                    i.placed=true;
                }else{
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    kb(VK_LEFT,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    i.placed=true;
                }
            }else{
                kb(VK_SPACE,0);
                holded=false;
                i.placed=true;
            }
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 'j':
        if(s.placed){
            kb(VK_UP,0);
            kb(VK_RIGHT,1);
            kb(VK_SPACE,0);
            holded=false;
            j.placed=true;
        }else{
            codehold(bag);
            n--;
        }
        break;
    case 't':
        if(l.placed){
            if(i.placed){
                if(j.placed){
                    kb(VK_RIGHT,0);
                    kb(VK_DOWN,0);
                    kb(VK_RIGHT,0);
                    kb(VK_CCW,0);
                    kb(VK_CCW,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    t.placed=true;
                }else{
                    codehold(bag);
                    n--;
                }
            }else if(j.placed){
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_RIGHT,0);
                kb(VK_CCW,0);
                kb(VK_RIGHT,0);
                kb(VK_DOWN,0);
                kb(VK_CCW,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }else{
                kb(VK_RIGHT,0);
                kb(VK_RIGHT,0);
                kb(VK_CW,0);
                kb(VK_DOWN,0);
                kb(VK_CW,0);
                kb(VK_SPACE,0);
                holded=false;
                t.placed=true;
            }
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
