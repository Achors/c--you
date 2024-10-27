#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "functions.h" 

#define MAX_SENTENCES 100
#define MAX_LENGTH 200

bool contains_only_whitespace(const char string[]);
int count_vowels(const char string[]);

int main(void) {
    char sentences[MAX_SENTENCES][MAX_LENGTH]; 
    int max_vowel_count = 0; 
    char best_sentence[MAX_LENGTH]; 
    int sentence_count = 0; 

    bool continue_reading = true;

    while (continue_reading) {
        printf("Enter a sentence (or whitespace to stop): ");
        char temp[MAX_LENGTH];
        read_string(temp, sizeof(temp)); 
        
        if (contains_only_whitespace(temp)) {
            continue_reading = false;
        } else {
            int current_vowel_count = count_vowels(temp);
            
            if (current_vowel_count > max_vowel_count) {
                max_vowel_count = current_vowel_count;
                strcpy(best_sentence, temp); 
            }
        }
    }

    if (max_vowel_count > 0) {
        printf("The sentence with the most vowels is: %s\n", best_sentence);
        printf("Number of vowels: %d\n", max_vowel_count);
    } else {
        printf("No valid sentences were entered.\n");
    }

    return 0;
}

bool contains_only_whitespace(const char string[]) {
    for (size_t i = 0; string[i] != '\0'; i++) {
        if (string[i] != ' ' && string[i] != '\t' && string[i] != '\n') {
            return false; 
        }
    }
    return true; 
}

int count_vowels(const char string[]) {
    int count = 0;
    for (size_t i = 0; string[i] != '\0'; i++) {
        char ch = string[i];
        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            count++;
        }
    }
    return count;
}
