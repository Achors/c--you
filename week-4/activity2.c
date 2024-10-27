#include <stdio.h>      // for printf
#include "functions.h"  // for read_int

int number;

int readnumber() {
    printf("Enter a number between 1 and 10: ");
    number = read_int();

    while (number < 1 || number > 10) {
        printf("The number must be between 1 and 10, try again!");
        
        number = read_int();
        
    }
    
       
    return number;

}

int main(void) {    
    int number = readnumber();
    printf("You entered the number %d\n", number);
    return 0;
}