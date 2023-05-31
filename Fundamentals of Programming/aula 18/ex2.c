/**
 * @file ex2.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie uma função que retorne x elevado a y através de operação de multiplicação. A função recebe x e y por parâmetro
 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int NumberExponential(int x, int y)
{
    if (y == 1)
    {
        return x;
    } // base case
    else if (y == 0)
    {
        return 1;
    } // base case
    else
    {
        return x * NumberExponential(x, y - 1); // recursive call

    } // recursive case

} // Number Exponential function

int main()
{
    int x, y;
    printf("Type the value that will be calculated: ");
    scanf("%i", &x);

    printf("Type the exponent: ");
    scanf("%i", &y);

    int exponential = NumberExponential(x, y); // function

    printf("The multiplication of the number that was informed %i = %i", x, exponential);

    return 0;
} // main