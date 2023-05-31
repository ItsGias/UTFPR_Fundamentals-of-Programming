/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie um Sistema de Gerenciamento de Bandas seguindo os seguintes passos:
a) Defina uma estrutura que irá representar bandas de música. Essa estrutura deve ter o nome da banda, que tipo de música ela toca, o número de integrantes e em que posição do ranking essa banda está dentre as suas 5 bandas favoritas;
b) Crie uma função para preencher as 5 estruturas de bandas criadas no exemplo passado. Após criar e preencher, exiba todas as informações das bandas/estruturas.
c) Crie uma função que peça ao usuário um número de 1 até 5. Em seguida, seu programa deve exibir informações da banda cuja posição no seu ranking é a que foi solicitada pelo usuário;
d) Crie uma função que peça ao usuário um tipo de música e exiba as bandas com esse tipo de música no seu ranking.
e) Crie uma função que peça o nome de uma banda ao usuário e diga se ela está entre suas bandas favoritas ou não;
f) Agora junte tudo e crie um menu com as opções de preencher as estruturas e todas as opções das questões passadas.
 * @version 0.1
 * @date 31-03-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 5

typedef struct
{
    char name[50], style[50];
    int members, rank;

} Bands;

void stringReader(char string[], int length)
{
    setbuf(stdin, NULL);
    fgets(string, length, stdin);
    string[strcspn(string, "\n")] = '\0';
} // string reader

void Register_Bands(Bands bands[])
{

    for (size_t i = 0; i < MAX; i++)
    {
        printf("\nPlease insert the name of the band number %i: ", i + 1);
        stringReader(bands[i].name, 50);

        printf("\nPlease insert the style of %s: ", bands[i].name);
        stringReader(bands[i].style, 50);

        printf("\nPlease insert how many members does %s has: ", bands[i].name);
        scanf("%d", &bands[i].members);

        printf("\nPlease insert the rank that %s is on your top 5: ", bands[i].name);
        scanf("%d", &bands[i].rank);

        printf("\n"); // line breaker
    }                 // for to get 5 bands

} // a) function to register the bands

void rankSearcher(Bands bands[])
{
    int bandSearch;

    printf("\nPlease insert the rank of the banda that you want to see the data: ");
    scanf("%d", &bandSearch);

    for (size_t i = 0; i < MAX; i++)
    {

        if (bandSearch == bands[i].rank)
        {
            printf("This band is in your favorites list!!! here is the data\n\n");
            printf("\nThe band name is: %s", bands[i].name);
            printf("\n%s's style is: %s ", bands[i].name, bands[i].style);
            printf("\n%s has %i members", bands[i].name, bands[i].members);
            printf("\n%s is in your rank number %i#", bands[i].name, bands[i].rank);
            printf("\n"); // line breaker
        }
    } // for to get the style that the user selected

    if (bandSearch > 5 || bandSearch < 0)
    {
        printf("\nInvalid rank inserted!!!\n\n");
    } // if the rank is invalid

} // C) function

void styleSearcher(Bands bands[])
{
    char bandSearch[50];
    int searcher;

    printf("\n Please insert the style of the banda that you want to see the data: ");
    stringReader(bandSearch, 50);

    for (size_t i = 0; i < MAX; i++)
    {
        searcher = strcmp(bandSearch, bands[i].style);

        if (searcher == 0)
        {
            printf("\nThis band is in your favorites list!!! here is the data\n\n");
            printf("\nThe band name is: %s", bands[i].name);
            printf("\n%s's style is: %s ", bands[i].name, bands[i].style);
            printf("\n%s has %i members", bands[i].name, bands[i].members);
            printf("\n%s is in your rank number %i#", bands[i].name, bands[i].rank);
            printf("\n"); // line breaker
        }
    } // for to get the style that the user selected

    if (searcher != 0)
    {
        printf("Invalid style name!!!\n\n");
    } // if the style name is invalid

} // D) function

void favoriteBands(Bands bands[])
{
    char bandSearch[50];
    int searcher;

    printf("\n Please insert the name of the band that you want to see if it is on your favorites: ");
    stringReader(bandSearch, 50);

    for (size_t i = 0; i < MAX; i++)
    {
        searcher = strcmp(bandSearch, bands[i].name);

        if (searcher == 0)
        {
            printf("\nThis band is in your favorites list!!! here is the data\n\n");
            printf("\nThe band name is: %s", bands[i].name);
            printf("\n%s's style is: %s ", bands[i].name, bands[i].style);
            printf("\n%s has %i members", bands[i].name, bands[i].members);
            printf("\n%s is in your rank number %i#", bands[i].name, bands[i].rank);
        }
    } // for to get the band that the user selected

    if (searcher != 0)
    {
        printf("\nThat band isn't present in your favorites list\n\n");
    } // if the band isn't present in the favorites list

} // E) function

int main()
{
    Bands bands[MAX];

    int option;

    printf("Hello user!\n\n");

    do
    {
        printf(" Press 1 for band Registration!!\n");
        printf(" Press 2 to search band based on it's rank!!\n");
        printf(" Press 3 to search a band based on it's style!!\n");
        printf(" Press 4 to see if a band is in your favorite's one!!\n");
        printf(" Press 0 to finish the code!!\n");
        printf(" Answer here: ");
        scanf("%d", &option);

        switch (option)
        {
        case 1:
            Register_Bands(bands);
            printf("\n"); // line breaker
            break;

        case 2:
            rankSearcher(bands);
            printf("\n");
            break;

        case 3:
            styleSearcher(bands);
            printf("\n");
            break;

        case 4:
            favoriteBands(bands);
            printf("\n");
            break;

        case 0:
            printf("\nOkayyy, bye bye\n");
            printf("\n");
            break;

        default:
            printf("Unknown option!!!\n\n");
            break;
        } // switch case
    } while (option != 0);

    return 0;
} // main