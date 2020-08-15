#ifndef Select_equipment_H
#define Select_equipment_H

typedef struct select_equipment_parameters{
    int layer;
    int equipmentID;
}select_equipment_parameters;
int select_equipment(int layer,int equipmentID);
#endif