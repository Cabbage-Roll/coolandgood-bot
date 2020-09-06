#ifndef PIECE_HPP
#define PIECE_HPP

#define VK_CCW 0x5A
#define VK_CW 0x58
#define VK_HOLD 0x43
class piece{
public:
    unsigned long color;
    bool placed;

    piece(unsigned long c){
        color=c;
        placed=false;
    }

    bool check(unsigned long c){
        if(color==c){
            return true;
        }
        return false;
    }
};

piece z(0x00241ced);
piece l(0x00277fff);
piece o(0x0000f2ff);
piece s(0x004cb122);
piece i(0x00e8a200);
piece j(0x00cc483f);
piece t(0x00a449a3);

int hold=0;
int n;
bool holded=false;
char temp;
int cfg[10];
#endif
