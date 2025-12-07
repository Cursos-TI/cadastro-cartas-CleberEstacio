//usando a repeticao do while
#include <stdio.h>

int main(){
    int num;

    do {
         printf("digite um numero par para sair do programa: \n");
         scanf("%d", &num);

        if(num % 2 == 0){
            printf("O numero digitado e par \n:");
        }else {
            printf("O numeero digitado e impar \n");
        }

    } while (num % 2 != 0);
    {

        printf("voce digitou um numero par  saindo do programa ......");
    }
}