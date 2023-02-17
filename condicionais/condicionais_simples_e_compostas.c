#include<stdio.h>
#include<stdlib.h>

void main(){
    int a;

    printf("Digite um numero: ");
    scanf("%d",&a);

    if(a==5){
        printf("O valor de A eh 5");
    }else if(a==10){
        printf("O valor de A eh 10");
    }else if(a==15){
        printf("O valor de A eh 15");
    }
    printf("\n");

    if(a%2==0){
        printf("O valor de A eh par");
    }else{
        printf("O valor de A eh impar");
    }
}
