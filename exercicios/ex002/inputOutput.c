#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "pt-br.UTF-8");//definir a localidade para UTF-8
    
    int idade = 0;
    char nome[50] = "";

    printf("Digite seu nome: ");
    scanf("%s", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("olá %s, sua idade é %d anos.\n", nome, idade);
    system("pause");
    return 0;

}