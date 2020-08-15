#ifndef Magical_creature_graphic_H
#define Magical_creature_graphic_H

typedef struct magical_creature_graphic_parameters{
    int enemy_condition;
    int layer;
    double float_param;
    double expand_radius;
    double expand_radius_sub;
}magical_creature_graphic_parameters;
int magical_creature_graphic(int enemy_condition,int layer,double float_param,double expand_radius,double expand_radius_sub);
#endif