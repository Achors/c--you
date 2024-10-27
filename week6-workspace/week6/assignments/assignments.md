# Week XX - Assignments

Name: Aldoff Nyerere Nyabando

Group: ETI1V.1F

Date: 11/10/2024

**NOTE**: if you'd like to have syntax highlighting in your markdown file, install the "Markdown Preview Github Styling" extension in VS Code.

## First assignment

The first assignment I completed is assignment 2 Which sentence has the most vowels?.
This is the code I wrote:

```c
// TODO: Write your code here
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

```

## Second assignment

The second assignment I completed is assignment YYY.
This is the code I wrote:

```c
// TODO: Write your code here
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "functions.h"

#define MAX_LENGTH 200

int compare_strings(const char str1[], const char str2[]);
void swap_strings(char str1[], char str2[]);

int main(void) {
    char str1[MAX_LENGTH];
    char str2[MAX_LENGTH];
    char str3[MAX_LENGTH];

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
            char1 = str1[i] | 0x20; 
        } else {
            char1 = '\0'; 
        }

        if (str2[i] != '\0') {
            char2 = str2[i] | 0x20; 
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


```

## Third assignment (optional)

I've actually made three assignments this week! The third assignment I completed is assignment ZZZ.
This is the code I wrote:

```c
// TODO: Write your code here
```
