#include <stdio.h>
#include <stdlib.h>

int main() {
    int array[5];// Declaração de um array de 5 intervalos inteiros.
    int i;

    int tam = sizeof(array) / sizeof(array[0]);// Calcula o tamanho do array dividindo o tamanho total do array pelo tamanho de um elemento.

    printf("Digite 5 numeros inteiros:\n");

    for (i = 0; i < tam; i++) {// limita o loop para o tamanho do array, usando o valor da variável "tam" como limite.
        scanf("%d", &array[i]);// entrada dos números inteiros digitados pelo usuário e armazenados no array.
    }

    printf("\n---------------------------------\n");

    printf("Os numeros digitados foram:\n");// Imprime os números digitados pelo usuário.
    for (i = 0; i < tam; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    printf("O tamanho do array e: %d\n", tam);// Imprime o tamanho do array.
    
    printf("\n---------------------------------\n");

    return 0;
}