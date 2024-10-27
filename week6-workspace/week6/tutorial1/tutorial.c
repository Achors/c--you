#include "tutorial.h"
#include <stdio.h>
#include <ctype.h>

// TODO: put your function definitions in here

void print_string(const char string[]){
    char i = 0;
    while (string[i] != '\0'){
        printf("%c", string[i]);
        i++;
    }
    printf("\n");

}
void to_uppercase(char string[]){
    int i = 0;
    while (string[i] != '\0'){
        string[i] = toupper(string[i]);
        i++;
    }
    printf("\n");

}

size_t string_length(const char string[]){
    size_t i = 0;
    while (string[i] != '\0'){
        i++;

 }
    return i;
   
}

void print_string_reverse(const char string[]) {
    size_t length = string_length(string); 
    
    for (size_t i = length; i > 0; i--) {
       char new_string = string[i - 1];
        printf("%c", new_string);
    }

    printf("\n");
}
