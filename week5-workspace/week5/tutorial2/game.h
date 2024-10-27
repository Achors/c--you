// These directives ensure that the contents of this file are included only once, even
// if the file is included multiple times
#ifndef GAME_H
#define GAME_H

#include "functions.h"



// TODO: list your prototypes here
/// @brief shuffles an array of integers by swapping two random elements multiple times
/// @param values the array of integers to shuffle
/// @param size the number of elements in the array
/// @param how_many_times the number of times to swap two random elements
void shuffle(int values[], int size, int how_many_times);

/// @brief swaps two elements in an array
/// @param values the array of integers
/// @param index1 the index of the first element to swap
/// @param index2 the index of the second element to swap
void swap_elements(int values[], int index1, int index2);


int count_false(const bool face_up[], int size);


int select_face_down_card(const bool selection[], int size);

void print_cards(int cards[], const bool face_up[], int size);




#endif  // GAME_H