/*
 * @file: Exercicio 4 aula 4.c
 * @author: Gian lucas dos Reis
 * @date: 30/06/2021
 * @brief: Aula 4 exercicio 4
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Tendo a Altura da pessoa definida como uma constante, calcule seu 
 * peso ideal utilizando a seguinte fórmula:peso ideal = 72.7 x altura – 58
 */

int main(){
   setlocale (LC_ALL,"");
//Declarar variavel
float peso_ideal;
float altura = 1.81;
 // Montar a conta com os Floats
 peso_ideal = 72.7 * altura - 58;
 printf("O seu peso ideal: %.2f\n", peso_ideal);
 
 
 return 0;
}