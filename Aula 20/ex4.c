/**
 * @file ex4.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva uma função que receba como parâmetro um valor L e um valor C e retorne o ponteiro para uma matriz alocada dinamicamente contendo L linhas e C colunas. Essa matriz deve ser inicializada com o valor 0 em todas as suas posições.
 * @version 0.1
 * @date 10-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int **matrixReturner(int column, int row)
{
    int **ptr;
    // Allocate the array that was chosen by the user
    ptr = (int **)calloc(row, sizeof(int *));

    // error checker
    if (ptr == NULL)
    {
        perror("insufficient memory!!!\n");
        exit(1);
    }

    // for to allocate the column
    for (size_t i = 0; i < column; i++)
    {
        ptr[i] = (int *)calloc(column, sizeof(int));
        // error checker
        if (ptr[i] == NULL)
        {
            perror("insufficient memory!!!\n");
            exit(1);
        }
    }

    return ptr;
} // function to return the matrix pointer

int main()
{
    int column, row, **result;

    // Ask the user to type the size of the matrix that it wants to allocate
    printf("Please enter the size of the row of the matrix that you wish to create: ");
    scanf("%i", &row);
    printf("\n"); // line breaker
    printf("Please enter the size of the column of the matrix that you wish to create: ");
    scanf("%i", &column);
    printf("\n"); // line breaker

    result = matrixReturner(column, row); // calls the matrix function

    for (size_t i = 0; i < row; i++)
    {
        free(result[i]);
    } // free the memory allocated

    free(result); // free the memory allocated

    return 0;
} // main
