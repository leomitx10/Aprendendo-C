#include<stdio.h>
#include<stdlib.h>

void main(){
    int a=5;
    int b=9;
    int c=15;

    if(a>2){
        printf("A eh maior que 2\n");
    }
    if(b<15){
        printf("B eh menor que 15\n");
    }
    if(b>=a){
        printf("A eh maior ou igual a B\n");
    }
    if(b<=c){
        printf("B eh menor ou igual a C\n");
    }
    if(a!=b){
        printf("A eh diferente de B\n");
    }
}
