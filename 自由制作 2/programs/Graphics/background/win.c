#include <stdio.h>
#include <handy.h>
#include "win.h"

int win(int layer,int *secret_stage){
    if(*secret_stage == 1){
        printf("\n");
        printf("...マサカマケルナンテ。\n");
        *secret_stage = 0;
    }
    HgWSetColor(layer,HG_BLACK); 
    HgWSetFont(layer,HG_G,50);
    HgWText(layer,70,200,"YOU WIN!!");
    HgWSetFont(layer,HG_G,20);
    HgWText(layer,35,160,"終了するにはZキーを押してください");
    return 0;
}
