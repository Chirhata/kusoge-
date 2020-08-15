#ifndef Unknown_creature_graphic_H
#define Unknown_creature_graphic_H

typedef struct unknown_creature_graphic_parameters{
    int enemy_condition;
    int layer;
    double float_param;
}unknown_creature_graphic_parameters;
int unknown_creature_graphic(int enemy_condition,int layer,double float_param);
#endif