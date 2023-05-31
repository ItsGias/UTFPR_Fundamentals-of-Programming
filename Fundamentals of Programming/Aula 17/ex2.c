/**
 * @file ex2.c
 * @author your name (you@domain.com)
 * @brief Reescreva o exercício anterior utilizando a estrutura horário (contendo hora, minuto e segundo) e passando a estrutura por referência. Utilize o seguinte protótipo da função:
void converteHorario(int total_segundos, Horario* hor)
 * @version 0.1
 * @date 2023-03-29
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int h, m, s;
} Horario;

void converterHora(int total_segundos, Horario *horario)
{

    int resto;

    horario->h = total_segundos / 3600;
    resto = total_segundos % 3600;
    horario->m = resto / 60;
    horario->s = resto % 60;

    printf("\n\n%d:%d:%d\n", horario->h, horario->m, horario->s);
} // function                      

int main()
{

    Horario horario;
    int segundos;

    printf("Type the ammount of seconds that you want to convert: ");
    scanf("%d", &segundos);            // gets the value from the user
    converterHora(segundos, &horario); // calls the function

    return 0;
} // main