#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;

    for (i = 0; i < 10; i++) {
        printf("i = %d \n", i); // Imprime o valor atual de i

        if (i >= 6.99) { // Verifica se i é maior ou igual a 7
            break; // Sai do loop quando i é igual a 7
        }
    }

    printf("\n Loop interrompido em i = %d \n", i);

    return 0;
}