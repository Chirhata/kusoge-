#include <handy.h>
#include "attack_field.h"

int attack_field(int layer){
    //緑の枠
    HgWSetColor(layer,HG_GREEN);
    HgWBox(layer,10,125,380,50);
    //黄色の枠
    HgWSetColor(layer,HG_YELLOW);
    HgWBox(layer,100,120,200,60);
    //赤の枠
    HgWSetColor(layer,HG_RED);
    HgWBox(layer,160,115,80,70);
    //黒の枠
    HgWSetColor(layer,HG_BLACK);
    HgWBox(layer,195,110,10,80);
    return 0;
}
