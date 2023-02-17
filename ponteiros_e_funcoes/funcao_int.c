#include<stdio.h.>
#include<stdlib.h>

int coloca10(){
    return 10;
}

float colocaf();

void main(){
    int a;

    a = coloca10();

    printf("O valor de a eh: %d",a);

    float b;

    b = colocaf();

     printf("\nO valor de a eh: %.2f",b);
}

float colocaf(){
    return 10.9;
}
