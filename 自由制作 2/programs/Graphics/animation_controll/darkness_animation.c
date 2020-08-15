#include "darkness_animation.h"

int darkness_animation(int darkness_flag,double *x,int *y,int x_border,int y_border,double speed_x,double speed_y){
    if(darkness_flag == 1){
        if(*x < x_border){
            *x += speed_x;
        }
        if(*x >= x_border){
            *x = x_border;
        }
        if(*y < y_border){
            *y += speed_y;
        }
        if(*y >= y_border){
            *y = y_border;
        }
    }
    return 0;
}
