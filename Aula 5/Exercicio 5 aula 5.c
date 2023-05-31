/* 
 * @author Gian Lucas dos Reis
 * @file Exercicio 5 aula 5.c 
 * @date 01/07/2021
 * @brief  Exercicio 5 da aula 5
 */


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Sabendo que a função sqrt(valor), que está na biblioteca math.h retorna a raiz quadrada do valor,
 * calcule a raiz quadrada de um número que o usuário digitar.
 */

int main() {
  
  float valor;
  float resultado;
    
    //Peca para o usuário digitar um valor
    printf("insira um valor para descobrir a raiz quadrada do valor:");
    
    //Faca o scanf
    scanf ("%f", &valor);
    
    // sqrt (valor) para fazer a raiz quadrada do valor
    resultado = sqrt (valor);
    printf("A raiz quadrada do valor inserido: %.2f\n", resultado);
   
       return 0;
}//main