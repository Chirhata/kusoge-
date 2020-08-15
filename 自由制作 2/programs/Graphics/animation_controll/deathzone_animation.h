#ifndef Deathzone_animation_H
#define Deathzone_animation_H

typedef struct deathzone_animation_parameters{
    int *controll;
    int *point;
    int max;
    int min;
    int speed;
}deathzone_animation_parameters;
int deathzone_animation(int *controll,int *point,int max,int min,int speed);
#endif