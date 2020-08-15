#ifndef Skill_icon_H
#define Skill_icon_H

typedef struct skill_icon_parameters{
    int x;
    int y;
    hgcolor color;
    int layer;
    int element_point;
    int cost;
    int secret_flag;
}skill_icon_parameters;
int skill_icon(int x,int y,hgcolor color,int layer,int element_point,int cost,int secret_flag);
#endif