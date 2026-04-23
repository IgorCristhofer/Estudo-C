//bibliotecas
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //padronização de local para pt-br.
    setlocale(LC_ALL, "Portuguese_Brazil.65001");
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
    
    int md=0;
    printf("tente adivinhar o número: ");
    scanf("%d",&md);
    if(md==7){
        printf("Você acertou, o número é %d! \n",md);
    }else{
        printf("É o errado...\n");
    };
    system("pause");
    return 0;
}