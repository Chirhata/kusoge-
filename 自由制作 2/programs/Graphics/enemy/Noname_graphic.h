#ifndef Noname_graphic_H
#define Noname_graphic_H

typedef struct Noname_graphic_parameters{
    int enemy_HP;
    int enemy_MAXHP;
    int layer;
    double expand_radius;
    double expand_radius_sub;
    double expand_radius_core;
}Noname_graphic_parameters;
int Noname_graphic(int enemy_HP,int enemy_MAXHP,int layer,double expand_radius,double expand_radius_sub,double expand_radius_core);
#endif