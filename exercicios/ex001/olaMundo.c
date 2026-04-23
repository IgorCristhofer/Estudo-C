//bibliotecas
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //padronização de local
    //O código "65001" altera o console para UTF-8.
    //Isso é importante para garantir que caracteres acentuados e outros símbolos sejam exibidos corretamente, especialmente em idiomas latinos.
    setlocale(LC_ALL, "Portuguese_Brazil.65001");
    SetConsoleOutputCP(65001); 
    SetConsoleCP(65001);
    
    printf("Olá Mundo! \n"); // Imprime a mensagem "Olá Mundo!" seguida de uma nova linha
    system("pause"); // Pausa a execução para que o usuário possa ver a mensagem
    return 0;
}
