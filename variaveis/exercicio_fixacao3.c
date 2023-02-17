#include<stdio.h>
#include<stdlib.h>

void main(){
    int a,b,c;
    int m;

    printf("Digite 3 numeros: \n");
    scanf("%d %d %d",&a,&b,&c);

    m = a*b*c;

    printf("A multiplicacao entre %d, %d e %d eh: %d",a,b,c,m);
}
