#include <handy.h>
#include "evil_cell_graphic.h"

//イビルセル
int evil_cell_graphic(int enemy_condition,int layer,double expand){
    //イビルセルの体
    for(int x = 10;x >= 0;x = x-10){
        if(enemy_condition == 0){
            HgWSetFillColor(layer,HG_MAGENTA);
        }
        if(enemy_condition == 1){
            HgWSetFillColor(layer,HG_RED);
        }
        if(enemy_condition == 2){
            HgWSetFillColor(layer,HG_DRED);
        }
        HgWCircleFill(layer,230+x*2,290+x*2+10,20-x/2+expand,1);
        HgWCircleFill(layer,230+x*2,270-x*2-10,20-x/2+expand,1);
        if(enemy_condition == 0){
            HgWSetFillColor(layer,HG_CYAN);
        }
        if(enemy_condition == 1){
            HgWSetFillColor(layer,HG_BLUE);
        }
        if(enemy_condition == 2){
            HgWSetFillColor(layer,HG_DBLUE);
        }
        HgWCircleFill(layer,170-x*2,290+x*2+10,20-x/2+expand,1);
        HgWCircleFill(layer,170-x*2,270-x*2-10,20-x/2+expand,1);
    }
    HgWSetFillColor(layer,HG_PURPLE);
    HgWCircleFill(layer,200,280,35+expand,1);
    return 0;
}
