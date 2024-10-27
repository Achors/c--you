#include <stdio.h>
#include "functions.h"

int year;
int month;
int day;

bool is_leap_year() {
    if (year % 400 == 0) {
        return true;
    } else if (year % 400 != 0 && year % 100 == 0) {
        return false;
    } else if (year % 400 != 0 && year % 100 != 0 && year % 4 != 0) {
        return false;  
    } else if (year % 400 != 0 && year % 100 != 0 && year % 4 == 0) {
        return true;  
    } else {
        return false;
    }
}

int days_in_month(int month, int year) {
    if (month == 1) {
        return 31;
    } else if (month == 2) {
        if (is_leap_year(year)) { 
            return 29;
        } else {
            return 28;
        }
    } else if (month == 3) {
        return 31;
    } else if (month == 4) {
        return 30;
    } else if (month == 5) {
        return 31;
    } else if (month == 6) {
        return 30;
    } else if (month == 7) {
        return 31;
    } else if (month == 8) {
        return 31;
    } else if (month == 9) {
        return 30;
    } else if (month == 10) {
        return 31;
    } else if (month == 11) {
        return 30;
    } else if (month == 12) {
        return 31;
    }
}

int yeardays() {
    if (is_leap_year()) {
        return 366;
    } else {
        return 365;
    }
    
    return 0;
}

int day_in_year(int day, int month, int year) {
    int days = 0;
    
    for (int i = 1; i < month; i++) {
        days += days_in_month(i, year);
    }
    days += day;

    return days;
}

int remaining_days_in_year(int day, int month, int year) {
    int remaining = yeardays() - day_in_year(day, month, year);
    return remaining;
}

int days_between_dates(int day1, int month1, int year1, int day2, int month2, int year2) {
    int total_days = 0;
    if (year1 == year2) {
        total_days = day_in_year(day2, month2, year2) - day_in_year(day1, month1, year1);
    } else {
        total_days += remaining_days_in_year(day1, month1, year1);

        for (int year = year1 + 1; year < year2; year++) {
            total_days += yeardays(year);
        }

        total_days += day_in_year(day2, month2, year2);
    }

    return total_days;
}

