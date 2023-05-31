/* 
 * @author Gian Lucas dos Reis
 * @file ex4.c 
 * @date 01/07/2021
 * @brief  Exercicio 4 da aula 6
 */


#include <stdlib.h>
#include <stdio.h>


/*Faça um programa que calcule o imposto de renda a ser pago tendo como entrada o salário de um empregado. 
 *O imposto deve ser calculado de acordo com os valores exibidos no slide
 */


int main(){
     float Salario_Empregado;
     float Imposto;
     float Aliquota_1 = 0.75, Aliquota_2 = 1.5, Aliquota_3 = 2.25, Aliquota_4 = 2.75;
     float Parcela_1 = 142.80, Parcela_2 = 354.80, Parcela_3 = 636.13, Parcela_4 = 869.36;

     printf("\n Digite seu salario: ");
     scanf("%f",&Salario_Empregado);

     if (Salario_Empregado <= 1903.98)
     {
         printf("\nSeu imposto a ser pago: %.2f\n", Salario_Empregado);
      } else if (Salario_Empregado <= 2826.65) //else 1
        {
            Imposto = Salario_Empregado * Aliquota_1 - Parcela_1;
            printf("\nSeu imposto a ser pago: %.2f\n", Imposto);
        } else if (Salario_Empregado <=  3751.05) //else 2
            {
              Imposto = Salario_Empregado * Aliquota_2 - Parcela_2;
              printf("\nSeu imposto a ser pago: %.2f\n", Imposto);
             } else if (Salario_Empregado <=  4664.68) //else 3
               {
                Imposto = Salario_Empregado * Aliquota_3 - Parcela_3;
                 printf("\nSeu imposto a ser pago: %.2f\n", Imposto);
                }   else //else 4
                  {
                     Imposto = Salario_Empregado * Aliquota_4 - Parcela_4;
                     printf("\nSeu imposto a ser pago: %.2f\n", Imposto);
       }//else final


    return 0;
}//main