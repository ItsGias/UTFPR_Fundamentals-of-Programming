/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Elabore um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida, faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.
 * @version 0.1
 * @date 09-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr, n;

    printf("Please insert the size of the array: "); // asks the user the size of the array
    scanf("%d", &n);

    ptr = (int *)calloc(n, sizeof(int));
    if (ptr == NULL)
    {
        perror("Memory allocation failed: ");
        exit(1);
    } // if

    for (size_t i = 0; i < n; i++)
    {
        printf("\nPlease insert a value for the slot number %i: ", i);
        scanf("%d", &ptr[i]);
    }

    printf("\nThe size of the array is: %i\n", n);

    for (size_t i = 0; i < n; i++)
    {
        printf("Slot number %i : %i\n", i, ptr[i]);
    } // for

    free(ptr);

    return 0;
} // main