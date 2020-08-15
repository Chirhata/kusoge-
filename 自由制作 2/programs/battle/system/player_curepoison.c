#include "player_curepoison.h"
#include <stdio.h>

int player_curepoison(int *flag){
    if(*flag == 1){
        *flag = 0;
        printf("毒は綺麗さっぱりなくなった！\n");
    }
    if(*flag>1){
        *flag -= 1;
        printf("毒の症状が軽減した！\n");
    }
    return 0;
}
