/*
 * @file: Exercicio 3 aula 4.c
 * @author: Gian lucas dos Reis
 * @date: 30/06/2021
 * @brief: Aula 4 exercicio 3
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um programa com 2 variáveis, A e B, onde A terá o valor 40 e B terá o valor -1. 
 * Imprima o valor de A+B, A-B, AxB e A/B. 
 * Em seguida, faça B incrementar de uma unidade e repita as 4 operações.
 */

int main () {
      setlocale (LC_ALL,"");
// Variaveis primeiramente
float A = 40;
float B = -1;
float resultado_1;
float resultado_2;
float resultado_3;
float resultado_4; 
//Passo 2 = Agora basta somar, subtrair, multiplicar e dividir
resultado_1 = A + B;
printf("Resultado da soma: %.0f\n", resultado_1);
resultado_2 = A - B;
printf("Resultado da subtracao: %.0f\n", resultado_2);
resultado_3 = A * B;
printf("Resultado da multiplicacao: %.0f\n", resultado_3);
resultado_4 = A / B;
printf("Resultado da divisao: %.0f\n", resultado_4);

 return 0;
}