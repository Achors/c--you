#include <stdio.h>
#include "functions.h"
#include "week7.h"

void remove_vowels(char str[]);


int main(void) {
    char string[100];
    char new_str[100];
    printf("Enter a string: ");
    read_string(string, sizeof(string));
    while (count_nonspace(string) > 0) {
        remove_vowels(string);
        printf("String without vowels: %s\n", string);
        printf("Enter another string: ");
        read_string(string, sizeof(string));
    }
}
