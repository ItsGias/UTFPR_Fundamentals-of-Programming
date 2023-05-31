/**
 * @file ex5.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief  Crie uma estrutura representando um ranking. Essa estrutura deve conter o nome do jogador e sua pontuação. Em seguida, escreva um programa que leia os dados de 5 jogadores e os armazene em um arquivo utilizando a técnica de Dados formatados.
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

    athleteData(ranking);
    // function to player registration

    file = fopen("test3.txt", "w");
    // opening the file
    if (file == NULL)
    {
        perror("The following error occurred: ");
        exit(1);
    } // if to check if it exists error

    for (int i = 0; i < 5; i++)
    {
        fprintf(file, " %s", ranking[i].name);
        fprintf(file, "\n");
        fprintf(file, "%i", ranking[i].score);
        fprintf(file, "\n\n");
    } // for to print the data at the file

    fclose(file);
    // closes the file
    return 0;
} // main

void athleteData(PlayerInfo ranking[5])
{
    for (int i = 0; i < 5; i++)
    {
        setbuf(stdin, NULL);
        printf("\nWhich is the name of the athlete number %i? ", i + 1);
        fgets(ranking[i].name, 31, stdin);
        ranking[i].name[strcspn(ranking[i].name, "\n")] = '\0';
        setbuf(stdin, NULL);

        printf("Which is the score of the athlete number %i? ", i + 1);
        scanf("%i", &ranking[i].score);
        printf("\n\n");
    } // for to get the data
} // function
