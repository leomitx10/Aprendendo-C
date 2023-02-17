#include<stdio.h>
#include<stdlib.h>

int soma(int a,int b){
    return a+b;
}

int subtracao(int a,int b){
    return a-b;
}

void main(){
    int a=10;
    int b=15;

    printf("O valor da soma entre %d e %d eh: %d",a,b,soma(a,b));
    printf("\nO valor da subtracao entre %d e %d eh: %d",a,b,subtracao(a,b));
}
