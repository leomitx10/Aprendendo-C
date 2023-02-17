#include<stdio.h>
#include<stdlib.h>

int mostraproxnum(int num){
    return num+1;
}

int numantes(int num){
    return num-1;
}

void main(){
    int a;
    scanf("%d",&a);

    printf("O proximo numero eh: %d",mostraproxnum(a));
    printf("\nO numero anterior eh: %d",numantes(a));
}
