#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

// Function to print even numbers
void is_even(int nums[], int count) {
    int even_count = 0;
    for (int i = 0; i < count; i++) {
        if (nums[i] % 2 == 0) {
            printf("%d ", nums[i]);
            even_count++;
        }
    }
    if (even_count == 0) {
        printf("No even numbers entered");
    }
    printf("\n");
}

// Function to print odd numbers
// void is_odd(int nums[], int count) {
//     int odd_count = 0;
//     for (int i = 0; i < count; i++) {
//         if (nums[i] % 2 == 1) {
//             printf("%d ", nums[i]);
//             odd_count++;
//         }
//     }
//     if (odd_count == 0) {
//         printf("No odd numbers entered");
//     }
//     printf("\n");
// }

int main(void) {
    int user_nums[10];
    int count = 0;

    // Input 10 integers
    while (count < 10) {
        printf("Integer %d: ", count + 1);
        user_nums[count] = read_int();
        count++;
    }

    // Print even numbers
    printf("Even numbers: ");
    is_even(user_nums, count);


    return 0;
}
