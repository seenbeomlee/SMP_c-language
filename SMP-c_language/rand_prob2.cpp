#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//////
int randDice(void);
////

void printResult(int a);

int main(void)
{
    int dice1, dice2;

    srand(time(NULL));

    dice1 = randDice();
    dice2 = randDice();

    printf("Dice 1: % d, Dice 2 : % d\n", dice1, dice2);

    ////
    printResult(dice1 + dice2);
    ////
    return 0;

}

////
int randDice(void)
////
{
    return rand() % 6 + 1;
}

void printResult(int a)
{
    if (a % 2) ////
        printf("The sum of the 2 dice is % d.You lose.\n", a);
    else
        printf("The sum of the 2 dice is % d.You win.\n", a);
}
