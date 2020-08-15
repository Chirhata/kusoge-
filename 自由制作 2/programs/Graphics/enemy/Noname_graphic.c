#include  <handy.h>
#include "Noname_graphic.h"
#include "../../make_magiccircle.h"

//???
int Noname_graphic(int enemy_HP,int enemy_MAXHP,int layer,double expand_radius,double expand_radius_sub,double expand_radius_core){
    //第一形態
    if(enemy_HP >= enemy_MAXHP/6*5){
        make_magiccircle(HG_BLUE,200,280,60,layer);
    }
    //第二形態
    if(enemy_MAXHP/3*2 <= enemy_HP&&enemy_HP < enemy_MAXHP/6*5){
        make_magiccircle(HG_ORANGE,200,280,60,layer);
    }
    //第三形態
    if(enemy_MAXHP/2 < enemy_HP&&enemy_HP < enemy_MAXHP/3*2){
        make_magiccircle(HG_GREEN,200,280,60,layer);
    }
    //第四形態
    if(enemy_MAXHP/3 < enemy_HP&&enemy_HP <= enemy_MAXHP/2){
        make_magiccircle(HG_YELLOW,200,280,60,layer);
    }
    //第五形態
    if(enemy_MAXHP/6 < enemy_HP&&enemy_HP <= enemy_MAXHP/3){
        make_magiccircle(HG_PURPLE,200,280,60,layer);
    }
    //第六形態
    if(500<enemy_HP&&enemy_HP <= enemy_MAXHP/6){
        make_magiccircle(HG_RED,200,280,60,layer);
    }
    //第七形態
    if(enemy_HP <= 500){
        make_magiccircle(HG_RED,200,340,expand_radius,layer);
        make_magiccircle(HG_BLUE,251,250,expand_radius,layer);
        make_magiccircle(HG_YELLOW,149,250,expand_radius,layer);
        make_magiccircle(HG_GREEN,200,220,expand_radius,layer);
        make_magiccircle(HG_PURPLE,251,310,expand_radius,layer);
        make_magiccircle(HG_ORANGE,149,310,expand_radius,layer);
        make_magiccircle(HG_WHITE,200,280,60+expand_radius_sub,layer);
        make_magiccircle(HG_WHITE,200,280,40-expand_radius_core,layer);
    }
    return 0;
}
