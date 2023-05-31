/**
 * @file ex4.c
 * @author Gian Lucas dos Reis
 * @brief Faça um programa que controla o consumo de energia dos
eletrodomésticos de uma casa e:
 Crie e leia 5 eletrodomésticos que contém nome (máximo 15 letras),
potência (real, em kW) e tempo ativo por dia (real, em horas).

 Leia um tempo t (em dias), calcule e mostre o consumo total na casa e
o consumo relativo de cada eletrodoméstico (consumo/consumo total)
nesse período de tempo.

Apresente este último dado em porcentagem.
 * @version 0.1
 * @date 2023-03-09
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
    char home_appliances[16];
    float power, time_activated, result[MAX];

} Eletric;

int main()
{
    Eletric work[MAX];

    int i = 0, awnser;
    float days, total, relative_consuption[MAX];

    printf("Welcome user!!!\n\n");

    printf("It looks like you want to control the amount of energy that is spent by your home appliances isn't it? type 0 if you wish or any other value if you don't: "); // menu
    scanf("%i", &awnser);
    setbuf(stdin, NULL);

    if (awnser == 0)
    {
        for (i = 0; i < MAX; i++)
        {
            printf("\nType the home appliance name [%i]: ", i);
            fgets(work[i].home_appliances, 15, stdin);
            work[i].home_appliances[strcspn(work[i].home_appliances, "\n")] = '\0';
            setbuf(stdin, NULL);

            printf("Enter the home appliance power in kW [%i]: ", i);
            scanf("%f", &work[i].power);
            setbuf(stdin, NULL);

            printf("Enter the time that the home appliance is activated in a day 'in hours' [%i]: ", i);
            scanf("%f", &work[i].time_activated);
            setbuf(stdin, NULL);
        } // for

        days = (work[0].time_activated + work[1].time_activated + work[2].time_activated + work[3].time_activated + work[4].time_activated) / 24; // convert hours to days

        total = work[0].power + work[1].power + work[2].power + work[3].power + work[4].power; // sums the total power that was used of every home appliance

        for (size_t i = 0; i < 5; i++)
        {
            relative_consuption[i] = (work[i].power * 100) / total;
        } // for

        printf("\n\nThe amount of days that each of the home appliances was on power: %.1f days", days);
        printf("\n\nThe total of energy that was used at the house is: %.1f kW", total);

        printf("\n"); // line breaker

        for (size_t i = 0; i < MAX; i++)
        {
            printf("\n%-15s used %.2f %% of the total energy in that time", work[i].home_appliances, relative_consuption[i]);
        } // for

        printf("\n"); // line breaker

    } // Menu if
    else
    {
        printf("\n\nOk, bye\n");
        exit(0);
    } // Menu else

    return 0;
} // main