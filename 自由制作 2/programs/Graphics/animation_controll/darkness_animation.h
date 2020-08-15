#ifndef Darkness_animation_H
#define Darkness_animation_H

typedef struct darkness_animation_parameters{
    int darkness_flag;
    double *x;
    int *y;
    int x_border;
    int y_border;
    double speed_x;
    double speed_y;
}darkness_animation_parameters;
int darkness_animation(int darkness_flag,double *x,int *y,int x_border,int y_border,double speed_x,double speed_y);
#endif