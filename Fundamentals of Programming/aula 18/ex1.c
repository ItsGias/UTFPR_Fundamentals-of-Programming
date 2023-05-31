/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie uma função que retorne x*y através de operação de soma. A função recebe x e y por parâmetro
 * @version 0.1
 * @date 05-04-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int NumberMultiplier(int x, int y)
{
    if (y > 0)
    {
        return x + NumberMultiplier(x, y - 1); // recursive call

    } // recursive case

    else
    {
        return 0;
    } // base case

} // Number multiplication function

int main()
{
    int x, y;
    printf("Type the number that you want to multiply: ");
    scanf("%i", &x);

    printf("Tell how many times you want to multiply: ");
    scanf("%i", &y);

    int multiplication = NumberMultiplier(x, y); // function

    printf("The number's multiplication is = %i", multiplication);

    return 0;
} // main