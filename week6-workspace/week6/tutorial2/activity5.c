#include <stdio.h>  // for printf
#include "functions.h"

#define number_sentences 5
#define sentence_length 200

int main(void) {
    char strings[number_sentences][sentence_length];

    printf("Enter %d sentences:\n", number_sentences);
    
    
    for (int i = 0; i < number_sentences; i++) {
        read_string(strings[i], sentence_length); 
    }

    printf("You entered the following %d sentences:\n", number_sentences);
    
    
    for (int i = 0; i < number_sentences; i++) {
        printf("%s\n", strings[i]); 
    }

    return 0;
}