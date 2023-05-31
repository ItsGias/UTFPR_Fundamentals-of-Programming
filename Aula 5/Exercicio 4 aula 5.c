/* 
 * @author Gian Lucas dos Reis
 * @file Exercicio 4 aula 5.c 
 * @date 01/07/2021
 * @brief  Exercicio 4 da aula 5
 */


#include <stdio.h>
#include <stdlib.h>

/*Calcule a média aritmética de 4 números reais que o usuário digitar. 
 *Imprima a média na tela apenas com 2 casas decimais.
 */

int main() {
    //digitar as variaveis
    float numero_1;
    float numero_2;
    float numero_3;
    float numero_4;
    float soma_dos_numeros;
    float media_aritimetica;
     
     // Faca o scanf dos 4 numeros
     printf("Digite um numero:", numero_1);
     scanf("%f", &numero_1);
     printf("Digite outro numero:", numero_2);
     scanf("%f", &numero_2);
     printf("Digite mais um numero:", numero_3);
     scanf("%f", &numero_3);
     printf("Esse eh o ultimo, vai:", numero_4);
     scanf("%f", &numero_4);
      
      // Computador faz a soma dos numeros inseridos, e apos isso ele faz a media aritimetica
      soma_dos_numeros = numero_1 + numero_2 + numero_3 + numero_4;

      media_aritimetica = soma_dos_numeros / 4.0;

      // Exibir o valor da media aritimetica
      printf("Sua media aritimetica: %.2f", media_aritimetica);


    return 0;
}//main