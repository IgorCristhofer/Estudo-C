#include <stdio.h>
#include <stdlib.h>

int main(){
    int i=0;

    printf("Qual o valor de X? X+2=8 \n");

    // o do funciona da seguinte maneira: ele executa o bloco de código pelo menos uma vez, e depois verifica a condição.
    // Se a condição for verdadeira, ele continua executando o bloco de código. Se a condição for falsa, ele sai do loop.
    do{
        printf("Digite o valor correto: ");
        scanf("%i", &i);
        printf("o valor digitado foi %i \n", i);
    }while((i+2)!=8);
    printf("%i+2=8 \n", i);
    system("pause");
    
}