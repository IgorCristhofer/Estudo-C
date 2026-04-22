#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "UTF-8"); // Configura o ambiente para UTF-8
    printf("Olá Mundo! \n"); // Imprime a mensagem "Olá Mundo!" seguida de uma nova linha
    system("pause"); // Pausa a execução para que o usuário possa ver a mensagem
    return 0;
}
