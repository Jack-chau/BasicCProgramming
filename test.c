#include<stdio.h>
void Printarr(int arr[],int size)
    {
        for (int i = 0; i < size; i ++)
        {
            printf("%d",arr[i]);
        }
    }



int main ()
{
    enum {columns = 3, rows =2};
   
    int array [rows][columns]= 
    {
        {1,2,3},
        {4,5,6}
    };

    for (int i = 0; i < rows; i++)
    {
        Printarr(array[i],columns);
        printf("\n");
    }
    return 0;
}