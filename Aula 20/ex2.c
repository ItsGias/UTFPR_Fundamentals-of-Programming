/**
 * @file ex2.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero, um ponteiro nulo deverá ser retornado
 * @version 0.1
 * @date 09-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int arrayAllocation(int n)
{
    int *ptr;
    if (n <= 0)
    {
        return NULL;
    } // if the value is negative or 0

    else
    {
        ptr = (int *)calloc(n, sizeof(int));
        if (ptr == NULL)
        {
            perror("\n\nError allocating memory: ");
            exit(1);
        } // error checker

        return ptr;
    } // else
} // function to allocate the array and verify if the number is positive

int main()
{
    int *ptr, n;

    printf("Hello world, please insert a value to define the size of the array: "); // gets the size of N
    scanf("%d", &n);

    ptr = arrayAllocation(n); // calls the result of the function to the pointer

    free(ptr); // frees the memory allocated

    return 0;
}