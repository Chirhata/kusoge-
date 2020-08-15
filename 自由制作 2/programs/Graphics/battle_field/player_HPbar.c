#include <handy.h>
#include "player_HPbar.h"

int player_HPbar(int layer,int player_HP,int secret_flag){
    HgWSetColor(layer,HG_BLACK);
    //体力
    HgWSetFillColor(layer,HG_RED);
    HgWBoxFill(layer,100,50,200,20,1);
    //ダメージ（プレイヤー）
    if(player_HP > 500){
        HgWSetFillColor(layer,HG_GREEN);
    }
    if(player_HP <= 500 && player_HP > 165){
        HgWSetFillColor(layer,HG_YELLOW);
    }
    if(player_HP <= 165){
        HgWSetFillColor(layer,HG_ORANGE);
    }
    HgWBoxFill(layer,100,50,2*(player_HP/10),20,1);
    if(secret_flag == 1){
        HgWSetColor(layer,HG_WHITE);
    }
    HgWText(layer,100,70,"%d/1000",player_HP);
    return 0;
}
