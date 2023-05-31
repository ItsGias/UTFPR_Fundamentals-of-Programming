#include <stdio.h>
#include <stdlib.h>

int main(){
   char opcao;
   printf("Escolha entre A, B ou C: ");
   scanf("%c", &opcao); 
   switch (opcao)
   {
   case 'A':
       printf("\nVoce escolheu a opcao A");
       break;
   case 'B':
       printf("\nVoce escolheu a opcao B"); 
       break;
   case 'C':
       printf("\nVoce escolheu a opcao C") ;  
       break;
   
   default:
       printf("\nSabe ler nao irmao? falei pra escolher entre A, B ou C");
       break;
   }
    
   

    return 0;
}
