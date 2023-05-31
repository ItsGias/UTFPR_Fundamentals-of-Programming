/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 20/07/2021
 * @brief  Exercicio 8 da aula 10
 */

#include <stdlib.h>
#include <stdio.h>      

int main(){

 int number = 0, number_2 = 0, result;
 int i = 0;

     for(number = 0; number <= 10 ; number++){       
         
          printf("\nMultiplication table of %i: \n", i);
          i++;
                
             for(number_2 = 0; number_2 <= 10; number_2++){
                
                 result = number * number_2;

                         printf("%i X %i = %i\n", number, number_2, result);
        
     }//second for
 
  }//first for
                                return 0;
}//main