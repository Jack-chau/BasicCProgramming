#include<stdio.h>

typedef struct Rectangle
{
    int length;
    int width;
} Rectangle;

typedef struct Position
{
    int x;
    int y;
}Position;

typedef struct BuildingPlan
{
    char name [30];
    Rectangle rectangle;
    Position position; 
}BuildingPlan;

int main ()
{
    Rectangle Rectangle_A = {15,10};
    printf("Length:%d. Width:%d", Rectangle_A.length,Rectangle_A.width);
    BuildingPlan myhouse = {"Jack house",{10,15},{32,48}};
    printf("\nThe house at %d %d (size %d %d) is owned by %s\n",
        myhouse.position.x,
        myhouse.position.y,
        myhouse.rectangle.length,
        myhouse.rectangle.width,
        myhouse.name
    );


    return 0;
}