#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// This will only work on windows
#define clrscr() printf("\e[1;1H\e[2J")

int main(void) 
{
    char ready[] = "yes";
    srand( time(NULL) );
    int dice = 3;

    printf("Would you like to roll the dice (yes, no)?\n");
    scanf("%s", &ready);

    // Check if the input equals no
    if (!strcmp(ready, "no"))
    {
        clrscr();
        printf("Ok, programm exiting.");
        return 0;
    } else {
        clrscr();
        printf("How many dice would you like to roll?\n");
        scanf("%d", &dice);

        clrscr();
        // Create variable for the numbers landed on and all numbers
        int num = 0;
        int allNums = 0;
        for (int i = 1; i <= dice; i++) 
        {
            // Make sure a number between 1 and 6 is returned for a standard 6 side dice
            num = rand() % 6 + 1;
            printf("Dice number %d landed on: %d\n", i, num);
            // Add together the number we landed on as well as all previous numbers
            allNums = allNums + num;
        }
        printf("All the dice values add up to %d", allNums);
        return 0;
    }
    
}
