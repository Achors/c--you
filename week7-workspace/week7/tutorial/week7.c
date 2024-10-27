#include "week7.h"
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

//int numbers[] = {2, 3, 5, 7, 11, 13, 17, 19};
//bool contains5 = contains_int(numbers, size, 5);
bool contains_int(const int numbers[], size_t size, int value) {
    for (int i = 0; i < size; i++){
        if (numbers[i] == value){
            return true;
        }
    }
    return false;
    // TODO: implement reduction algorithm:
    //  1. Initialize the accumulator variable
    //  2. Loop through the array and update the accumulator variable
    //  3. Return the accumulator variable
}

bool has_duplicates(const int numbers[], size_t size) {
    for (int i = 0; i < size; i++){
        if (contains_int(numbers, size, numbers[i])){
            return true;
        }
    } return 0;

    // TODO: implement reduction algorithm:
    //  1. Initialize the accumulator variable
    //  2. Loop through the array and update the accumulator variable
    //      (use the contains_int function!)
    //  3. Return the accumulator variable
}

void print_int_array(const int values[], size_t size) {
    printf("[");
    if (size > 0) {
        printf("%d", values[0]);
        for (size_t i = 1; i < size; i++) {
            printf(", %d ", values[i]);
        }
    }
    printf("]\n");
}

int read_valid_index(size_t size) {
    int index = read_int();
    while (index < 0 || index >= size) {
        printf("Invalid index. Please enter a number between 0 and %zu: ", size - 1);
        index = read_int();
    }
    return index;
}

int remove_by_index(int numbers[], size_t size, size_t index){
    int number_indices = size - 1;
  for (size_t i = index; i < number_indices; i++) {
        numbers[i] = numbers[i + 1]; 
    }
    
    size--;

    return size;
}
void swap_strings(char string1[], char string2[]) {
    size_t i = 0;
    while (string1[i] != '\0' && string2[i] != '\0') {
        char temp = string1[i];
        string1[i] = string2[i];
        string2[i] = temp;
        i++;
    }
    while (string1[i] != '\0') {
        string2[i] = string1[i];
        string1[i] = '\0';
        i++;
    }
    while (string2[i] != '\0') {
        string1[i] = string2[i];
        string2[i] = '\0';
        i++;
    }
 }

bool isvowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

size_t count_vowels(const char str[]) {
    size_t count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (isvowel(str[i])) {
            count++;
        }
    }
    return count;
}

size_t count_nonspace(const char str[]) {
    size_t count = 0;
    for (size_t i = 0; str[i] != '\0'; i++) {
        if (!isspace(str[i])) {
            count++;
        }
    }
    return count;
}

/// @brief Removes all vowels from a string.
/// @param str the string to remove vowels from
void remove_vowels(char str[]) {
    int j = 0; 

    for (int i = 0; str[i] != '\0'; i++) {        
        if (isvowel(str[i]) == false) {  
            str[j++] = str[i];  
        }
    }
    
    str[j] = '\0'; 
}

int bubble_longest_string(char sentences[][100], size_t size) {
    int swap_count = 0;
     
        for (int i = 0; i < size - 1; i++) {
            if (strlen(sentences[i]) > strlen(sentences[i + 1])) {
                swap_strings(sentences[i], sentences[i + 1]);
                swap_count++;  
            }
        }

    return swap_count;
}

int bubble_sort_strings(char strings[][100], size_t size) {
    int swaps = 0;

    for (size_t i = 0; i < size - 1; i++) {
        swaps += bubble_longest_string(strings, size - i);
    }

    return swaps;
}

size_t find_string_with_fewest_vowels(const char strings[][100], size_t size) {
    size_t index_of_fewest = 0; 
    int fewest_vowels = count_vowels(strings[0]); 

    for (size_t i = 1; i < size; i++) {
        int current_vowels = count_vowels(strings[i]);
        if (current_vowels < fewest_vowels) { 
            fewest_vowels = current_vowels;
            index_of_fewest = i;
        }
    }
    return index_of_fewest;
}