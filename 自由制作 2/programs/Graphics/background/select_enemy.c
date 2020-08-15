#include <handy.h>
#include "select_enemy.h"

//敵選択画面
int select_enemy(int layer,int enemyID){
    HgWSetFont(layer,HG_G,50);
    HgWSetColor(layer,HG_BLACK);
    if(enemyID == 0){
        HgWText(layer,65,200,"謎の生命体");
    }
    if(enemyID == 1){
        HgWText(layer,65,200,"魔法生命体");
    }
    if(enemyID == 2){
        HgWText(layer,90,200,"ゴーレム");
    }
    if(enemyID == 3){
        HgWText(layer,65,200,"イビルセル");
    }
    if(enemyID == 4){
        HgWText(layer,65,200,"究極生命体");
    }
    HgWSetFont(layer,HG_G,30);
    HgWText(layer,320,15,"%d/5",enemyID+1);
    HgWSetFont(layer,HG_G,16);
    HgWText(layer,80,130,"sキーで戦う敵を選んでください");
    HgWText(layer,45,100,"zキーで選択した敵との戦闘を開始します");
    HgWText(layer,30,70,"装備選択画面に戻る場合はxキーを押してください");
    return 0;
}
