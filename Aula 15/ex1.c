/**
 * @file ex1.c
 * @author Gian Lucas dos Reis
 * @brief
 * @version 0.1
 * @date 2023-03-15
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Months
{
    jan,
    feb,
    mar,
    apr,
    may,
    jun,
    jul,
    aug,
    sep,
    oct,
    nov,
    dec
}; // enum

int main()
{

    int option_1 = 31, option_2 = 30;

    int month;

    printf("Hello user!!!\n\n\n");

    printf("January = 0\n");
    printf("February = 1\n");
    printf("March = 2\n");
    printf("April = 3\n");
    printf("May = 4\n");
    printf("June = 5\n");
    printf("July = 6\n");
    printf("August = 7\n");
    printf("September = 8\n");
    printf("October = 9\n");
    printf("November = 10\n");
    printf("December = 11\n\n");
    printf("Please insert the value of the month that you want to see: ");
    scanf("%d", &month); // gets the value of which month the user wants to see

    switch (month)
    {
    case jan:
        printf("\n\nThe selected month is January and has %i days!!!\n\n", option_1);
        break;

    case feb:
        printf("\n\nThe selected month is Febuary and has 28 days in a common year and 29 days on a leap year!!!\n\n");
        break;

    case mar:
        printf("\n\nThe selected month is March and has %i days!!!\n\n", option_1);
        break;

    case apr:
        printf("\n\nThe selected month is April and has %i days!!!\n\n", option_2);
        break;

    case may:
        printf("\n\nThe selected month is May and has %i days!!!\n\n", option_1);
        break;

    case jun:
        printf("\n\nThe selected month is June and has %i days!!!\n\n", option_2);
        break;

    case jul:
        printf("\n\nThe selected month is July and has %i days!!!\n\n", option_1);
        break;

    case aug:
        printf("\n\nThe selected month is August and has %i days!!!\n\n", option_1);
        break;

    case sep:
        printf("\n\nThe selected month is September and has %i days!!!\n\n", option_2);
        break;

    case oct:
        printf("\n\nThe selected month is October and has %i days!!!\n\n", option_1);
        break;

    case nov:
        printf("\n\nThe selected month is November and has %i days!!!\n\n", option_2);
        break;

    case dec:
        printf("\n\nThe selected month is December and has %i days!!!\n\n", option_1);
        break;

    default:
        printf("You selected an invalid number, please try again!!!\n\n");
        break;
    } // switch case

    return 0;
} // main
