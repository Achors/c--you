#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

// #define MAX_LENGTH 200

int compare_strings(const char str1[], const char str2[]);
void swap_strings(char str1[], char str2[]);

int main(void) {
    char str1[5000];
    char str2[sizeof(str1) / sizeof(str1[0])];
    char str3[sizeof(str1) / sizeof(str1[0])];
    const int size = sizeof(str1) / sizeof(str1[0]);

    printf("Enter the first string: ");
    read_string(str1, sizeof(str1));

    printf("Enter the second string: ");
    read_string(str2, sizeof(str2));

    printf("Enter the third string: ");
    read_string(str3, sizeof(str3));

    if (compare_strings(str1, str2) > 0) {
        swap_strings(str1, str2);
    }
    if (compare_strings(str2, str3) > 0) {
        swap_strings(str2, str3);
    }
    if (compare_strings(str1, str2) > 0) {
        swap_strings(str1, str2);
    }


    printf("\nThe strings in alphabetical order are:\n");
    printf("%s\n", str1);
    printf("%s\n", str2);
    printf("%s\n", str3);

    return 0;
}

int compare_strings(const char str1[], const char str2[]) {
    for (size_t i = 0; ; i++) {
        char char1;
        char char2;

        if (str1[i] != '\0') {
            char1 = str1[i] ; 
        } else {
            char1 = '\0'; 
        }

        if (str2[i] != '\0') {
            char2 = str2[i] ; 
        } else {
            char2 = '\0'; 
        }

        if (char1 < char2) {
            return -1; 
        } else if (char1 > char2) {
            return 1; 
        }

        
    }
    return 0; 
}


void swap_strings(char str1[], char str2[]) {
    char temp[MAX_LENGTH];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}
