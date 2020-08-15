#ifndef Hyperheal_H
#define Hyperheal_H

typedef struct Hyperheal_parameters{
  int *skillpoint;
  int *nowHP;
  int healHP;
  int MaxHP;
  int *poison_flag;
}Hyperheall_parameters;
int Hyperheal(int *skillpoint,int *nowHP,int healHP,int MaxHP,int *poison_flag);
#endif