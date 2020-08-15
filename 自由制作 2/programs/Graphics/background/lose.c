#include <handy.h>
#include "lose.h"

int lose(int layer){
    HgWSetColor(layer,HG_BLACK); 
    HgWSetFillColor(layer,HG_RED);
    HgWBoxFill(layer,-10,-10,410,410,0);
    HgWSetFont(layer,HG_G,50);
    HgWText(layer,40,200,"GAME OVER");
    HgWSetFont(layer,HG_G,20);
    HgWText(layer,35,160,"終了するにはZキーを押してください");
    return 0;
}
