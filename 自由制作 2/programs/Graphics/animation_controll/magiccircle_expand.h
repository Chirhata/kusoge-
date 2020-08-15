#ifndef magiccircle_expand_H
#define magiccircle_expand_H

typedef struct magiccircle_expand_parameters{
    int condition;
    double *first;
    double *second;
    int first_border;
    int second_border;
    double speed;
}magiccircle_expand_parameters;
int magiccircle_expand(int condition,double *first,double *second,int first_border,int second_border,double speed);
#endif