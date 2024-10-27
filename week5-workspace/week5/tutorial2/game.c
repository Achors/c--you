#include <stdio.h>
#include "functions.h"
#include "game.h"



void shuffle(int values[], int size, int how_many_times) {
    for (int i = 0; i < how_many_times; i++) {
        int index1 = random_int(0, size - 1);
        int index2 = random_int(0, size - 1);
        swap_elements(values, index1, index2);
    }
}
void swap_elements(int values[], int index1, int index2){
    int swapping = values[index1];

    values[index1] = values[index2];
    values[index2] = swapping;
}

int count_false(const bool face_up[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        if (face_up[i] == false) {
            count++;
        }
    }

    return count;
}



int select_face_down_card(const bool selection[], int size) {
    int index;

    while (index < 0 || index >= size || selection[index]) {  
        index = read_int();

        if (index >= 0 && index < size) {
            if (!selection[index]) {
                return index;
            } else {
                printf("The card at index %d is already face up. Try again.\n", index);
            }
        } else {
            
            printf("Invalid index. Please enter a number between 0 and %d.\n", size - 1);
        }
    }
}


void print_cards(int cards[], const bool face_up[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%2d: ", i);
        
        if (face_up[i]) {
            
            printf("%2d\n", cards[i]);
        } else {
            
            printf("**\n");
        }
    }
}
