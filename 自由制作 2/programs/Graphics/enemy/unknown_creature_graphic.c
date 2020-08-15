#include <handy.h>
#include "unknown_creature_graphic.h"

//謎の生命体の体
int unknown_creature_graphic(int enemy_condition,int layer,double float_param){
    //謎の生命体の体
    if(enemy_condition == 0){
        HgWSetFillColor(layer,HG_WHITE);
    }
    if(enemy_condition == 1){
        HgWSetFillColor(layer,HG_RED);
    }
    if(enemy_condition == 2){
        HgWSetFillColor(layer,HG_BLACK);
    }
    HgWCircleFill(layer,200,280 + float_param,60,1);
    //謎の生命体の目
    if(enemy_condition == 0){
        HgWSetFillColor(layer,HG_BLACK);
    }
    if(enemy_condition == 1){
        HgWSetFillColor(layer,HG_BLACK);
    }
    if(enemy_condition == 2){
        HgWSetFillColor(layer,HG_RED);
    }
    HgWCircleFill(layer,180,300 + float_param,10,0);
    HgWCircleFill(layer,220,300 + float_param,10,0);

    return 0;
}
