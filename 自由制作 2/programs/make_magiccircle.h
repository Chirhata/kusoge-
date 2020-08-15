#ifndef Make_magiccircle_H
#define Make_magiccircle_H

typedef struct make_magiccircle_parameters{
    hgcolor color;
    int x;
    int y;
    int r;
    int layer;
}make_magiccircle_parameters;
int make_magiccircle(hgcolor color,int x,int y,int r,int layer);
#endif