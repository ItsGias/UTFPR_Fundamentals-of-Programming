/**
 * @file prova teste.c
 * @author Gian Lucas dos Reis
 * @brief Com isso, diversos serviços ficaram indisponíveis. Dentre eles, os servidores da Riot responsáveis pelos jogos League of Legends, Valorant e Wild Rift.


Você foi convocado em uma missão de emergência para ajudar a identificar os locais das falhas e reestabelecer os serviços.

Para isso, faça um programa que armazene os dados de 5 cidades onde estão localizados os servidores com problemas, cada cidade possui: nome (20 caracteres), quantidade de servidores ativos(inteiro), quantidade de servidores com problemas (inteiro) e quantidade total de servidores(inteiro).

Para isso, faça:
a) Faça um programa que receba os dados das 5 cidades: nome(strings), a quantidade de servidores ativos e a quantidade de servidores com falha ( salvos nas duas primeiras colunas de uma matriz de inteiros 5x3). Os valores não podem ser negativos, solicite novos valores enquanto o usuário digite valores inválidos.

b) Utilizando estruturas de repetição, calcule a quantidade total de servidores em cada cidade e salve na última coluna da matriz;

c) Exiba em formato de tabela (com colunas alinhas separadas por | ) os nomes, as 3 quantidades de servidores de todos as cidades.

d) Receba um nome de uma cidade e busque ela na lista, todos os dados de seus servidores (apenas 1 vez). Exiba uma mensagem informando também caso não encontre o nome buscado.

e) Exiba o nome da cidade e a porcentagem da cidade que tem o maior percentual de servidores com problemas (duas casas decimais).

f) Utilizando estrutura de repetição, calcule e exiba o percentual total de servidores ativos e de servidores com problemas.

g) Acrescente o texto "Defeated" ao final da string do nome todas as cidades que têm o número de servidores com problemas maiores que os servidores ativos. Em seguida exiba o nome de todas as cidades (alteradas ou não).
Ex: "São Paulo" -> "São Paulo Defeated"
 * @version 0.1
 * @date 2023-03-03
 *
 * @copyright Copyright (c) 2023
 *
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX 2

int main()
{
    char cities[MAX][21];
    int server[MAX][3];

    printf("Hello user!!!\n\n");

    for (size_t l = 0; l < MAX; l++)
    {
        
            printf("Please insert the name of a city: ");
            fgets(cities[l],20,stdin);
            cities[l][strcspn(cities[l],"\n")]='\0';
            setbuf(stdin,NULL);

            do
            {
            printf("\nPlease insert the ammount of active servers: ");
            scanf("%d", &server[l][0]);
            printf("\nPlease insert the ammount of inactive servers: ");
            scanf("%d", &server[l][1]);
            } while (&server[l][0] < 0 && &server[l][1] < 0);
            
            
            
            server[l][2] = server[l][0] + server[l][1];
        
    }//for

    for (size_t i = 0; i < MAX; i++)
    {
        printf("|%-20s| %4d| %4d| %4d|\n", 
                cities[i],server[i], 
                server[i][0], 
                server[i][1], 
                server[i][2]);
    }//for
    

    return 0;
}