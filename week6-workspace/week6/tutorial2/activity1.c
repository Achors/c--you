#include <stdio.h>      // for printf
#include "functions.h"  // for copy_string
#include "tutorial.h"

int main(void) {
    char destination[200];

    copy_string(destination, "Hello, world!", 6);
    printf("Destination: %s\n", destination);

    copy_string(destination, "42!", 2);
    printf("Destination: %s\n", destination);

    copy_string(destination, " quick brown foxes jump over a lazy dog", 18);
    printf("Destination: %s\n", destination);

    return 0;
}
