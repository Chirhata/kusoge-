#include <handy.h>
#include "darkness.h"

int darkness(int layer,double x,int y,int darkness_flag){
    if(darkness_flag == 1){
        HgWSetFillColor(layer,HG_BLACK);
        HgWBoxFill(layer,0,0,x,400,1);
        HgWBoxFill(layer,400-x,0,400,400,1);
        HgWBoxFill(layer,0,400-y*2,400,400,1);
        HgWBoxFill(layer,0,0,400,y,1);
    }
    return 0;
}
