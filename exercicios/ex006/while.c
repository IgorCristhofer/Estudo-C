#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 0;
    char resp[4];

    printf("Deseja jogar? (s->sim ou n->nao): ");
    scanf("%s", resp);

    while(num != 5){
        printf("Digite um numero: ");
        scanf("%d", &num);          
    }

    printf("Voce acertou!! O numero digitado foi 5 \n");

    system("pause");

    return 0;
}