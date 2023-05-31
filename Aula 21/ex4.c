/**
 * @file ex4.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie um programa para calcular e exibir o número de palavras contido em um arquivo texto. O usuário deverá informar o nome do arquivo
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

int main()
{
    FILE *file;
    char filename[30], buffer[50];
    int amount_of_words = -1;

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

    while (!(feof(file)))
    {
        fscanf(file, "%s", buffer);
        amount_of_words++;
    } // while with a counter to get each word

    printf("\n%d\n", amount_of_words);
    // show the result
    fclose(file);
    // closes the file
    return 0;
} // main