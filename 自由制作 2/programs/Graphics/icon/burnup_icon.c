#include <handy.h>
#include "burnup_icon.h"
#include "../../make_magiccircle.h"

int burnup_icon(int layer,int burnup_stage){
    if(burnup_stage>0){
        HgWSetFillColor(layer,HG_RED);
        HgWBoxFill(layer,30,70,30,30,1);
        make_magiccircle(HG_WHITE,45,85,12,layer);
    }
    return 0;
}
