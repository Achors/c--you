#include <stdio.h>      // for printf
#include "functions.h"  // for read_int


int readnumber(int min, int max) {
    int number;
    printf("Enter a number between %d and %d: ", min, max);
    number = read_int();

    while (number < min || number > max) {
        printf("The number must be between %d and %d, try again!\n", min, max);
        printf("Enter a number between %d and %d: ", min, max);
        number = read_int();
    }

    return number;


}

int main(void) {
    int number = readnumber(1, 10);
    printf("You entered the number %d\n", number);
    number = readnumber(10, 20);
    printf("You entered the number %d\n", number);
    number = readnumber(-42, 42);
    printf("You entered the number %d\n", number);
    return 0;
}