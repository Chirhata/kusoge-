#ifndef Expand_animation_H
#define Expand_animation_H

typedef struct expand_animation_parameters{
    int *controll;
    double *point;
    int max;
    int min;
    double speed_up;
    double speed_down;
}expand_animation_parameters;
int expand_animation(int *controll,double *point,int max,int min,double speed_up,double speed_down);
#endif