/**
 * @file ex3.c
 * @author Gian Lucas dos Reis (gianlucas.reis@gmail.com)
 * @brief Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas e os armazene em um arquivo binário
 * @version 0.1
 * @date 30-05-2023
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

void athleteDataHandler(Athlete athlete_data[5])
{
    int i = 0;
    for (i = 0; i < 5; i++)
    {
        printf("Please insert the name of the athlete number %i: ", i + 1);
        fgets(athlete_data[i].name, 256, stdin);
        athlete_data[i].name[strcspn(athlete_data[i].name, "\n")] = '\0';
        setbuf(stdin, NULL);
        // gets the name of the athlete

        printf("Please insert the name of the sport that the athlete number %i performs: ", i + 1);
        fgets(athlete_data[i].sport, 256, stdin);
        athlete_data[i].sport[strcspn(athlete_data[i].sport, "\n")] = '\0';
        setbuf(stdin, NULL);
        // gets the name of the sport that the athlete do

        printf("Please insert the age of the athlete number %i: ", i + 1);
        scanf("%i", &athlete_data[i].age);
        setbuf(stdin, NULL);
        // gets the age of the athlete

        printf("Please insert the height in centimeters of the athlete number %i: ", i + 1);
        scanf("%i", &athlete_data[i].height);
        setbuf(stdin, NULL);
        // gets the height of the athlete

        printf("\n");
    } // for

} // Function to get data

int main()
{
    FILE *file;
    Athlete athlete_data[5];
    athleteDataHandler(athlete_data);

    file = fopen("test2.bin", "wb");
    // opens the file
    if (file == NULL)
    {
        perror("\n The following error occurred: ");
    } // if to check if it exists an error

    /* for (size_t i = 0; i < 5; i++)
     {
         fwrite(athlete_data[i].name, sizeof(char), 256, file);
         fwrite(athlete_data[i].sport, sizeof(char), 256, file);
         fwrite(athlete_data[i].age, sizeof(int), 1, file);
         fwrite(athlete_data[i].height, sizeof(int), 1, file);
     }*/

    fwrite(athlete_data, sizeof(Athlete), 5, file);
    // writes all the data into the file
    fclose(file);
    // closes the file

    return 0;
}