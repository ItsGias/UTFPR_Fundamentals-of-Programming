/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva um procedimento que recebe por parâmetro as 3 notas de um aluno e uma letra. Se a letra for A, o procedimento calcula a média aritmética das notas do aluno, se for P, a sua média ponderada (pesos: 5, 3 e 2) e se for S, a soma das notas. O valor calculado também deve ser retornado e exibido na função main.
 * @version 0.1
 * @date 24-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float AverageSelector(char choice, float grade[])
{
    float result = 0;
    if (choice == 'A' || choice == 'a')
    {
        for (size_t i = 0; i < 3; i++)
        {
            result = result + grade[i];
        } // for

        result = result / 3;

        return result;

    } // if for the arithmetic average

    if (choice == 'P' || choice == 'p')
    {
        grade[0] = grade[0] * 5;
        grade[1] = grade[1] * 3;
        grade[2] = grade[2] * 2;

        result = (grade[0] + grade[1] + grade[2]) / 10;

        return result;
    } // if for the weighted average

    if (choice == 'S' || choice == 's')
    {
        for (size_t i = 0; i < 3; i++)
        {
            result = result + grade[i];
        } // for
        return result;
    } // if for grade sum

    else
    {
        return -1;
    } // else

} // function to select the option to calculate the student's average grade score

int main()
{
    float grade[3], result;
    char choice;

    printf("Hello user!\n\n");
    for (size_t i = 0; i < 3; i++)
    {
        printf("Please insert the grade number %i: ", i + 1);
        scanf("%f", &grade[i]);
    } // for

    setbuf(stdin, NULL);
    printf("\n");
    printf("\nPlease enter 'A' if for the arithmetic average");
    printf("\nPlease enter 'P' if for the weighted average");
    printf("\nPlease enter 'S' if you want the sum of the grades");
    printf("\nAnswer: ");
    scanf("%c", &choice);

    result = AverageSelector(choice, grade);

    if (result == -1)
    {
        printf("\nINVALID CHARACTER, PLEASE TRY AGAIN!\n\n");
    } // if the user entered an invalid character

    else
    {
        printf("\n");
        printf("Your grade is: %.2f\n", result);
    } // else to show the grade selected

    return 0;
} // main