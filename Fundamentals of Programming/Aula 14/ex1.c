/**
 * @file ex1.c
 * @author Gian Lucas dos Reis
 * @brief Crie uma estrutura para representar as coordenadas de
um ponto no plano (posições X e Y). Em seguida, declare
e leia do teclado dois pontos e exiba a distância entre
eles.
 * @version 0.1
 * @date 2023-03-04
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;
} Coordinates; // struct

int main()
{

    float result = 0;

    Coordinates coordinate;

    printf("Please type a value for the coordinate X: ");
    scanf("%f", &coordinate.x); // asks the user a value for the coordinate X
    printf("\nNow please type a value for the coordinate Y: ");
    scanf("%f", &coordinate.y); // asks the user a value for the coordinate Y

    result = sqrt(pow((coordinate.x - 0), 2) + pow((coordinate.y - 0), 2)); // Equation of the distance between x and y

    printf("\n\nLoading........"); // just to make the code prettier

    printf("\n\nThe distance between the coordinate x = %.2f and the coordinate y = %.2f is: %.2f", coordinate.x, coordinate.y, result); // the result of the distance between the two points
    printf("\n");

    return 0;
} // main