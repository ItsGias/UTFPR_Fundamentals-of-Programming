/*
 * @Brief exemplo entrada de dados
 * @Author Gian Lucas dos Reis 
 * @Data 30/06/2021
 * @file Resumo aula 5.c
 */ 

#include <stdlib.h>
#include <stdio.h>

int main(){   
  int idade;
  
  printf("Endereco de memoria: %p\n", &idade);
  printf("Valor armazenado: %i\n", idade);
  printf("Digite sua idade:");
  scanf("%i", &idade);
  printf("Endereco de memoria: %p\n",&idade);
  printf("Novo valor armazenado %i\n",idade);
  printf("Sua idade: %i\n",idade);
 

    return 0;
}//main

