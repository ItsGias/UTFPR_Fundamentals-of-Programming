/* 
 * @author Gian Lucas dos Reis
 * @file ex2.c 
 * @date 01/07/2021
 * @brief  Exercicio 2 da aula 6
 */


#include <stdlib.h>
#include <stdio.h>

/*Faça um programa que receba um número e determine se ele é um número par ou ímpar. 
 *(Para isso utilize o operador % que retorna o resto da divisão)
 */
int main(){
  //Colocar as Variaveis
  int valor;
  int resto;
  printf ("Digite um numero:");
  scanf ("%i", &valor);
  // Se todo numero par eh dividido por 2 de forma perfeita, logo os que tiverem resto sao impar.
  // Nao eh necessario informar a resto para o usuario no momento.
  resto = valor % 2;
  // Resto = 0 quer dizer que o numero é par.
  if (resto == 0)
    printf("\n O numero %i eh par. \n",valor);
  else
    printf("\n O numero %i eh impar. \n",valor);


         return 0;
}//main