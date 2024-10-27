#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"

/// @brief Finds the index of the maximum element in an array.
/// @param arr The array to search.
/// @param size The number of elements in the array.
/// @return The index of the maximum element in the array.
int index_of_max(const int arr[], int size);

int main(void) {
    // Write your program for assignment 4 here
    
    return 0;
}

int index_of_max(const int arr[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[index]) {
            index = i;
        }
    }
    return index;
}
