#include "player_heal.h"
#include <stdio.h>

int player_heal(int *nowHP,int healHP,int MaxHP){
    if(*nowHP+healHP<MaxHP){
        *nowHP += healHP;
        printf("HPを%d回復した！\n",healHP);
    }
    else{
        *nowHP = MaxHP;
        printf("HPが満タンになった！\n");
    }
    return 0;
}
