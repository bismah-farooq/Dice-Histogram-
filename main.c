// Name: Bismah Farooq
// Description: This is a C program in which a user can roll a dice and it will show the histogram depending on what the computer will randomly guess.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main()
{
    int array[13] = {0};
    int rolls = 0;
    int die1;
    int die2;
    int sum;
    double twoPercent;
    int stars;
    
// computer will decide a randomly
    srand(time(NULL));
    
    printf(" - Dice Histogram - \n");
    
// while rolls are less than or equal to 0, it will continue to ask the user for the number of rolls
    while (rolls <= 0){
        printf("Enter # of rolls: ");
        scanf("%d", &rolls);
    }

// Taking two random 6 sided dices and summing it together and then incrementing it
    for (int y = 0; y < rolls; y++){
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        array[sum]++;
    }
    
// making the list of numbers and making a histogram
    for (int i = 2; i <= 12; i++){
        printf("%2d ", i);
        
        twoPercent = (array[i] * 100.0) / rolls;
        stars = twoPercent / 2;
        for (int z = 0; z < stars; z++) {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
