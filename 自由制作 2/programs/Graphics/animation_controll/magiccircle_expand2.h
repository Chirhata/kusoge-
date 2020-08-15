#ifndef magiccircle_expand2_H
#define magiccircle_expand2_H

typedef struct magiccircle_expand2_parameters{
    double *first;
    double *second;
    double *third;
    int first_border;
    int second_border;
    int third_border;
    double first_speed;
    double second_speed;
    double third_speed;
}magiccircle2_expand_parameters;
int magiccircle_expand2(double *first,double *second,double *third,int first_border,int second_border,int third_border,double first_speed,double second_speed,double third_speed);
#endif