/**
 * @file ex2.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um terceiro arquivo texto com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo)
 * @version 0.1
 * @date 31-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2, *file3;
    char buffer1[1024], buffer2[1024];
    char filename1[50], filename2[50];
    char *result1, *result2;

    printf("Please, type the name of the first file: ");
    scanf("%s", filename1);
    file1 = fopen(filename1, "r");
    // opens the first file
    if (filename1 == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if to check error

    fgets(buffer1, 1024, file1);
    // gets a copy of the content of the file

    printf("\nPlease, type the name of the second file: ");
    scanf("%s", filename2);
    file2 = fopen(filename2, "r");
    // opens the second file
    if (filename2 == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if to check error

    fgets(buffer2, 1024, file2);
    // gets a copy of the content of the file

    file3 = fopen("fileCreated.txt", "w");
    // opens the third file
    if (file3 == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if to check error

    fputs(buffer1, file3);
    if (result1 == EOF)
    {
        perror("File recording error: ");
    } // if to check error

    fputs(buffer2, file3);
    if (result2 == EOF)
    {
        perror("File recording error: ");
    } // if to check error

    fclose(file1);
    // Closes the first file
    fclose(file2);
    // Closes the second file
    fclose(file3);
    // Closes the third file

    return 0;
} // main