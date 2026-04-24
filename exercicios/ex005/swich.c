//BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>

int main(){//FUNÇÃO PRINCIPAL
    int num;

    printf("Adivinhe o numero: ");//Solicita ao usuario que digite um numero
    scanf("%d", &num);//Lê o numero digitado pelo usuario e armazena na variavel num

    switch(num){
        case 1:
            printf("Esta quase certo!! O numero digitado foi 1 \n");
            break;
        case 2:
            printf("Voce acertou!! O numero digitado foi 2 \n");
            break;
        case 3:
            printf("Esta quase certo!! O numero digitado foi 3 \n");
            break;
        default:
            printf("Chutou longe!! O numero digitado foi %d \n", num);
    }

    system("pause");//Pausa o programa para que o usuario possa ver a resposta antes de fechar a janela.

    return 0;
}