#include<stdio.h>
#include<stdlib.h>

void main(){
    int A = 15;
    int *pont;

    printf("O valor de A eh: %d\n", A);

    pont = &A;

    *pont = 45;

    printf("O valor de A dps do ponteiro eh: %d\n", A);


}
