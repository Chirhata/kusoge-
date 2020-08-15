#include <handy.h>
#include "seclet_stage_enter.h"

//隠しステージの入り口
int seclet_stage_enter(int layer){
    HgWSetColor(layer,HG_RED); 
    HgWSetFillColor(layer,HG_BLACK);
    HgWBoxFill(layer,-10,-10,410,410,0);
    HgWSetFont(layer,HG_G,75);
    HgWText(layer,120,250,"警告");
    HgWSetFont(layer,HG_G,23);
    HgWText(layer,90,170,"この先は未知の世界");
    HgWText(layer,15,130,"何が待ち受けているかわかりません");
    HgWText(layer,85,90,"それでも進みますか？");
    HgWText(layer,85,20,"進む→zキー　戻る→sキー");
    return 0;
}
