#include <stdio.h>
#include <stdlib.h>

int main(){
    int num = 3;

    //o while roda em quanto a condição for falso.
    while(num <= 99){
        printf("O numero atual e: %d \n", num);
        num *= 2;
    }

    printf("Finalmente acabou! \n");
    system("pause");

    return 0;
}