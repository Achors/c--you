#include <stdio.h>  // for printf
#include "functions.h"

#define sentence_number 10
#define sentence_length 200

int main(void) {
    char strings[sentence_number][sentence_length]; 

    printf("Enter %d strings:\n", sentence_number);
    
    
    for (int i = 0; i < sentence_number; i++) {
        read_string(strings[i], sentence_length); 
    }

    printf("You entered the following strings in reverse order:\n");    
    
    for (int i = sentence_number - 1; i >= 0; i--) {
        printf("%s\n", strings[i]); 
    }

    return 0;
}
