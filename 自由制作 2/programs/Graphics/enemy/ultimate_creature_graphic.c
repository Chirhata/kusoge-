#include <handy.h>
#include "ultimate_creature_graphic.h"
#include "../../make_magiccircle.h"

//究極生命体
int ultimate_creature_graphic(int enemy_condition,int layer,double float_param){
    //究極生命体の体
    make_magiccircle(HG_RED,200,340+float_param,30,layer);
    make_magiccircle(HG_BLUE,251,250+float_param,30,layer);
    make_magiccircle(HG_YELLOW,149,250+float_param,30,layer);
    make_magiccircle(HG_GREEN,200,220+float_param,30,layer);
    make_magiccircle(HG_PURPLE,251,310+float_param,30,layer);
    make_magiccircle(HG_ORANGE,149,310+float_param,30,layer);
    if(enemy_condition == 0){
        HgWSetFillColor(layer,HG_GRAY);
    }
    if(enemy_condition == 1){
        HgWSetFillColor(layer,HG_DGRAY);
    }
    if(enemy_condition == 2){
        HgWSetFillColor(layer,HG_BLACK);
    }
    HgWCircleFill(layer,200,280+float_param,60,1);
    HgWSetFillColor(layer,HG_RED);
    HgWCircleFill(layer,180,300+float_param,10,1);
    HgWSetFillColor(layer,HG_DRED);
    HgWCircleFill(layer,220,300+float_param,10,1);

    return 0;
}
