#include <stdio.h>
#include "tutorial.h"
#include "string.h"
#include "functions.h"

// TODO: put your function definitions in here
void copy_string(char destination[], const char source[], size_t destination_index) {
    size_t i = 0;

    while (source[i] != '\0') {
        destination[destination_index] = source[i];  
        i++;
        destination_index++;
    }

    destination[destination_index] = '\0';
}

void concatenate_strings(char destination[], const char source[]){
    size_t new_length = strlen (destination);

    copy_string(destination, source, new_length);
}

void reverse_string(char string[]) {
    size_t length = strlen(string);
    size_t i = 0;                  

    while (i < length /2 ) {
        
        char temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - 1 - i] = temp;

        i++;  
    }
}

bool is_palindrome(const char string[]) {
    
    size_t left = 0;
    size_t right = 0;
    while (string[right] != '\0') {
        right++;
    }
    right--; 

    while (left < right) {
        if (string[left] != string[right]) {
            return false; 
        }
        left++;
        right--;
    }
    return true; 
}