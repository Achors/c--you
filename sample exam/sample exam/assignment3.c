#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"



void new_str(char str[], char target, char replacement){
    target = tolower(target);
    
    for (int i = 0; str[i] != '\0'; i++){
        if (tolower(str[i]) == target){
            str[i] = replacement;
        }

    }
}


int main(){
    char str[100];
    char target, replacement;

    printf("Enter your string: \n");
    read_string(str, 100);

    printf("Enter your target character: \n");
    target = read_char();

    printf("Enter your replacement character: \n");
    replacement = read_char();

    new_str(str, target, replacement);

    printf("Modified string: %s\n", str);

    return 0;

}