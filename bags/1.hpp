#ifndef BAG1_HPP
#define BAG1_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b1(char* bag){

    if(bag[1]==z){
        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;
    }else if(bag[1]==l){
        if(o_placed){
            kb(VK_UP,0);
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==o){
        if(j_placed){
            kb(left,1);
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==s){
        if(z_placed){
            kb(cw,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==i){
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
    }else if(bag[1]==j){
        kb(left,1);
        kb(VK_SPACE,0);
        holded=false;
        j_placed=true;
    }else if(bag[1]==t){
        if(i_placed){
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);

        }
    }
}
void b1LOJ(char* bag){
    if(bag[1]==z){
        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;
    }else if(bag[1]==l){
        kb(left,1);
        kb(VK_SPACE,0);
        holded=false;
        l_placed=true;
    }else if(bag[1]==o){
        if(l_placed){
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==s){
        if(z_placed){
            kb(cw,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==i){
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
    }else if(bag[1]==j){
        if(o_placed){
            kb(VK_UP,0);
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==t){
        if(i_placed){
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);

        }
    }
}

void b12(char* bag){
    if(bag[1]==z){
        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;
    }else if(bag[1]==l){
        if(j_placed){
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==o){
        if(l_placed){
            kb(left,1);
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==s){
        if(z_placed){
            kb(cw,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);

        }
    }else if(bag[1]==i){
        kb(ccw,0);
        kb(left,1);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
    }else if(bag[1]==j){
        kb(left,1);
        kb(right,0);
        kb(VK_SPACE,0);
        holded=false;
        j_placed=true;
    }else if(bag[1]==t){
        if(l_placed){
            kb(right,0);
            kb(right,0);
            if(z_placed){
                kb(ccw,0);
                kb(VK_DOWN,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(VK_DOWN,0);
                kb(left,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }else{
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
    }
}
#endif
