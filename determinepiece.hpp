#ifndef DETERMINEPIECE_HPP
#define DETERMINEPIECE_HPP
#include "piece.hpp"

char determinepiece(unsigned long c){
    if(z.check(c))
        return 'z';
    if(l.check(c))
        return 'l';
    if(o.check(c))
        return 'o';
    if(s.check(c))
        return 's';
    if(i.check(c))
        return 'i';
    if(j.check(c))
        return 'j';
    if(t.check(c))
        return 't';
    return 'x';
}
#endif
