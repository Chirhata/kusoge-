#ifndef Win_H
#define Win_H

typedef struct win_parameters{
    int layer;
    int *secret_stage;
}win_parameters;
int win(int layer,int *secret_stage);
#endif