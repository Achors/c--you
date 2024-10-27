#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"


void replace_vowels(char str[100], char replacement){
    for (int i = 0; str[i] != '\0'; i++){       

        if (tolower(str[i]) == 'a' || tolower(str[i] )== 'e' || tolower(str[i]) == 'i' || tolower(str[i]) == 'o' || tolower(str[i]) == 'u'){
            str[i] = replacement;
            
        }
    }
}

int main(){
    char str[100];
    char replacement;

    printf("Enter your string: ");
    read_string(str, 100);


    printf("Enter your replacement: ");
    replacement = read_char();


    replace_vowels(str, replacement);

    printf("Modified string: %s\n", str);




    return 0;
}