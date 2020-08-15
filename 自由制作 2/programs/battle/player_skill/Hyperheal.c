#include "Hyperheal.h"
#include "../system/player_heal.h"
#include "../system/player_curepoison.h"
#include <stdio.h>

int Hyperheal(int *skillpoint,int *nowHP,int healHP,int MaxHP,int *poison_flag){
    if(*skillpoint >= 1){
        printf("スキル発動！「ハイパーヒール」\n");
        player_heal(nowHP,healHP,MaxHP);
        player_curepoison(poison_flag);
        *skillpoint -= 1;
    }
    //足りない場合
    else{
        printf("スキルポイントが不足しています。\n");
    }
    printf("\n");
    return 0;
}
