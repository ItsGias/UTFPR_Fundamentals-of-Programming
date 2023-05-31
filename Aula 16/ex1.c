/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Faça um algoritmo que implemente uma função que receba 3 números inteiros e retorne o maior valor. Se algum número for negativo retorne -1;
 * @version 0.1
 * @date 24-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int numberReturner(int x[])
{
    int biggerNumber = x[0];

    if (biggerNumber < 0)
    {
        return -1;
    } // if

    for (size_t i = 0; i < 3; i++)
    {
        if (biggerNumber < x[i])
        {
            biggerNumber = x[i];
        } // if
    }     // for

    return biggerNumber;
} // function
int main()
{
    int numbers[3], result;

    printf("Hello user!\n");                                                        // intro
    printf("please insert three different values, besides a negative number!!!\n"); // gets three numbers from the user

    for (size_t i = 0; i < 3; i++)
    {
        printf("\nNumber[%i]: ", i + 1);
        scanf("%d", &numbers[i]);
    } // for

    result = numberReturner(numbers); // calls the function

    if (result == -1)
    {
        printf("\nINVALID VALUE, NEGATIVE NUMBER DETECTED, RETURNING %i!!!\n", result);
    } // if the number is invalid

    else
    {
        printf("\nThe biggest number is %i\n\n", result);
    } // else to return the biggest number
    return 0;
} // main