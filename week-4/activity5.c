#include <stdio.h>      // for printf
#include "functions.h"  // for read_int



int main(void) {
    printf("You entered the number %d\n", readnumber(1, 10));
    printf("You entered the number %d\n", readnumber(10, 20));
    printf("You entered the number %d\n", readnumber(-42, 42));
    return 0;
}