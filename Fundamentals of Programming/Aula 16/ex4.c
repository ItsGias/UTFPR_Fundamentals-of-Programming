/**
 * @file ex4.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Faça uma função que receba a média final de um aluno por parâmetro e retorne o seu conceito, conforme a tabela abaixo:

Nota Conceito
[ 9 - 10]  A
[ 7 – 9 ]  B
[ 5 - 7 ]  C
[ 0 – 5 ]  D


 * @version 0.1
 * @date 27-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char FinalAverage(float grade[])
{
    float result = 0;
    for (size_t i = 0; i < 3; i++)
    {
        result = result + grade[i];
    } // for

    result = result / 3;

    if (result == 9 || result == 10)
    {
        return 'A';
    } // returns the A grade

    if (result == 7 || result == 8)
    {
        return 'B';
    } // returns the B grade

    if (result == 5 || result == 6)
    {
        return 'C';
    } // returns the C grade

    if (result >= 0 || result == 4)
    {
        return 'D';
    } // returns the D grade

    else
    {
        return 'F';
    } // returns F if the grade is invalid

} // function to return the average of the final grade

int main()
{
    float grade[3];
    char result;

    printf("Hello user!\n\n"); // intro
    for (size_t i = 0; i < 3; i++)
    {
        printf("Please insert the grade number %i: ", i + 1);
        scanf("%f", &grade[i]);
    } // for to get three numbers from the user

    result = FinalAverage(grade); // calls the function

    printf("\n\n"); // Line Breaker

    if (result == 'A')
    {
        printf("Congratulations!!! You've got an A grade!!!\n\n");
    } // if the grade is between 9 and 10

    if (result == 'B')
    {
        printf("Nice one!!! You've got an B grade!!!\n\n");
    } // if the grade is between 7 and 8

    if (result == 'C')
    {
        printf("Okay!!! You've got an C grade!!!\n\n");
    } // if the grade is between 5 and 6

    if (result == 'D')
    {
        printf("This is not good... You've got an D grade!!!\n\n");
    } // if the grade is between 0 and 4

    if (result == 'F')
    {
        printf("Invalid grade, please try again later!\n\n");
    } // if to check wrong average calculation

    return 0;
} // main