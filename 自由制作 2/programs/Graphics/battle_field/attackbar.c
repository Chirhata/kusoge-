#include <handy.h>
#include "attackbar.h"

int attackbar(int layer,int point,int secret_flag){
    HgWSetColor(layer,HG_BLACK);
    if(secret_flag == 1){
        HgWSetColor(layer,HG_WHITE);
    }
    HgWSetFillColor(layer,HG_BLUE);
    HgWBoxFill(layer,point,100,5,100,1);
    return 0;
}
