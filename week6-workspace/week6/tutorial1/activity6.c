#include <stdio.h>
#include "functions.h"
#include "tutorial.h"

int main(void) {
    print_string_reverse("Hello, world!"); // should print "!dlrow ,olleH"
    print_string_reverse("dont forget me");              // should print nothing (empty string)
    print_string_reverse("12345");         // should print "54321\n"
    return 0;
}
