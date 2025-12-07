#include <stdio.h>

int main (){
    int num, i;
    

     printf("Digite a tabuada desejada: \n");
     scanf("%d", &num);
     printf("A tabuada de %d e: \n", num);
    
     for (i = 0; i <= 10; i++){
       
       
        printf("%d x %d = %d \n", i, num, i * num);
    }
    return 0;
}