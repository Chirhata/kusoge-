#ifndef Ultimate_creature_graphic_H
#define Ultimate_creature_graphic_H

typedef struct ultimate_creature_graphic_parameters{
    int enemy_condition;
    int layer;
    double float_param;
}ultimate_creature_graphic_parameters;
int ultimate_creature_graphic(int enemy_condition,int layer,double float_param);
#endif