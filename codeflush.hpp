#ifndef CODEFLUSH_HPP
#define CODEFLUSH_HPP
#include "codeshift.hpp"
void codeflush(char* bag){
    z_placed=false;
    l_placed=false;
    o_placed=false;
    s_placed=false;
    i_placed=false;
    j_placed=false;
    t_placed=false;
    codeshift(bag);
}
#endif
