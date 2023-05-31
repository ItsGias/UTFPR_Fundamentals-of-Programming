/**
 * @file ex2.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Elabore uma função que receba por parâmetro o sexo (char) e a altura de uma pessoa (real), calcule e retorne seu peso ideal. Para isso, utilize as fórmulas a seguir:

Para homens: (72.7*altura) - 58
Para mulheres: (62.1*altura) – 44.7
 * @version 0.1
 * @date 24-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float IdealWeight(char gender, float height)
{
    float idealWeight;

    if (gender == 'F' || gender == 'f')
    {
        idealWeight = (height * 62.1) - 44.7;
        return idealWeight;

    } // if woman
    if (gender == 'M' || gender == 'm')
    {

        idealWeight = (height * 72.7) - 58;
        return idealWeight;

    } // if male

    else
    {
        return -1;
    } // else to return an error

} // function

int main()
{

    float height, result;
    char gender;
    printf("Hello user!\n"); // intro
    printf("Please enter M or m if you are a male or F or f if you are a female: ");
    scanf("%c", &gender); // gets the gender
    printf("\nNow please insert your height in meters: ");
    scanf("%f", &height); // gets the height

    result = IdealWeight(gender, height); // calls the function

    if (result == -1)
    {
        printf("\nINVALID CHARACTER, PLEASE TRY AGAIN!\n\n");
    } // if the user entered an invalid character

    else
    {
        printf("\nYour ideal weight is: %.2f \n", result);
    } // else to show the correct ideal weight

    return 0;
} // main