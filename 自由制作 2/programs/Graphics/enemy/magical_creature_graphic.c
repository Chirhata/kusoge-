#include <handy.h>
#include "magical_creature_graphic.h"
#include "../../make_magiccircle.h"

//魔法生命体
int magical_creature_graphic(int enemy_condition,int layer,double float_param,double expand_radius,double expand_radius_sub){
    //魔法生命体の魔法陣
    if(enemy_condition>0){
        make_magiccircle(HG_RED,200,340 + float_param,expand_radius,layer);
        make_magiccircle(HG_BLUE,251,250 + float_param,expand_radius,layer);
        make_magiccircle(HG_YELLOW,149,250 + float_param,expand_radius,layer);
    }
    if(enemy_condition>1){
        make_magiccircle(HG_GREEN,200,220 + float_param,expand_radius_sub,layer);
        make_magiccircle(HG_PURPLE,251,310 + float_param,expand_radius_sub,layer);
        make_magiccircle(HG_ORANGE,149,310 + float_param,expand_radius_sub,layer);
    }
    //魔法生命体の体
    HgWSetColor(layer,HG_BLACK);
    HgWSetFillColor(layer,HG_SKYBLUE);
    HgWCircleFill(layer,200,280 + float_param,60,1);
    make_magiccircle(HG_BLACK,200,245 + float_param,12,layer);
    //魔法生命体の目
    HgWSetFillColor(layer,HG_RED);
    HgWCircleFill(layer,180,300 + float_param,10,1);
    HgWSetFillColor(layer,HG_GREEN);
    HgWCircleFill(layer,220,300 + float_param,10,1);

    return 0;
}
