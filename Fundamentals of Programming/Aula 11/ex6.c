/* 
 * @author Gian Lucas dos Reis
 * @file ex6.c 
 * @date 28/07/2021
 * @brief ex 6 aula 11
 */

#include <stdlib.h>
#include <stdio.h>

/*  Faça um programa que receba e armazene 20 números em um vetor.
 *
 *  Em seguida exiba:
 *
 * –Quantos números são iguais a 30;
 * –Quantos números são maior que a média;
 * –Quantos números são iguais à media;
 */

int main(){
   float vet[20], v = 0, average;
   int big_30 = 0, big_avg = 0,average_1 = 0, i;
   
   for (int i = 0; i < 20; i++) {
     printf("Type the value of the element: ");
     scanf("%f",&vet[i]);
     v = v + vet[i];
   }
   average = v/20;
    for (int i = 0; i < 20; i++) {
        if (vet[i] == 30) {
        big_30++;
        }if(vet[i] > average){
        big_avg++;
        }if(vet[i] == average){
        average_1++;
        }
     } 
   
   printf("Average of the numbers: %.2f\n", average);
   printf("Amount of numbers equal to 30: %i\n", big_30);
   printf("Amount of numbers bigger than the average: %i\n", big_avg);
   printf("Amount of numbers equal to the average: %i\n", average_1);

   return 0;
 }