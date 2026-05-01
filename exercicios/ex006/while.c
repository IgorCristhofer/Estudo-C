#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 3;

    //O while é um laço de repetição que executa um bloco de código enquanto uma condição for verdadeira.
    while(num <= 99){
        printf("O numero atual e: %d \n", num);
        num *= 2;
    }

    printf("Finalmente acabou! \n");
    system("pause");

    return 0;
}