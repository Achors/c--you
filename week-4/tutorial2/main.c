#include <stdio.h> 
#include "functions.h"
#include "days.h"





int main(void) {
    // Get the current date
    int current_date[3];    // day, month, year
    get_current_date(current_date);
    int year2 = current_date[0];     // the current year
    int month2 = current_date[1];    // the current month
    int day2 = current_date[2];      // the current day

    // Get the birthdate from the user
    printf("Enter the day of your birthdate: ");
    int day1 = read_int();
    printf("Enter the month of your birthdate: ");
    int month1 = read_int();
    printf("Enter the year of your birthdate: ");
    int year1 = read_int();

    // TODO: Calculate the number of days between the birthdate and the current date
    int days_lived = days_between_dates(day1, month1, year1, day2, month2, year2);  

    // Print the result
    printf("Today is the %dth day of your life\n", days_lived);

    return 0;
}
