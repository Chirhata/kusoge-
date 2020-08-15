#ifndef Select_enemy_H
#define Select_enemy_H

typedef struct select_enemy_parameters{
    int layer;
    int enemyID;
}select_enemy_parameters;
int select_enemy(int layer,int enemyID);
#endif