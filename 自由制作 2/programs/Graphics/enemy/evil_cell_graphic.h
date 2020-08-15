#ifndef Evil_cell_graphic_H
#define Evil_cell_graphic_H

typedef struct evil_cell_graphic_parameters{
    int enemy_condition;
    int layer;
    double expand;
}evil_cell_graphic_parameters;
int evil_cell_graphic(int enemy_condition,int layer,double expand);
#endif