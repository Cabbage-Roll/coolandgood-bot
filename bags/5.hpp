#ifndef BAG5_HPP
#define BAG5_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
#include <iostream>
void b5(char* bag){
    if(bag[1]==z){
        if(i_placed){
            if(j_placed){
                kb(right,0);
                kb(right,0);
                kb(cw,0);
                kb(VK_DOWN,0);
                kb(left,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }else{
                kb(right,1);
                kb(VK_DOWN,0);
                kb(left,0);
                kb(VK_UP,0);
                kb(left,0);
                kb(left,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }
        }else{
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }
    }else if(bag[1]==l){
        if(j_placed==false || s_placed==false){
            codehold(bag);

        }else{
            kb(VK_UP,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }
    }else if(bag[1]==o){
        kb(left,1);
        kb(VK_SPACE,0);
        o_placed=true;
        holded=false;
    }else if(bag[1]==s){
        if(z_placed && (j_placed || t_placed || holded)){
            kb(right,1);
            kb(left,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==i){
        kb(left,0);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;
    }else if(bag[1]==j){
        if((!t_placed && !holded) && (bag[0]!=s && bag[0]!=l)){
            codehold(bag);
        }else{
            kb(cw,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }
    }else if(bag[1]==t){
        if(l_placed && i_placed){
            kb(right,1);
            kb(left,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else if(j_placed || s_placed){
            codehold(bag);
        }else{
            kb(right,1);
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
    }
}

void b5IJ(char* bag){
    if(bag[1]==z){
        if(bag[0]==t && n!=6){
            codehold(bag);
        }else if(l_placed){
            kb(right,1);
            if(s_placed){
                kb(ccw,0);
                kb(VK_DOWN,0);
                kb(ccw,0);
            }else{
                kb(left,0);
            }
            kb(VK_SPACE,0);
            z_placed=true;
            holded=false;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==l){
        if(i_placed){
            kb(ccw,0);
            kb(right,0);
            kb(VK_DOWN,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }else{
            kb(cw,0);
            kb(right,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }
    }else if(bag[1]==o){
        kb(left,1);
        kb(VK_SPACE,0);
        o_placed=true;
        holded=false;
    }else if(bag[1]==s){
        if(bag[0]==t && n!=6){
            codehold(bag);
        }else if(t_placed || (holded && (bag[0]==z || n==6))){
            kb(right,1);
            if(z_placed){
                kb(cw,0);
                kb(left,0);
                kb(VK_DOWN,0);
                kb(cw,0);
            }
            kb(VK_SPACE,0);
            s_placed=true;
            holded=false;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==i){
        if((z_placed && !s_placed) || !(s_placed || l_placed)){
            codehold(bag);
        }else{
            kb(right,1);
            kb(VK_SPACE,0);
            i_placed=true;
            holded=false;
        }
    }else if(bag[1]==j){
        kb(VK_UP,0);
        kb(left,0);
        kb(VK_SPACE,0);
        j_placed=true;
        holded=false;
    }else if(bag[1]==t){
        if(s_placed && z_placed){
            kb(right,1);
            kb(left,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else if(s_placed || z_placed){
            codehold(bag);
        }else{
            kb(right,1);
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }

    }
}

void b5_1(char* bag){
    if(bag[1]==z){
        if(l_placed){
            kb(right,1);
            if(s_placed){
                kb(ccw,0);
                kb(VK_DOWN,0);
                kb(ccw,0);
            }else{
                kb(left,0);
            }
            kb(VK_SPACE,0);
            z_placed=true;
            holded=false;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==l){
        if(i_placed){
            kb(ccw,0);
            kb(right,0);
            kb(VK_DOWN,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }else{
            kb(cw,0);
            kb(right,0);
            kb(VK_SPACE,0);
            l_placed=true;
            holded=false;
        }
    }else if(bag[1]==o){
        kb(left,0);
        kb(VK_SPACE,0);
        o_placed=true;
        holded=false;
    }else if(bag[1]==s){
        if(t_placed || (holded && (bag[0]==z || n==6))){
            kb(right,1);
            if(z_placed){
                kb(cw,0);
                kb(left,0);
                kb(VK_DOWN,0);
                kb(cw,0);
            }
            kb(VK_SPACE,0);
            s_placed=true;
            holded=false;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==i){
        if((o_placed && l_placed) && j_placed){
            kb(right,1);
            kb(VK_SPACE,0);
            i_placed=true;
            holded=false;
        }else{
            codehold(bag);
        }
    }else if(bag[1]==j){
        kb(VK_UP,0);
        kb(left,1);
        kb(VK_SPACE,0);
        j_placed=true;
        holded=false;
    }else if(bag[1]==t){
        if(s_placed && z_placed){
            kb(right,1);
            kb(left,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else if(s_placed || z_placed){
            codehold(bag);
        }else{
            kb(right,1);
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
    }
}
#endif
