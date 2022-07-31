#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>

void game_start()
{
    int guess;
    int random = rand() % 10;
    printf("The answer is %d\n",random);
    printf("Let's start!!!\n");
    printf("guess a number: ");
    do
    {
        scanf("%d",&guess);
        if (guess == random)
                {
                Sleep(1000);
                printf("You win\n");
                }
        if (guess < random)
            {   
                Sleep(1000);
                printf("guess again:\n");
                printf("The number is too low\n");

            }
        else if (guess > random)
            {   
                Sleep(1000);
                printf("guess again:\n");
                printf("The number is too high\n");
            }
    }while(guess != random);
}

int main()
{
    printf("Welcome to the guessing games!\nHere is the options:\n1. start the game\n2. Quit\n");
    int choice;
    scanf("%d",&choice);
    srand(time(NULL));
    switch (choice)
    {
        case 1:
            game_start();
            break;
        case 2:
            printf("Thank you for playing!\n");
            break;
    }
    return 0;
}

