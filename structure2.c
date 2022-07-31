#include<stdio.h>

typedef struct Gun 
{
    char Rifle [40];
    char MachineGun [20];
    char Pistol [20];
}Gun;

typedef struct Accessories
{
    char Foregrip [20];
    char Handgrip [20];
    char Strock [20];
}Accessories;

typedef struct System
{
    char GBB [20];
    char AEG [20];
    char PTW [20];
    char Polarstar [20];
}System;

typedef struct warrior
{
    Gun gun;
    Accessories accessories; 
    System system;
}warrior;

int main ()
{
    warrior Jack = 
    {
        {"BCM jack Carbine","M249","G34"},
        {"magpulmoe","G-style","B6strock"},
        {"GBB","AEG","PTW","Polarstar"}
    };

    printf("Worrior Jack Gear:\nRifle= %s\nHandgrip= %s\nsystem= %s\n",
    Jack.gun.Rifle,
    Jack.accessories.Handgrip,
    Jack.system.AEG
);
    return 0;
}