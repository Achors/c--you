#include <stdio.h>
#include "game.h"

int main(void) {
    printf("Welcome to the memory game!\n");

    int cards[8] = {1, 1, 2, 2, 3, 3, 4, 4};
    bool face_up[sizeof(cards) / sizeof(cards[0])] = {false};
    const int nr_of_cards = sizeof(cards) / sizeof(cards[0]);
    int rounds = 0;

    shuffle(cards, nr_of_cards, 10);

    while (count_false(face_up, nr_of_cards) > 0) {
        print_cards(cards, face_up, nr_of_cards); 

    
        printf("Select the index of your first card:\n");
        int first_index = select_face_down_card(face_up, nr_of_cards);
        face_up[first_index] = true;

        printf("You selected card %d: %d\n", first_index, cards[first_index]);

               
        printf("Select the index of your second card:\n");
        int second_index = select_face_down_card(face_up, nr_of_cards);
        face_up[second_index] = true;

        printf("You selected card %d: %d\n", second_index, cards[second_index]);
        rounds++;

        if (cards[first_index] == cards[second_index]) {
            printf("It's a match!\n");
        } else {
            printf("Not a match. Try again.\n");
            face_up[first_index] = false;
            face_up[second_index] = false;
        }
    }

    
    print_cards(cards, face_up, nr_of_cards); 

    printf("Congratulations, you found all pairs in %d rounds!\n", rounds);

    return 0;
}
