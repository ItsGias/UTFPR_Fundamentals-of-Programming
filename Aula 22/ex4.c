/**
 * @file ex4.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Considerando a estrutura atleta do exercício anterior, escreva um programa que leia um arquivo binário contendo os dados de cinco atletas. Calcule e exiba o nome do atleta mais alto e do mais velho.
 * @version 0.1
 * @date 31-05-2023
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[256], sport[256];
    int age, height;
} Athlete;

int main()
{
    FILE *file;
    Athlete athlete_data[5];

    file = fopen("test2.bin", "rb");
    // opens the file
    if (file == NULL)
    {
        perror("\n The following error occurred: ");
    } // if to check if it exists an error

    fread(athlete_data, sizeof(Athlete), 5, file);
    // writes all the data into the file

    for (size_t i = 0; i < 5; i++)
    {
        printf("Athlete's number %i name: %s\n", i + 1, athlete_data[i].name);
        // show the name of the athlete

        printf("Athlete's number %i sport: %s\n", i + 1, athlete_data[i].sport);
        // show the name of the sport that the athlete do

        printf("Athlete's number %i height in centimeters: %i\n", i + 1, athlete_data[i].height);
        // show the age of the athlete

        printf("Athlete's number %i age: %i\n", i + 1, athlete_data[i].age);
        // show the height of the athlete

        printf("\n");
    } // for

    fclose(file);
    // closes the file

    return 0;
} // main