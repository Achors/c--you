#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "functions.h"



  

int main(void) {
    // Write your program for assignment 1 here

    int user_num;

    printf("\n  Enter a random positive integer: \n :");
    user_num = read_int();

    while(user_num != 0){
        int divisors = user_num;
        printf("The divisors of %d are: ", user_num);
              
        for(int i = 1; i < user_num; i++){
            if (user_num % i == 0){
                
                 printf("%d, ", i);
                 divisors += i;          
            
            }   

        }
        printf("%d", user_num);
        printf("\n sum of the divisors is %d", divisors);

        printf("\n  Enter a random positive integer: \n :");
        user_num = read_int();
    }


    return 0;

} 

    
    
