#ifndef CODEHOLD_HPP
#define CODEHOLD_HPP
#include "kb.hpp"
void codehold(char *bag){
    char temp;
    kb(VK_HOLD,0);
    hold++;
    temp=bag[1];
    bag[1]=bag[0];
    bag[0]=temp;
    holded=true;
}
#endif
