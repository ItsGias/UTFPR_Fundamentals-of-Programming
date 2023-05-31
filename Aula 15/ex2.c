/**
 * @file ex2.c
 * @author Gian Lucas dos Reis
 * @brief
 * Crie um programa de cadastro que receba, armazene, e em seguida, exiba os dados de 5 pessoas.
Cada pessoa possui: nome, idade, peso, data de nascimento, brasileiro ou estrangeiro. Caso seja Brasileiro, armazene o CPF, caso estrangeiro, armazene o passaporte.

Regra: Utilize structs, typedef, union e enum.
 * @version 0.1
 * @date 2023-03-20
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
    char name[51], id[13];
    int day, month, year;

    float weight;

} Registration; // struct

typedef union
{
    int age;

} Age; // union

typedef enum
{
    brazilian,
    foreigner
} BrazilOrForeign; // enum

int main()
{
    int answer, option;
    Age myAge[MAX];            // union
    Registration userReg[MAX]; // struct

    printf("Welcome user, if you want to register the data from 5 persons to board on our train, please insert the value 0, if you don't want to do it right now, please enter any other value!!!\n");
    printf("Answer: ");
    scanf("%d", &answer);

    if (answer == 0)
    {

        for (size_t i = 0; i < MAX; i++)
        {
            printf("\n"); // line breaker
            setbuf(stdin, NULL);
            printf(" Please insert the name of the passenger number [%i]: ", i);
            fgets(userReg[i].name, 50, stdin);
            userReg[i].name[strcspn(userReg[i].name, "\n")] = '\0';
            // gets the passenger name

            printf("\n Now please insert it's age: ");
            scanf("%d", &myAge[i].age);
            // gets the passenger age

            printf("\n Now please insert it's weight: ");
            scanf("%f", &userReg[i].weight);
            // gets the passenger weight

            printf("\n Now please insert it's birthday, day, month and year: ");
            scanf("%i %i %i", &userReg[i].day, &userReg[i].month, &userReg[i].year);
            // gets the passenger birthday

            printf("\n Now please insert 0 if the passenger is Brazilian, or if the passenger is a foreigner press 1: ");
            scanf("%d", &option);
            setbuf(stdin, NULL);

            switch (option)
            {
            case brazilian:

                setbuf(stdin, NULL);
                printf("\n Please insert the passenger CPF: ");
                fgets(userReg[i].id, 12, stdin);
                userReg[i].id[strcspn(userReg[i].id, "\n")] = '\0';

                break;

            case foreigner:

                setbuf(stdin, NULL);
                printf("\n Please insert the passenger Passport: ");
                fgets(userReg[i].id, 12, stdin);
                userReg[i].id[strcspn(userReg[i].id, "\n")] = '\0';

                break;

            default:

                printf("Invalid option");

            } // switch

            setbuf(stdin, NULL);

        } // for

        printf("\n\n"); // line break
        printf("LOADING....\n\n");

        for (size_t i = 0; i < MAX; i++)
        {
            printf("%s's age: %i\n", userReg[i].name, myAge[i].age);
            printf("%s's weight: %.2f\n", userReg[i].name, userReg[i].weight);
            printf("%s's birthday: %i/%i/%i\n", userReg[i].name, userReg[i].day, userReg[i].month, userReg[i].year);
            printf("%s's id: %s\n\n", userReg[i].name, userReg[i].id);
        } // for

    } // if to continue the code

    else
    {
        printf("\n\nOkay, thank you for the attention,bye\n\n");
        return 0;
    } // else to end the code

    return 0;
} // main