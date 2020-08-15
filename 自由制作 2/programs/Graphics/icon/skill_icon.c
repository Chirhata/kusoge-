#include <handy.h>
#include "skill_icon.h"

int skill_icon(int x,int y,hgcolor color,int layer,int element_point,int cost,int secret_flag){
    HgWSetFillColor(layer,color);
    HgWCircleFill(layer,x,y,20,1);
    HgWSetColor(layer,HG_BLACK);
    if(secret_flag == 1){
        HgWSetColor(layer,HG_WHITE);
    }
    HgWText(layer,x + 20,y,"%d/100",element_point);
    HgWSetFont(layer,HG_G,12);
    HgWSetColor(layer,HG_RED);
    if(element_point >= cost){
        HgWText(layer,x + 17,5,"スキルOK");
    } 
    return 0;
}
