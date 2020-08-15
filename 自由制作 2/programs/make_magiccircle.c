#include <stdio.h>
#include <handy.h>
#include <stdlib.h>
#include <math.h>
#include "make_magiccircle.h"

//魔法陣生成関数
int make_magiccircle(hgcolor color,int x,int y,int r,int layer){
    HgWSetColor(layer,color);
    HgWCircle(layer,x,y,r+3);
    HgWCircle(layer,x,y,r);
    HgWLine(layer,x,y+r,x+(pow(3*r*r,0.5)/2),(y-r/2));
    HgWLine(layer,x,y+r,x-(pow(3*r*r,0.5)/2),(y-r/2));
    HgWLine(layer,x+(pow(3*r*r,0.5)/2),(y-r/2),x-(pow(3*r*r,0.5)/2),(y-r/2));
    HgWLine(layer,x,y-r,x+(pow(3*r*r,0.5)/2),(r/2+y));
    HgWLine(layer,x,y-r,x-(pow(3*r*r,0.5)/2),(r/2+y));
    HgWLine(layer,x+(pow(3*r*r,0.5)/2),(y+r/2),x-(pow(3*r*r,0.5)/2),(y+r/2));
    return 0;
}