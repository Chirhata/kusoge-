#ifndef Darkness_H
#define Darkness_H

typedef struct darkness_parameters{
    int layer;
    double x;
    int y;
    int darkness_flag;
}darkness_parameters;
int darkness(int layer,double x,int y,int darkness_flag);
#endif