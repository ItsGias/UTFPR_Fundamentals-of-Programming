#include <stdio.h>
#include <stdlib.h>

    int main () {
    
    int idade;
    printf("digite sua idade:");
    scanf("%i", &idade);
        if(idade >= 18)
    {
        printf("Voce eh maior de idade\n");
    } else { 
        printf("Voce eh menor de idade\n");
    }//else
    
    


        return 0;
    }//main