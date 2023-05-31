/**
 * @file ex5.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie uma função que que receba o valor de um inteiro positivo N, calcule e retorne o fatorial desse número.
 * @version 0.1
 * @date 27-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int FactorialFunction(int n)
{
    int result;
    for (result = 1; n > 1; n = n - 1)
    {
        result = result * n;
    } // for to do the factorial operation

    return result;
} // Factorial Function

int main()
{
    int number, result;
    printf("Hello user!\n"); // intro
    printf("Please enter the number that you wish to know the factorial: ");
    scanf("%d", &number); // gets the number that the user wants to know the factorial

    result = FactorialFunction(number); // calls the factorial function

    printf("\n\nThe factorial of %i is: %d\n", number, result); // result of the factorial

    return 0;
} // main