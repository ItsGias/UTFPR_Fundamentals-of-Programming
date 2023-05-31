/**
 * @file ex2.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief  Elabore um programa que leia um arquivo binário contendo 100 números. Mostre na tela a soma desses números
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
    int array[100], sum = 0;

    file = fopen("test.bin", "rb");
    // opens the file

    if (file == NULL)
    {
        perror("\n The following error occurred: ");
    } // if to check if it exists an error

    fread(array, sizeof(float), 100, file);

    for (size_t i = 0; i < 100; i++)
    {
        sum = sum + array[i];
    }

    printf("%d\n", sum);

    fclose(file);

    return 0;
}