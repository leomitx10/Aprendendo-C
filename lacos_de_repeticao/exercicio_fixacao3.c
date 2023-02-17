#include <stdio.h>
#include <stdlib.h>

void main() {
    int num,aux;

    printf("Digite um numero: ");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        if(num%i==0){
            aux++;
        }
        printf("\n%d / %d = %d",num,i,num%i);
    }

    if(aux==2){
        printf("\nEh um numero primo");
    }else{
        printf("\nNao eh um numero primo");
    }


}

