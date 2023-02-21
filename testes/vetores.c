#include <stdio.h>
#include <stdlib.h>
#define TAM 2

void main(){
    int vetor[3],n;

    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    printf("\nPosicao 0: %d", vetor[0]);
    printf("\nPosicao 1: %d", vetor[1]);
    printf("\nPosicao 2: %d", vetor[2]);

    printf("\n");

    for(n=0; n<=TAM; n++){
        printf("\nPosicao %d: %d",n,vetor[n]);
    }}


