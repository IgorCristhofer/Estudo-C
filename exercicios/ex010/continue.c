#include <stdio.h>

int main(void)
{
    // Demonstração do comando continue em C
    for (int i = 1; i <= 10; i++) {
        /*
        "%" Operador Aritmético (Resto da Divisão):Utilizado para calcular o resto de uma divisão inteira.
        * Exemplo: 10 % 3 resulta em 1;
        * Exemplo: 10 % 2 resulta em 0 (útil para verificar se um número é par ou ímpar);
        # Nota: Não funciona com números de ponto flutuante (float ou double). #
        */
        if (i % 2 == 0) {
            continue; // pula a iteração quando i é par.
        }
        printf("i = %d \n", i); // Imprime apenas os números ímpares.
    }

    return 0;
}
