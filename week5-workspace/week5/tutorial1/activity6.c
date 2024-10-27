#include <stdio.h>      // for printf
#include "functions.h"  // for read_int

int main(void) {
    printf("\nEnter positive random Numbers:\n");
       
             
    int random_num[10];       
    int numbers = 1; 
    int count = 0;          
    
    for (int i = 0; i < 10 && numbers > 0; i++) {
        printf("Enter number %d: ", i + 1);
        numbers = read_int();

        if (numbers > 0) {
            random_num[count] = numbers;
            count++;
        }
    }
    
    printf("\nYou entered the following values:\n");
    bool printed_first = false;
    for (int i = 0; i < count; i++) {
        if (random_num[i] > 5) {
            if (printed_first) printf(", ");    
            printed_first = true;               
            printf("%d", random_num[i]);
        }
    }
    printf("\n");
    printf("The size of the array is %zu\n", sizeof(numbers));
    return 0;
}
