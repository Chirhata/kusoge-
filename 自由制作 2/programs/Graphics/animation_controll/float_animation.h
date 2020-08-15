#ifndef Float_animation_H
#define Float_animation_H

typedef struct float_animation_parameters{
    int *controll;
    double *point;
    int max;
    int min;
    double speed;
}float_animation_parameters;
int float_animation(int *controll,double *point,int max,int min,double speed);
#endif