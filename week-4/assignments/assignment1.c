#include <stdio.h>
#include "functions.h" 
#include "math.h" 


float read_operator(float first_num, float second_num, char operator) {
    float answer;

    if (operator == '+') {
        answer = first_num + second_num;
    } else if (operator == '-') {
        answer = first_num - second_num;
    } else if (operator == '/') {
        answer = first_num / second_num;
    } else if (operator == '*') {
        answer = first_num * second_num;
    } else if (operator == '^') {
        answer = powf(first_num, second_num);
    } else {
        printf("Invalid operator! Use +, -, *, ^, or /.\n");
        return 0;
    }

    return answer;
}

char operator_validation(){
    char operator;

    do {
            printf("Enter your Operator (+, -, *, /): ");
            operator = read_char();

            
            if (operator != '+' && operator != '-' && operator != '*' && operator != '/') {
                printf("Invalid operator! Please use +, -, *, or /.\n");
            }
        } while (operator != '+' && operator != '-' && operator != '*' && operator != '/');


        return operator;


}

int main(void) {
    float first_num;
    float second_num;
    char operator;
    char response;

    
    do {
        printf("\nEnter the First Number: ");
        first_num = read_float();

        operator = operator_validation();

        
        printf("Enter the Second Number: ");
        second_num = read_float();

        
        if (operator == '/' && second_num == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
           
            printf("Your answer is %.4f.\n", read_operator(first_num, second_num, operator));
        }

        printf("Would you like to continue? Y/N: ");
        response = read_char();
    } while (response == 'y' || response == 'Y'); 

    printf("Byee!\n");

    return 0;
}
