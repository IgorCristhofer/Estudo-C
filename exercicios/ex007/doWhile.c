#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;

    printf("Qual o valor de X? X+2=8 \n");

    //ele imprime o valor e depois repete enquanto o teste for falso.
    do{
        printf("Digite o valor correto: ");
        scanf("%i", &i);
        printf("o valor digitado foi %i \n", i);
    }while((i+2)!=8);
    printf("%i+2=8 \n", i);
    system("pause");
    
}