#ifndef Burnup_icon_H
#define Burnup_icon_H

typedef struct burnup_icon_parameters{
    int layer;
    int burnup_stage;
}burnup_icon_parameters;
int burnup_icon(int layer,int burnup_stage);
#endif