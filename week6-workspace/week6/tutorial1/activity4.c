#include <stdio.h>
#include "functions.h"
#include "tutorial.h"

int main(void) {
    char name[100];
    printf("Enter your Name: ");
    read_string(name, 100);
    to_uppercase(name);

    printf("Hello, ");
    print_string(name);
    
    // print_string("!\n");
    
    return 0;
}
