/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 01/07/2021
 * @brief  Exercicio 1 da aula 6
 */


#include <stdlib.h>
#include <stdio.h>

/* Faça um programa que receba como entrada a nota de um aluno. O programa deve exibir “aprovado” 
 *caso a nota seja igual ou superior a 6, ou exibir “reprovado” caso contrário.
 */

int main(){  
  
  //variavel
  float nota;
  
   printf ("Digite sua nota: ");
   scanf ("%f", &nota);
    //Utilizar If or Else, sendo nota >=6 a aprovacao 
    if ( nota >= 6 )
    {
        printf("Parabens, voce foi aprovado\n");
    }
    else
    {
        printf("Nao foi dessa vez, voce foi reprovado\n");
    }//else final



return 0;
}//main