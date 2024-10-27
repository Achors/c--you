#include <stdio.h>      // for printf
#include "functions.h"  // for read_int




int main(void) {
    printf("\nEnter 10 random numbers \n");
    int num_values[10];
    for (int i = 0; i < 10; i++){
        printf("Number %d:", i);
        num_values[i] = read_int();
    
    printf("You entered the number %d\n", num_values[i]);
    }
    return 0;
}
