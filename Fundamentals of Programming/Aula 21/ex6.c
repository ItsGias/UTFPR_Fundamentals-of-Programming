/**
 * @file ex6.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Elabore um programa no qual o usuário informe o nome de um arquivo texto e uma palavra, e o programa informe o número de vezes que aquela palavra aparece
 * @version 0.1
 * @date 24-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void stringReader(char string[], int length)
{
    setbuf(stdin, NULL);
    fgets(string, length, stdin);
    string[strcspn(string, "\n")] = '\0';
} // string reader

void remove_the_extra_character(char *word)
{
    int i, size;
    for (i = 0, size = 0; word[i] != '\0'; i++)
        size++;
    if (word[size - 1] == '\n')
        word[size - 1] = '\0';
} // remove the extra character

int main()
{
    FILE *file;
    char filename[30], buffer[1024], word[30];
    int counter = 0;

    printf("WELCOME!!!\n\n");
    // menu

    printf("\nPlease, insert the name of the file: ");
    stringReader(filename, 30);
    setbuf(stdin, NULL);
    // gets the file that the user entered

    file = fopen(filename, "r");
    // opens the file
    if (file == NULL)
    {
        perror("\nThe following error occurred: ");
        exit(1);
    } // if to check if it exists error

    printf("Please insert a word: ");
    stringReader(word, 30);

    remove_the_extra_character(word);

    while (!(feof(file)))
    {
        fscanf(file, "%s", buffer);
        if (strcmp(buffer, word) == 0)
        {
            counter++;
        } // if

    } // while

    printf("\n\nThe word %s appears %i times", word, counter);

    return 0;
} // main