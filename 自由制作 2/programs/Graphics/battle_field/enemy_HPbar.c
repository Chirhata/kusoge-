#include <handy.h>
#include "enemy_HPbar.h"

int enemy_HPbar(int layer,int enemy_HP,int enemy_MAXHP){
    HgWSetFillColor(layer,HG_RED);
    HgWBoxFill(layer,100,360,200,20,1);
    if(enemy_HP > enemy_MAXHP/2){
        HgWSetFillColor(layer,HG_GREEN);
    }
    if(enemy_HP <= enemy_MAXHP/2&&enemy_HP>enemy_MAXHP/6){
        HgWSetFillColor(layer,HG_YELLOW);
    }
    if(enemy_HP <= enemy_MAXHP/6){
        HgWSetFillColor(layer,HG_ORANGE);
    }
    HgWBoxFill(layer,100,360,2*(enemy_HP/(enemy_MAXHP/100)),20,1);
    return 0;
}
