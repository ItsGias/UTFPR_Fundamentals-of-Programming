/**
 * @file ex2.c
 * @author Gian Lucas dos Reis
 * @brief Exercicio 2 aula 12
 * @date 18/03/2022
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef union
{
    int cpf, passport;
} ID;

typedef enum
{
    brazilian = 1,
    foreigner

} Nationality;

typedef struct
{
    char name[100];
    int age, day, month, year;
    float weight;
    Nationality nationality;

} Costumers;

int main()
{
    Costumers reg[5];
    Nationality country;
    ID indentity[5];
    int i = 0, awnser;

    printf("Welcome user!!!\n\n");

    printf("Would you like to register the data of 5 different users? type 0 if you wish or any other value if you don't: "); // menu
    scanf("%i", &awnser);
    setbuf(stdin, NULL);

    printf("\n");

    if (awnser == 0)
    {
        for (i = 0; i < 5; i++)
        {
            printf("\n\nPlease, type the name: ");
            fgets(reg[i].name, 100, stdin);
            reg[i].name[strcspn(reg[i].name, "\n")] = '\0';
            setbuf(stdin, NULL);

            printf("\nThe age: ");
            scanf("%i", &reg[i].age);
            setbuf(stdin, NULL);

            printf("\nThe weight: ");
            scanf("%f", &reg[i].weight);
            setbuf(stdin, NULL);

            printf("\nThe birthdate: ");
            scanf("%i %i %i", &reg[i].day, &reg[i].month, &reg[i].year);
            setbuf(stdin, NULL);

            printf("\nType 1 if the person is a brazilian, and 2 in case that the person is a foreigner: ");
            scanf("%i", &reg[i].nationality);

            if (reg[i].nationality == brazilian)
            {
                printf("\nType your CPF number: ");
                scanf("%i", &indentity[i].cpf);
                setbuf(stdin, NULL);
            } // if

            else
            {
                printf("\nType your passport number: ");
                scanf("%i", &indentity[i].passport);
                setbuf(stdin, NULL);
            } // else

        } // for

        for (i = 0; i < 5; i++)
        {
            printf("\n\n\nName: %s", reg[i].name);
            printf("\nAge: %i", reg[i].age);
            printf("\nWeight: %.2f", reg[i].weight);
            printf("\nbirthdate: %.2i/%.2i/%.2i", reg[i].day, reg[i].month, reg[i].year);
            if (reg[i].nationality == brazilian)
            {
                printf("\nThe person's CPF number: %i", indentity[i].cpf);
            } // if
            else
            {
                printf("\nThe person's Passport number: %i", indentity[i].passport);
            } // else

        } // for

        return 0;
    }

    else
    {
        printf("\n\nOk, bye\n");
        exit(0);
    } // Menu else

} // main