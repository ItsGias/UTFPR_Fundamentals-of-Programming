/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Faça um programa que gere 100 números aleatórios. Esse programa deverá, em seguida,armazenar esses números em um arquivo binário.
 * @version 0.1
 * @date 30-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file;
    int array[100];

    file = fopen("test.bin", "wb");
    // opens the file

    if (file == NULL)
    {
        perror("\n The following error occurred: ");
    } // if to check if it exists an error

    srand(time(0));

    for (int i = 0; i < 100; i++)
    {
        array[i] = rand() % 1000;
    } // for to gen a random number

    fwrite(array, sizeof(int), 100, file);
    // writes the number selected at the file

    fclose(file);
    // closes the file

    return 0;
} // main