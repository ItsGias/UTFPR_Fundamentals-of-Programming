/* 
 * @author Gian Lucas dos Reis
 * @file ex1.c 
 * @date 04/07/2021
 * @brief  Exercicio 1 da aula 7
 */


#include <stdlib.h>
#include <stdio.h>

/*Crie um programa que forneça um menu com
*duas opções. Caso o usuário digite 1, o programa
*solicitará um número e verificará se o valor é par ou
*impar. Caso o usuário digite 2, o programa solicitará
*uma idade e verificará se pessoa é maior ou menor
*de idade.
*Veja o exemplo de menu abaixo:
*Menu de programa:
*1 – Verifica par/impar
*2 – Verifica maior/menor de idade
*Digite sua opção:
*/

int main () {
    // Variables
    char alternativa;
    int valor;
    int resto;
    int idade;
    //Opção de escolhe entre A ou B par ao usuário
    printf("\nEscolha a letra A para verificar se um numero eh Impar ou par\n");
    printf("\nEscolha a letra B para verificar se voce eh maior ou menor de idade\n");
    scanf("%c", &alternativa);
    // Switch para realizar a escolha
    switch (alternativa)
    {
    case 'A':
    case 'a':
        
     printf ("Digite um numero:");
     scanf ("%i", &valor);
      // Se todo numero par eh dividido por 2 de forma perfeita, logo os que tiverem resto sao impar.
      // Nao eh necessário informar o resto para o usuário no momento.
      resto = valor % 2;
      // Resto = 0 quer dizer que o numero é par.
      if (resto == 0)
      printf("\n O numero %i eh par. \n",valor);
      else
      printf("\n O numero %i eh impar. \n",valor);
                                  

                                  return 0; //return case 1

    case 'b':
    case 'B':
       // Menor que 18 anos eh menor de idade
       // Maior ou igual a 18 anos eh maior de idade
       printf("\nDigite sua idade:\n");
       scanf("%i", &idade);
           if(idade >= 18)
       {
           printf("\nVoce eh maior de idade\n");
       } else { 
           printf("\nVoce eh menor de idade\n");
       }//else
                


                     return 0; //return case 2


    default: 
            printf("\nNumero invalido\n");
        break;
    }




    return 0; //return default
}//main