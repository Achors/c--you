#include <stdio.h>
#include "functions.h"



int dice_roll(){
    int dice_side = random_int(1,6);
    return dice_side;
}


int main(void) {
    printf("How many times do you want the dice to be rolled?\n Enter number:");
    int rolling_times = read_int();
   

    int outcomes[11] = {0};

        for (int i = 0; i < rolling_times; i++) {
        int dice1 = dice_roll();
        int dice2 = dice_roll();
        int sum = dice1 + dice2;
        
        outcomes[sum -2]++;
    }

    printf("\nResults:\n");
    for (int i = 0; i < 11; i++) {
        int occurrences = outcomes[i];
        double percentage = (occurrences / (double)rolling_times) * 100; 
        printf("Sum %2d: %6d times (%.1f%%)\n", i + 2, occurrences, percentage);
    }

    return 0;
}