#include <handy.h>
#include "golem_graphic.h"

//ゴーレム
int golem_graphic(int enemy_condition,int layer){
    //ゴーレムの体
    if(enemy_condition == 0){
        HgWSetFillColor(layer,HG_GRAY);
    }
    if(enemy_condition == 1){
        HgWSetFillColor(layer,HG_DGRAY);
    }
    if(enemy_condition == 2){
        HgWSetFillColor(layer,HG_DRED);
    }
    HgWBoxFill(layer,165,185,20,60,1);
    HgWBoxFill(layer,215,185,20,60,1);
    HgWBoxFill(layer,215,265,60,20,1);
    HgWBoxFill(layer,115,265,60,20,1);
    HgWBoxFill(layer,255,265,20,40,1);
    HgWBoxFill(layer,105,225,20,40,1);
    HgWBoxFill(layer,95,185,50,50,1);
    HgWBoxFill(layer,260,305,30,30,1);
    HgWBoxFill(layer,175,230,50,70,1);
    HgWBoxFill(layer,160,295,80,50,1);
    HgWSetFillColor(layer,HG_BLACK);
    HgWBoxFill(layer,180,305,40,20,1);
    HgWSetFillColor(layer,HG_RED);
    HgWCircleFill(layer,200,315,5,0);

    return 0;
}
