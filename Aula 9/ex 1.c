/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 20/07/2021
 * @brief  Exercicio 1 da aula 9
 */

#include <stdlib.h>
#include <stdio.h>
//Faça um programa que calcule a média para 5 alunos, sendo que cada aluno tem 2 notas (reais). O programa somente deverá aceitar notas no intervalo fechado de 0 a 10, solicitando nova digitação quando necessário.


int main(){

 float grade_1, grade_2, average;
 int contador = 5;
  
   printf("Welcome to the jungle, we don't have have fun and neither games\n");
      
     do
       {
         
         printf("\nInsert the student's grades: ");
         scanf("%f %f", &grade_1, &grade_2);

            if (grade_1 > 10 || grade_2 > 10 || grade_1 < -1 || grade_2 < -1) 
               { printf("\nPlease please me and insert a number between 0 and 10\n");
                continue;
        }// If 1 key     
                  
         average = (grade_1 + grade_2) /2;
         

         printf("\nYour final grade is: %.2f .\n", average);

         contador--;

     } //do key
        while (contador > 0);
     
       





    return 0;
}//main key