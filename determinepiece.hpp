#ifndef DETERMINEPIECE_HPP
#define DETERMINEPIECE_HPP

char determinepiece(unsigned long c){
    if(c==0x00241ced)
        return 'z';
    if(c==0x00277fff)
        return 'l';
    if(c==0x0000f2ff)
        return 'o';
    if(c==0x004cb122)
        return 's';
    if(c==0x00e8a200)
        return 'i';
    if(c==0x00cc483f)
        return 'j';
    if(c==0x00a449a3)
        return 't';
    return 'x';
}
#endif
