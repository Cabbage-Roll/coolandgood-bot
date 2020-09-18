#ifndef BAG4_HPP
#define BAG4_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b4(char* bag){
if(bag[1]==z){

            if(o_placed==false){
                codehold(bag);

            }else{
                kb(left,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }

        }else if(bag[1]==l){
            if(s_placed==true && z_placed==true){
                kb(cw,0);
                kb(left,1);
                kb(VK_DOWN,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }else if(s_placed==true){
                kb(left,1);
                kb(VK_UP,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }else{
                codehold(bag);

            }

        }else if(bag[1]==o){
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;

        }else if(bag[1]==s){
            if(z_placed==false){
                kb(left,1);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }else{
                kb(ccw,0);
                kb(left,1);
                kb(VK_DOWN,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }

        }else if(bag[1]==i){
            kb(cw,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;

        }else if(bag[1]==j){
            kb(cw,0);
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;

        }else if(bag[1]==t){
            if(i_placed==false || j_placed==false){
                codehold(bag);

            }else{
                kb(right,1);
                kb(ccw,0);
                kb(VK_DOWN,0);
                kb(cw,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }
        }

void b4ZS(char* bag){
    if(bag[1]==z){

        if(l_placed){
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }else{
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;
        }

    }else if(bag[1]==l){
        if(o_placed){
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            codehold(bag);

        }

    }else if(bag[1]==o){
        kb(left,1);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;

    }else if(bag[1]==s){
        if(z_placed){
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);

        }

    }else if(bag[1]==i){
        kb(cw,0);
        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;

    }else if(bag[1]==j){
        kb(cw,0);
        kb(right,0);
        kb(VK_SPACE,0);
        holded=false;
        j_placed=true;

    }else if(bag[1]==t){
        if(i_placed && j_placed){
            kb(right,1);
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(cw,0);
            kb(cw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);

        }
    }
    }

/**
siztojl
**/
#endif
