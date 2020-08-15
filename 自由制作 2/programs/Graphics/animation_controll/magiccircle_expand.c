#include "magiccircle_expand.h"

int magiccircle_expand(int condition,double *first,double *second,int first_border,int second_border,double speed){
    //魔法陣出現
    if(condition>0){
        if(*first<first_border){
            *first += speed;
        }
        else{
            *first = first_border;
        }
    }
    if(condition == 2){
        if(*second<second_border){
            *second += speed;
        }
        else{
            *second = second_border;
        }
    }
    return 0;
}
