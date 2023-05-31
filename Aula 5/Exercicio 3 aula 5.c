/* 
 * @author Gian Lucas dos Reis
 * @file Exercicio 3 aula 5.c 
 * @date 01/07/2021
 * @brief  Exercicio 3 da aula 5
 */


#include <stdio.h>
#include <stdlib.h>

/*Tendo como entrada de dados o total vendido por um funcionário no mês, 
 *calcule a sua comissão e o salário bruto no mês. Para isso, considere um salário base de R$1.200,00 e comissão de 10% sobre o total 
 *vendido.
 */


int main() {

 //digitar as variaveis
 float suas_vendas;
 float salario_base = 1200; 
 float comissao = 0.1;
 float salario_final;

  //Perguntar o numero de vendas e fazer o scanf
  printf("Digite o numero de suas vendas: ");
  scanf("%f", &suas_vendas);
  //Pedir para o computador fazer a conta
  salario_final = salario_base + comissao * suas_vendas;
  // exibir o salario final da pessoa
  printf("O seu salario final: %.2f\n", salario_final);

    
    return 0;
}