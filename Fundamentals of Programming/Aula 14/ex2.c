/**
 * @file ex2.c
 * @author Gian Lucas dos Reis
 * @brief Escreva um trecho de código para fazer a criação dos
novos tipos de dados conforme solicitado abaixo:
 Horário: composto de hora, minutos e segundos.
 Data: composto de dia, mês e ano.
 Compromisso: local, horário e texto que descreve o
compromisso.
 * @version 0.1
 * @date 2023-03-08
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int hour, min, sec;
} Time;

typedef struct
{
    int day, month, year;
} Date;

typedef struct
{
    char local[51], summary[256];
    Time time;
    Date date;
} Commitment;

int main()
{

    Commitment commitment;

    printf("Welcome user!!!\n");
    // intro

    printf("\nLets first insert the time data");
    printf("\nPLease insert the hour of the commitment: ");
    scanf("%i", &commitment.time.hour);
    printf("\nPLease insert the minute of the commitment: ");
    scanf("%i", &commitment.time.min);
    printf("\nPLease insert the seconds of the commitment: ");
    scanf("%i", &commitment.time.sec);
    // Time inserter

    printf("\n\nNow let us set the date!");
    printf("\nPLease insert the Day of the commitment: ");
    scanf("%i", &commitment.date.day);
    printf("\nPLease insert the Month of the commitment: ");
    scanf("%i", &commitment.date.month);
    printf("\nPLease insert the Year of the commitment: ");
    scanf("%i", &commitment.date.year);
    // Date inserter

    setbuf(stdin, NULL);
    printf("\n\nNow let us finish everything!");
    printf("\nPlease insert the local of the commitment: ");
    fgets(commitment.local, 50, stdin);
    commitment.local[strcspn(commitment.local, "\n")] = '\0';
    setbuf(stdin, NULL);
    printf("Please insert what will happen what the commitment is about: ");
    fgets(commitment.summary, 255, stdin);
    commitment.summary[strcspn(commitment.summary, "\n")] = '\0';
    setbuf(stdin, NULL);
    // Commitment summary inserter

    printf("\n\nLoading........"); // just to make the code prettier

    printf("\n\n");
    printf("The commitment's local is: %s", commitment.local);
    printf("\nThe commitment's date is: %i/%i/%i", commitment.date.day, commitment.date.month, commitment.date.year);
    printf("\nThe commitment's hour is: %i:%i:%i", commitment.time.hour, commitment.time.min, commitment.time.sec);
    printf("\nThe commitment's summary is: %s", commitment.summary);
    printf("\n\n");
    // shows all the data that was inserted

    return 0;
} // main