#include<stdio.h>
void Printarr(int arr[],int size)
    {
        for (int i = 0; i < size; i ++)
        {
            arr[i]++;
            printf("%d",arr[i]);
        }
    }

void doSomething (int a)
{
    a++;
}

int main()
{
    int slicesEachMeal[] = {4,5,4,6,3,2};
    Printarr(slicesEachMeal,6);
    printf("\n");
        for (int i = 0; i < 6; i ++)
        {
            printf("%d",slicesEachMeal[i]);
        }

    // Printarr(slicesEachMeal,6);
   // int a = 5;
    //doSomething(a);
    // printf("\n%d",a);
    return 0;
}