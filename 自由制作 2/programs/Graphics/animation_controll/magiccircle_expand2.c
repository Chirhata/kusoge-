#include "magiccircle_expand2.h"

int magiccircle_expand2(double *first,double *second,double *third,int first_border,int second_border,int third_border,double first_speed,double second_speed,double third_speed){
    if(*first<first_border){
        *first += first_speed;
    }
    else{
        *first = first_border;
    }
    if(*second<second_border){
        *second += second_speed;
    }
    else{
        *second = second_border;
    }
    if(*third>third_border){
        *third -= third_speed;
    }
    else{
        *third = third_border;
    }
    return 0;
}
