#ifndef BAG5_HPP
#define BAG5_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
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
                    kb(left,1);
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
                n--;
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
            if(t_placed==false || z_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(right,1);
                kb(left,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                s_placed=true;
            }

        }else if(bag[1]==i){
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            i_placed=true;

        }else if(bag[1]==j){
            if(t_placed==false){
                codehold(bag);
                n--;
            }else{
                kb(cw,0);
                kb(right,1);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }

        }else if(bag[1]==t){
            kb(right,1);
            kb(ccw,0);
            kb(VK_DOWN,0);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;

        }
}
/**bags that dont work cuz no t spin
iojszlt
**/

void b5IJ(char* bag){
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
            n--;
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
        if(t_placed){
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
            n--;
        }

    }else if(bag[1]==i){
        if(l_placed || s_placed){
            kb(right,1);
            kb(VK_SPACE,0);
            i_placed=true;
            holded=false;
        }else{
            codehold(bag);
            n--;
        }

    }else if(bag[1]==j){
        kb(VK_UP,0);
        kb(left,0);
        kb(VK_SPACE,0);
        j_placed=true;
        holded=false;

    }else if(bag[1]==t){
        kb(right,1);
        kb(ccw,0);
        kb(VK_DOWN,0);
        kb(ccw,0);
        kb(VK_SPACE,0);
        holded=false;
        t_placed=true;

    }
}
/**
jilozst
osizjlt
**/
#endif
