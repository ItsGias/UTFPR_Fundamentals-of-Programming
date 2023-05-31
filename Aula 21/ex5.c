/**
 * @file ex5.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Elabore um programa para calcular e exibir o número de vezes que cada letra ocorre dentro de um arquivo texto. Ignore as letras com acento. O usuário deverá informar o nome do arquivo.
 * @version 0.1
 * @date 24-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringReader(char string[], int length)
{
    setbuf(stdin, NULL);
    fgets(string, length, stdin);
    string[strcspn(string, "\n")] = '\0';
} // string reader

int *letterChecker(FILE *file)
{
    int *array, i = 64, position = 0;
    char character;
    array = calloc(26, sizeof(int));
    // allocates the array
    while (!(feof(file)))
    {
        character = fgetc(file);
        for (i = 65, position = 0; i <= 90; i++, position++)

            if (character == i || character == i + 32)
                array[position]++;
    } // while to search inside the entire file
    return array;
} // Letter Checker

int main()
{
    FILE *file;
    char filename[30];

    printf("WELCOME!!!\n\n");
    // menu

    printf("\nPlease, insert the name of the file: ");
    stringReader(filename, 30);
    // gets the file that the user entered

    file = fopen(filename, "r");
    // opens the file
    if (file == NULL)
    {
        perror("\nThe following error occurred: ");
        exit(1);
    } // if to check if it exists error

    int *array = letterChecker(file);
    // calls the function that checks each character

    for (int i = 0; i < 26; i++)
    {
        printf("%c|%c: %d times\n", i + 65, i + 65 + 32, array[i]);
    } // for to show each character.
    fclose(file);
    // closes the file
    return 0;
} // main