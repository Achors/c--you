#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int read_integers(int integers[], int size) {
    int count = 0;
    int non_zero;

    while (non_zero != 0 && count < size) {
        printf("Number %d: ", count + 1);
        non_zero = read_int();
        if (non_zero != 0) {
            integers[count] = non_zero;
            count++;
        }
    }
    return count;
}

int even_number(int integers[], int size) {
    int even_count = 0;

    printf("Even numbers: ");
    for (int i = 0; i < size; i++) {
        if (integers[i] % 2 == 0) {
            printf("%d ", integers[i]);
            even_count++;
        } 
    }
    if (even_count == 0) {
        printf("No even numbers entered.\n");
    } else {
        printf("\n");
    }
}

int odd_number(int integers[], int size) {
    int odd_count = 0;

    printf("Odd numbers: ");
    for (int i = 0; i < size; i++) {
        if (integers[i] % 2 != 0) { 
            printf("%d ", integers[i]);
            odd_count++;
        } 
    }
    if (odd_count == 0) {
        printf("No odd numbers entered.\n");
    } else {
        printf("\n");
    }
}

int main(void) {
    int array_size = 10; 
    int count = 0;
    int integers[array_size];

    printf("Enter up to 10 non-zero integers (0 to stop):\n");
    count = read_integers(integers, array_size); 

    printf("You entered: ");
    for (int i = 0; i < count; i++) { 
        printf("%d ", integers[i]);
    }
    printf("\n");

    even_number(integers, count);
    odd_number(integers, count);

    return 0;
}
