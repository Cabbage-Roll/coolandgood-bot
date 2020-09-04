#ifndef DETERMINEPIECE_HPP
#define DETERMINEPIECE_HPP
#include "piece.hpp"

char determinepiece(int r, int g, int b){
    if(z.check(r,g,b))
        return 'z';
    if(l.check(r,g,b))
        return 'l';
    if(o.check(r,g,b))
        return 'o';
    if(s.check(r,g,b))
        return 's';
    if(i.check(r,g,b))
        return 'i';
    if(j.check(r,g,b))
        return 'j';
    if(t.check(r,g,b))
        return 't';
    return 'x';
}
#endif
