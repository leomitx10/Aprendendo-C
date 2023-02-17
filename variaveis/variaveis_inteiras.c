#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 15;
    int b;

    printf("O valor de A eh: %d",a);
    printf("\nDigite um numero: \n");
    scanf("%d", &b);
    printf("O valor de B eh: %d\n",b);

    printf("Digite um novo valor:\n");
    scanf("%d",&b);
    printf("O valor de B eh: %d\n",b);
}
