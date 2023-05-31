/**
 * @file ex6.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief  Considerando a estrutura ranking do exercício anterior, escreva um programa que leia o arquivo gerado contendo os dados dos 5 jogadores
 * @version 0.1
 * @date 31-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[31];
    int score;
} PlayerInfo;

int main()
{
    PlayerInfo ranking[5];
    FILE *file;

    file = fopen("test3.txt", "r");
    // opening the file
    if (file == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if to check if it exists error

    for (int i = 0; i < 5; i++)
    {
        fscanf(file, "%s", &ranking[i].name);
        fscanf(file, "%i", &ranking[i].score);
    } // for to scan the file

    for (int i = 0; i < 5; i++)
    {
        printf("\nThe name of the athlete number %i is: %s ", i + 1, ranking[i].name);
        printf("\nAnd the score of %s is: %i", ranking[i].name, ranking[i].score);
        printf("\n");
    } // for to show the content of the file

    fclose(file);
    // closes the file
    return 0;
} // main
