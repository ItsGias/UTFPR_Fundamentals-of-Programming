/* 
 * @author Gian Lucas dos Reis
 * @file ex3.c 
 * @date 29/07/2021
 * @brief  ex 3 aula 12
 */

#include <stdlib.h>
#include <stdio.h>

//Construa um programa que leia uma matriz de tamanho 5 x 5 e escreva a localização (linha, coluna) do maior valor encontrado na matriz

int main(){
  int c,l;
  int bigger;
  int matrix[5][5];
  int c_loc, l_loc;
  for(c=0; c<5; c++){
    for(l=0;l<5;l++){
      printf("Type the matrix [%i] [%i]: ", c, l);
      scanf("%d", &matrix[c][l]);
    }
  }

  for(c=0;c<5;c++){
    for(l=0;l<5;l++){

      if(c == 0 && l == 0){
        bigger = matrix[0][0];
        l_loc = 0;
        c_loc = 0;
      }
      if(matrix[c][l]>bigger){
        bigger = matrix[c][l];
        l_loc = c;
        c_loc = l;
      }
    }
  }
    printf("The biggest number of the matrix is: [%i] and your localization is:[%i][%i]", bigger, l_loc, c_loc);
  
  return 0;
}