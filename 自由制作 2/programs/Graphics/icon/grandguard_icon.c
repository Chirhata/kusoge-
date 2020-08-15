#include <handy.h>
#include "grandguard_icon.h"
#include "../../make_magiccircle.h"

int grandguard_icon(int layer,int grandguard_stage){
    if(grandguard_stage>0){
        HgWSetFillColor(layer,HG_YELLOW);
        HgWBoxFill(layer,0,70,30,30,1);
        make_magiccircle(HG_BLACK,15,85,12,layer);
    }
    return 0;
}
