#ifndef Player_HPbar_H
#define Player_HPbar_H

typedef struct player_HPbar_parameters{
    int layer;
    int player_HP;
    int secret_flag;
}player_HPbar_parameters;
int player_HPbar(int layer,int player_HP,int secret_flag);
#endif