/*
 * @file: Exercicio 2 aula 4.c
 * @author: Gian lucas dos Reis
 * @date: 30/06/2021
 * @brief: Aula 4 exercicio 2
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Uma conta de caderneta de poupança foi aberta com um depósito de R$ 500,00. 
Imagine que esta conta é remunerada em 1% de juros ao mês. Qual será o valor da conta após três meses? */

int main(){
   setlocale (LC_ALL,"");
//Declarar variavel
float deposito = 500.00;
float juros_ao_mes;
float valor_apos_tres_meses; 
//Passo 1 = Calcular o 1% de juro
juros_ao_mes = deposito * 0.01; 
printf ("juros ao mes: %.2f\n", juros_ao_mes);
//Passo 2 = Calcular o valor da conta apos 3 meses
valor_apos_tres_meses = deposito + juros_ao_mes * 3;
printf("Valor apos 3 meses: %.2f\n",valor_apos_tres_meses);
 return 0;
}