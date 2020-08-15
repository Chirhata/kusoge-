#include <handy.h>
#include "poison_icon.h"

int poison_icon(int layer,int poison_rank){
    if(poison_rank>0){
        if(poison_rank == 1){
            HgWSetFillColor(layer,HG_PURPLE);
        }
        if(poison_rank == 2){
            HgWSetFillColor(layer,HG_DBLUE);
        }
        if(poison_rank >= 3){
            HgWSetFillColor(layer,HG_DRED);
        }
        HgWBoxFill(layer,370,70,30,30,1);
        HgWSetFillColor(layer,HG_WHITE);
        HgWCircleFill(layer,382,90,5,0);
        HgWCircleFill(layer,390,82,3,0);
        HgWCircleFill(layer,385,76,2,0);
        if(poison_rank == 1){
            HgWSetFillColor(layer,HG_PURPLE);
        }
        if(poison_rank == 2){
            HgWSetFillColor(layer,HG_DBLUE);
        }
        if(poison_rank == 3){
            HgWSetFillColor(layer,HG_DRED);
        }
        HgWCircleFill(layer,380,92,2,0);
    }
    return 0;
}
