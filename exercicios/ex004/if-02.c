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
    
    //variáveis
    char aluno[50] = "";
    float nota = 0.0;

    //interação
    printf("-----------------------------------------------------------------\nQual é o nome do aluno: ");
    scanf("%s",aluno);
    printf("-----------------------------------------------------------------\nQual foi a nota do %s: ",aluno);
    scanf("%f",&nota);

    //resposta do sistema
    if(nota<3)  
    {
        printf("-----------------------------------------------------------------\n\nA nota %2.1f do aluno %s, é muito baixa. Ele foi REPROVADO\n\n-----------------------------------------------------------------\n",nota,aluno);
    }
    else if(nota>=3 && nota<6)
    {
        printf("-----------------------------------------------------------------\n\nA nota %2.1f do aluno %s, é baixa. Porém, ele está apto para a 2ª CHAMADA\n\n-----------------------------------------------------------------\n",nota,aluno);
    }
    else
    {
        printf("-----------------------------------------------------------------\n\nA nota %2.1f do aluno %s, está acima da nota de corte. Ele foi Aprovado\n\n-----------------------------------------------------------------\n",nota,aluno);
    };
    
    system("pause");
    return 0; 
}