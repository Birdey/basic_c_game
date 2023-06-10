#include <stdio.h>
#include "gameUtils.h"

#ifndef BB_GAMEUTILS
#define BB_GAMEUTILS

int getInput(int min, int max)
{
    int inputValue = -1;
    printf("Select: ");
    scanf("%d", &inputValue);
    while (inputValue < min || inputValue > max)
    {
        printf("Sorry %d is not a valid input. Please try again: ", inputValue);
        scanf("%d", &inputValue);
    }
    return inputValue;
}

#endif // BB_GAMEUTILS
