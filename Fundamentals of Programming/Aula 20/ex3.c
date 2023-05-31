/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva uma função que receba como parâmetro dois vetores via referência( A e B) e o tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, em que:
C[i] = A[i] * B[i]
 * @version 0.1
 * @date 10-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

int *arrayMultiplication(int a[], int b[], int n)
{
    int *c;

    c = (int *)calloc(n, sizeof(int));
    if (c == NULL)
    {
        perror("Invalid memory allocation: \n");
        exit(1);
    } // error checker

    for (size_t i = 0; i < n; i++)
    {
        c[i] = a[i] * b[i];
    } // for to do the multiplication

    return c;
} // function to allocate value to letter c

int main()
{
    int n, *c;

    printf("Hello, world, please insert the size of the array that you want to allocate to A and B: ");
    scanf("%d", &n); // gets the size of the array

    int a[n], b[n];

    for (size_t i = 0; i < n; i++)
    {
        printf("\nPlease type the value of the array A[%i]: ", i);
        scanf("%d", &a[i]);
    } // gets the value of the array A

    printf("\n");
    for (size_t i = 0; i < n; i++)
    {
        printf("\nPlease type the value of the array B[%i]: ", i);
        scanf("%d", &b[i]);
    } // gets the value of the array B

    c = arrayMultiplication(a, b, n); // calls the function

    for (size_t i = 0; i < n; i++)
    {
        printf("\nA[%i] * B[%i] = C[%i] value: %d", i, i, i, c[i]);
    } // for to show the values from the multiplication function

    free(c); // free the allocated memory

    return 0;
} // main