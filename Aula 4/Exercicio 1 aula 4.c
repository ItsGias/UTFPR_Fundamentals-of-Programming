/*
 * @file: Aula 4,1.c
 * @author: Gian lucas dos Reis
 * @date: 30/06/2021
 * @brief: Aula 4 exercicio 1
 */


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Escreva um programa para determinar a quantidade de litros de combustível gastos em uma viagem por um automóvel que faz 12 km/litro. Para isso, sabe-se que o tempo gasto na viagem é de 35 min e a velocidade média do automóvel é 80 km/h.

int main(){
  setlocale(LC_ALL,"");
  // Declara a variavel
  float deslocamento;
  float consumo;
  float tempo_min = 35;
  float velocidade = 80;
  float tempo_horas;
  float rendimento = 12;
  // Passo 1 - Converter tempo em horas
  // Dividir tempo em min por 60
  tempo_horas = tempo_min / 60;
  printf("Tempo em horas: %.2f\n",tempo_horas);

  // Passo 2 - Calcular deslocamento
  // deslocamento = velocidade * tempo_horas
  deslocamento = velocidade * tempo_horas;
  printf("Deslocamento: %.2fkm\n",deslocamento);

  // Passo 3 - Calcular consumo
  // consumo = deslocamento / rendimento
  consumo = deslocamento / rendimento;
  printf("Sera consumido: %.2f litros\n",consumo);

  return 0;
}//main