#include "expand_animation.h"

int expand_animation(int *controll,double *point,int max,int min,double speed_up,double speed_down){
    if(*point>max){
        *controll = 1;
    }
    if(*point<min){
        *controll = 0;
    }
    if(*controll == 0){
        *point += 0.1;
    }
    if(*controll == 1){
        *point -= 0.05;
    }
    return 0;
}
