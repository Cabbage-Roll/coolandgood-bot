#ifndef BAG2_HPP
#define BAG2_HPP
#include "../piece.hpp"
#include "../codehold.hpp"
void b2(char* bag){
    if(bag[1]==z){

            if(s_placed==true && j_placed==false){
                codehold(bag);

            }else{
                kb(ccw,0);
                kb(left,0);
                kb(VK_SPACE,0);
                holded=false;
                z_placed=true;
            }

        }else if(bag[1]==l){
            kb(right,1);
            kb(ccw,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;

        }else if(bag[1]==o){
            kb(left,1);
            kb(VK_SPACE,0);
            holded=false;
            o_placed=true;

        }else if(bag[1]==s){
            if(j_placed==false){
                if(z_placed==false){
                    kb(right,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    s_placed=true;
                }else{
                    codehold(bag);

                }
            }else{
                kb(cw,0);
                kb(VK_DOWN,0);
                kb(cw,0);
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
            if(z_placed==false){
                kb(cw,0);
                kb(left,0);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }else{
                kb(right,0);
                kb(VK_DOWN,0);
                kb(left,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                j_placed=true;
            }

        }else if(bag[1]==t){
            if((l_placed==true && s_placed==true) && j_placed==true){
                kb(right,0);
                kb(VK_DOWN,0);
                kb(right,0);
                kb(ccw,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                codehold(bag);

            }
        }
    }

void b2FL(char* bag){
    if(bag[1]==z){

        kb(ccw,0);
        kb(left,0);
        kb(VK_SPACE,0);
        holded=false;
        z_placed=true;

    }else if(bag[1]==l){
        if(z_placed){
            kb(VK_UP,0);
            kb(right,0);
            kb(VK_DOWN,0);
            kb(left,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }else{
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            l_placed=true;
        }

    }else if(bag[1]==o){
        kb(left,1);
        kb(VK_SPACE,0);
        holded=false;
        o_placed=true;

    }else if(bag[1]==s){
        kb(cw,0);
        kb(right,1);
        kb(VK_SPACE,0);
        holded=false;
        s_placed=true;

    }else if(bag[1]==i){
        if(l_placed){
            if(z_placed){
                if(j_placed){
                    kb(cw,0);
                    kb(right,0);
                    kb(VK_DOWN,0);
                    if(t_placed){
                        kb(cw,0);
                        kb(left,0);
                    }else{
                        kb(cw,0);
                    }
                    kb(VK_SPACE,0);
                    holded=false;
                    i_placed=true;
                }else{
                    kb(right,0);
                    kb(VK_DOWN,0);
                    kb(left,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    i_placed=true;
                }
            }else{
                kb(VK_SPACE,0);
                holded=false;
                i_placed=true;
            }
        }else{
            codehold(bag);
        }

    }else if(bag[1]==j){
        if(s_placed){
            kb(VK_UP,0);
            kb(right,1);
            kb(VK_SPACE,0);
            holded=false;
            j_placed=true;
        }else{
            codehold(bag);

        }

    }else if(bag[1]==t){
        if(l_placed){
            if(i_placed){
                if(j_placed){
                    kb(right,0);
                    kb(VK_DOWN,0);
                    kb(right,0);
                    kb(ccw,0);
                    kb(ccw,0);
                    kb(VK_SPACE,0);
                    holded=false;
                    t_placed=true;
                }else{
                    codehold(bag);

                }
            }else if(j_placed){
                kb(right,0);
                kb(VK_DOWN,0);
                kb(right,0);
                kb(ccw,0);
                kb(right,0);
                kb(VK_DOWN,0);
                kb(ccw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }else{
                kb(right,0);
                kb(right,0);
                kb(cw,0);
                kb(VK_DOWN,0);
                kb(cw,0);
                kb(VK_SPACE,0);
                holded=false;
                t_placed=true;
            }
        }else if(j_placed){
            kb(VK_UP,0);
            kb(right,0);
            kb(VK_DOWN,0);
            kb(right,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else if(holded || (bag[0]==i && !l_placed)){
            kb(right,0);
            kb(right,0);
            kb(VK_UP,0);
            kb(VK_SPACE,0);
            holded=false;
            t_placed=true;
        }else{
            codehold(bag);

        }
    }
}
#endif
