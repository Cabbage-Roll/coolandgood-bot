#ifndef BAG3_HPP
#define BAG3_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b3(char* bag){
    if(bag[1]==z){

            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            z_placed=true;

        }else if(bag[1]==l){
            if(t_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(cw,0);
                kb(right,0);
                kb(VK_SPACE,0);
                holded=false;
                l_placed=true;
            }

        }else if(bag[1]==o){
            if(s_placed==false){
                kb(left,1);
                kb(right,0);
                kb(VK_SPACE,0);
                holded=false;
                o_placed=true;
            }else{
                kb(left,1);
                kb(VK_DOWN,0);
                kb(right,0);
                kb(VK_SPACE,0);
                holded=false;
                o_placed=true;
            }

        }else if(bag[1]==s){
            kb(ccw,0);
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;

        }else if(bag[1]==i){
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;

        }else if(bag[1]==j){
            if(o_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(cw,0);
                kb(left,1);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }

        }else if(bag[1]==t){
            if(i_placed==true){
                kb(right,0);
                kb(cw,0);
                kb(VK_DOWN,0);
                kb(ccw,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(right,0);
                kb(VK_DOWN,0);
                kb(right,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }
        }

void b3p1(char* bag){
    if(bag[1]==z){

        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;

    }else if(bag[1]==l){
        if(t_placed==false){
            codehold(bag);
            n--;
        }else{
            kb(cw,0);
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }

    }else if(bag[1]==o){
        kb(left,0);
        kb(left,0);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;

    }else if(bag[1]==s){
        if(j_placed){
            kb(ccw,0);
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            s_placed=true;
        }else{
            codehold(bag);
            n--;
        }

    }else if(bag[1]==i){
        kb(ccw,0);
        kb(VK_SPACE,0);
        holded=false;
        i_placed=true;

    }else if(bag[1]==j){
        if(o_placed){
            kb(cw,0);
            kb(left,1);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }

    }else if(bag[1]==t){
        if(i_placed==true){
            kb(right,0);
            kb(cw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            kb(right,0);
            kb(VK_DOWN,0);
            kb(right,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }
    }
    }

#endif
