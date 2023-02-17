#include <stdio.h>
#include <stdlib.h>

void main(){
    int a = 15;
    int b = 5;

    //SOMA
    printf("A soma entre %d e %d eh igual a: %d",a,b,a+b);

    //SUBTRACAO
    printf("\nA subtracao entre %d e %d eh igual a: %d",a,b,a-b);

    //MULTIPLICACAO
    printf("\nA multiplicacao entre %d e %d eh igual a: %d",a,b,a*b);

    //DIVISAO
    printf("\nA divisao entre %d e %d eh: %d",a,b,a/b);

    //RESTO DA DIVISAO
    int c = 9;
    int d = 2;
    printf("\nO resto da divisao entre %d e %d eh: %d",c,d,c%d);

    //VALOR ABSOLUTO
    int e = -9;
    printf("\nO valor absoluto de %d eh: %d",e,abs(e));
}
