#ifndef PIECE_HPP
#define PIECE_HPP

#define VK_CCW 0x5A
#define VK_CW 0x58
#define VK_HOLD 0x43

bool z_placed,l_placed,o_placed,s_placed,i_placed,j_placed,t_placed;
int hold=0;
int n;
bool holded=false;
char temp;
int cfg[10];
bool path1;
HWND desktop = GetDesktopWindow();
HDC screen;
unsigned long pixel;

short left,right,cw,ccw;
char z,l,o,s,i,j,t;
bool mirr=false;
#endif
