#include <handy.h>
#include "select_equipment.h"

int select_equipment(int layer,int equipmentID){
    HgWSetColor(layer,HG_BLACK);
    HgWSetFont(layer,HG_G,20);
    HgWText(layer,50,350,"sキー使う装備を選んでください");
    HgWText(layer,50,320,"決めたらzキーを押してください");
    if(equipmentID == 0){
        HgWSetFont(layer,HG_G,45);
        HgWText(layer,25,200,"妖精のペンダント");
        HgWSetFont(layer,HG_G,17);
        HgWText(layer,50,150,"木の妖精がくれた不思議なペンダント");
        HgWText(layer,65,120,"装備すると毎ターンHPを回復する");
    }
    if(equipmentID == 1){
        HgWSetFont(layer,HG_G,45);
        HgWText(layer,85,200,"竜玉の指輪");
        HgWSetFont(layer,HG_G,17);
        HgWText(layer,85,150,"凶暴な竜の力がこもった指輪");
        HgWText(layer,85,120,"装備すると攻撃力が上昇する");
    }
    if(equipmentID == 2){
        HgWSetFont(layer,HG_G,45);
        HgWText(layer,40,200,"コスモストーン");
        HgWSetFont(layer,HG_G,17);
        HgWText(layer,100,150,"神秘的な力を感じる石");
        HgWText(layer,30,120,"装備するとスキル発動時に消費するSPが減る");
    }
    return 0;
}
