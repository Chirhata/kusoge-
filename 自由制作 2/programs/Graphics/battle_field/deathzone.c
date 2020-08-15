#include <handy.h>
#include "deathzone.h"

int deathzone(int layer,int enemy_HP,int enemy_MAXHP,int zone_point,int zone_type){
    if(zone_type == 1){
        HgWSetColor(layer,HG_PURPLE);
        HgWBox(layer,100+zone_point,100,50,100);
        HgWBox(layer,250+zone_point,100,50,100);
    }
    if(zone_type == 2){
        if(enemy_HP > enemy_MAXHP / 6 * 2){
            HgWSetColor(layer,HG_YELLOW);
        }
        if(enemy_MAXHP / 6 < enemy_HP && enemy_HP <= enemy_MAXHP / 6 * 2){
            HgWSetColor(layer,HG_PURPLE);
        }
        if(500 < enemy_HP && enemy_HP <= enemy_MAXHP / 6){
            HgWSetColor(layer,HG_RED);
        }
        if(enemy_HP <= 500){
            HgWSetColor(layer,HG_WHITE);
        }
        HgWBox(layer,10,100,zone_point,100);
        HgWBox(layer,390-zone_point,100,zone_point,100);
    }
    return 0;
}
