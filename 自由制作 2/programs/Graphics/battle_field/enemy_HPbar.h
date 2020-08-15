#ifndef Enemy_HPbar_H
#define Enemy_HPbar_H

typedef struct enemy_HPbar_parameters{
    int layer;
    int enemy_HP;
    int enemy_MAXHP;
}enemy_HPbar_parameters;
int enemy_HPbar(int layer,int enemy_HP,int enemy_MAXHP);
#endif