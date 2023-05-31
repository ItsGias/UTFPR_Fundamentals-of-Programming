/**
 * @file ex1.c
 * @author Gian Lucas do Reis
 * @brief Escreva um programa que receba um número inteiro representando a quantidade total de segundos e, usando passagem de parâmetros por referência, converta a quantidade informada de segundos em Horas, Minutos e Segundos. Imprima o resultado da conversão no formatoHH:MM:SS. Utilize o seguinte protótipo da função:
void converteHora(int total_segundos, int* hora, int* min, int* seg)
 * @version 0.1
 * @date 2023-03-29
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>

void converterHora(int total_segundos, int *hora, int *min, int *seg)
{

    int resto;

    *hora = total_segundos / 3600;
    resto = total_segundos % 3600;
    *min = resto / 60;
    *seg = resto % 60;

    printf("\n\n%d:%d:%d\n", *hora, *min, *seg);
} // function

int main()
{

    int segundos, h = 0, m = 0, s = 0;

    printf("Type the ammount of seconds that you want to convert: ");
    scanf("%d", &segundos);              // gets the value from the user
    converterHora(segundos, &h, &m, &s); // calls the function

    return 0;
} // main