/**
 * @file ex1.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief
 * @version 0.1
 * @date 31-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[50], row;
    int i = 0;

    printf("Hello, World!\n");
    printf("Please, type the name of the file: ");
    scanf("%s", name);
    // Gets the name of the person that will be put into the file

    file = fopen(name, "r");
    // opens the file

    if (file == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if

    while (!feof(file))
    {
        row = fgetc(file);
        if (row == 10)
        {
            i++;
        } // if

    } // while

    printf("The amount of lines that exists in the file is %i", i);
    fclose(file);
    // close the file

    return 0;
} // main