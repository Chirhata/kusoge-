#include <handy.h>
#include "powerlost_icon.h"

int powerlost_icon(int layer,int powerlost_stage){
    if(powerlost_stage >= 0){
        HgWSetFillColor(layer,HG_BLACK);
        HgWBoxFill(layer,340,70,30,30,1);
        HgWSetColor(layer,HG_WHITE);
        HgWSetFont(layer,HG_G,25);
        HgWText(layer,342,70,"↓");
    }
    return 0;
}
