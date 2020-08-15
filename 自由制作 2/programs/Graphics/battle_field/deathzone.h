#ifndef Deathzone_H
#define Deathzone_H

typedef struct deathzone_parameters{
    int layer;
    int enemy_HP;
    int enemy_MAXHP;
    int zone_point;
    int zone_type;
}deathzone_parameters;
int deathzone(int layer,int enemy_HP,int enemy_MAXHP,int zone_point,int zone_type);
#endif