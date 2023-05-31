/* 
 * @author Gian Lucas dos Reis
 * @file ex7.c 
 * @date 26/07/2021
 * @brief  Exercicio 7 da aula 10
 */

#include <stdio.h>
#include <stdlib.h>

/* Faça um programa que mostre n elementos da sequência de Fibonacci.
 * O valor de n é passado para o programa.
 * O primeiro termo é 0, e o segundo termo é 1, os demais devem seguir a fórmula tn = tn-1 + tn-2
 *
 *
 * Obs.: Assista ao video do moodle para entender a sequência
 */

int main (){

    int first_term = 0, second_term = 1;
    int value, fibonacci, i; 

      printf("Type a number, this will represent a sequence of fibonacci numbers: ");
      scanf("%i",&value);     

            printf("First %i terms of Fibonacci series are: \n",value);

            for ( i = 0 ; i < value ; i++ )
            {
               if ( i < 2 )
                  fibonacci = i;
                     
                     else{
                        fibonacci = first_term + second_term;
                        first_term = second_term;
                        second_term = fibonacci;
      }//else

      printf("%i\n",fibonacci);

   }//for

}//main