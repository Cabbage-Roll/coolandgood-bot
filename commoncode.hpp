#ifndef COMMONCODE_HPP
#define COMMONCODE_HPP
#include "codeshift.hpp"
#include "codehold.hpp"
#include "mirror.hpp"
void commoncode(char* bag){
    if((n>0 && holded==false) || hold==1){
        codeshift(bag);
        }

    if(n==6 && hold>0){
        codehold(bag);
        n++;
    }

    if(mirr==true){
        mk(bag);
    }
}
#endif
