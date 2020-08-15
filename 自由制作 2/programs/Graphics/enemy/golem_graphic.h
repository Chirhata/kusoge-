#ifndef Golem_graphic_H
#define Golem_graphic_H

typedef struct Golem_graphic_parameters{
    int enemy_condition;
    int layer;
}Golem_graphic_parameters;
int golem_graphic(int enemy_condition,int layer);
#endif