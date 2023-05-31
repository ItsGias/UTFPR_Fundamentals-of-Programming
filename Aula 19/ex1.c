/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva um programa que contenha duas variáveis inteiras. Compare os endereços e exiba o endereço e o conteúdo do maior endereço.
 * @version 0.1
 * @date 25-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int x = 10, y = 15;

    if (&x > &y)
    {
        printf(" the variable with the biggest value is %i and it's at the address %i\n", x, &x);
    }

    else
    {
        printf(" the variable with the biggest value is %i and it's at the address %i\n", y, &y);
    }

    return 0;
}