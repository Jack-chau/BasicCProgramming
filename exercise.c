#include <stdio.h>
double index_function (double number, int index)
{
    double result = 1;
        for (int i = 0; i < index; i++)
        {
            result = result  * number;
            printf("i = %d",i);
            printf("\n");
        }
return result;
}

void Print_result (double number, int index)
{
    double result;
    result = index_function(number, index);

    printf("\n the result is %lf",result);
}

int main ()
{
    double number;
    int index;
    double result;
    printf("Please enter the number: \n");
    scanf("%lf",&number);
    printf("Please enter the index: \n");
    scanf("%d",&index);
    Print_result(number,index);
    return 0;
}