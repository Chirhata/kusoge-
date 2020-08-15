#include "deathzone_animation.h"

int deathzone_animation(int *controll,int *point,int max,int min,int speed){
    if(*point < min){
        *controll = 0;
    }
    if(*point > max){
        *controll = 1;
    }
    if(*controll == 0){
        *point += speed;
    }
    if(*controll == 1){
        *point -= speed;
    }
    return 0;
}
