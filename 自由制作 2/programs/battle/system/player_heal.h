#ifndef Player_heal_H
#define Player_heal_H

typedef struct player_heal_parameters{
    int *nowHP;
    int healHP;
    int MaxHP;
}player_heal_parameters;
int player_heal(int *nowHP,int healHP,int MaxHP);
#endif