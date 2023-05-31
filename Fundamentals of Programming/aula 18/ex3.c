/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie uma função que retorne o fatorial de um número passado por parâmetro.

fatorial(n):

=1 se n=0

= n x fatorial (n-1) se n>0

 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int numberFactorial(int value)
{

    if (value == 0)
    {
        return 1;
    }
    else
    {
        return value * numberFactorial(value - 1);
    }
}

int main()
{
    int value;

    printf("Please type a number that you want do factor: ");
    scanf("%d", &value);

    int factor = numberFactorial(value);
    printf("The number's factorial is = %i", factor);

    return 0;
} // main