/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva um programa para converter o conteúdo de um arquivo texto em caracteres maiúsculos. O programa deverá ler do usuário o nome do arquivo a ser convertido e o nome do arquivo a ser salvo.
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

void capsLock(char string1[], char string2[])
{
    int i = 0;
    while (string1[i] != '\0')
    {
        string2[i] = toupper(string1[i]);
        i++;
    } // while

} // Function to put the string in capsLock

int main()
{
    FILE *file1, *file2;
    char string1[250], string2[250];
    char filename1[250], filename2[250];
    char *result1, *result2;

    printf("WELCOME USER!!!\n\n");
    // intro
    printf("Please, type the name with the extension of the file that you want to read and return it in capsLock: ");
    stringReader(filename1, 250);
    // gets the name of the file that the user wants to convert to capsLock

    file1 = fopen(filename1, "r");
    if (file1 == NULL)
    {
        perror("Couldn't open the file!: ");
    } // if to check if it exists error

    fgets(string1, 250, file1);
    if (result1 == EOF)
    {
        perror("File recording error: ");
    } // if to check if it exists error

    fclose(file1);
    // closes the file 1

    capsLock(string1, string2);
    // capsLock function

    printf("\n Please, insert the name of the file that you want to create with the extension of the file : ");
    stringReader(filename2, 250);
    // gets the name of the file that the user wants to create

    file2 = fopen(filename2, "w");
    // opens the file 2
    if (file2 == NULL)
    {
        perror("Couldn't open the file!: '");
    } // if to check if it exists error
    fputs(string2, file2);
    // inserts the string in caps lock at the file 2
    if (result2 == EOF)
    {
        perror("File recording error: ");
    } // if to check if it exists error

    fclose(file2);
    // closes the file 2

    return 0;
} // main