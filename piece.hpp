#ifndef PIECE_HPP
#define PIECE_HPP

#define VK_CCW 0x5A
#define VK_CW 0x58
#define VK_HOLD 0x43
class Piece{
public:
    int red;
    int green;
    int blue;
    bool placed;
    Piece(int r, int g, int b){
        red=r;
        green=g;
        blue=b;
        placed=false;
    }

    bool check(int r, int g, int b){
        if(r==red){
            if(g==green){
                if(b==blue){
                    return true;
                }
            }
        }
        return false;
    }
};
/*
class Piece{
public:
    unsigned long pcol;
    bool placed;
    Piece(unsigned long p){
        pcol=p;
        placed=false;
    }

    bool check(unsigned long p){
        if(p==pcol)
            return true;
        return false;
    }
};
*/

Piece z(237,28,36);
Piece l(255,127,39);
Piece o(255,242,0);
Piece s(34,177,76);
Piece i(0,162,232);
Piece j(63,72,204);
Piece t(163,73,164);

int hold=0;
int n;
bool holded=false;
char temp;
#endif
