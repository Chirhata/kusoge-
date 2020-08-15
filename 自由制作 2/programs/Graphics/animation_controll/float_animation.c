#include "float_animation.h"

int float_animation(int *controll,double *point,int max,int min,double speed){
    if(*point>max){
        *controll = 1;
    }
    if(*point<min){
        *controll = 0;
    }
    if(*controll == 0){
        *point += speed;
    }
    if(*controll== 1){
        *point -= speed;
    }
    return 0;
}
