#ifndef Attackbar_H
#define Attackbar_H

typedef struct attackbar_parameters{
    int layer;
    int point;
    int secret_flag;
}attackbar_parameters;
int attackbar(int layer,int point,int secret_flag);
#endif