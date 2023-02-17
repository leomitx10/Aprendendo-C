#include<stdio.h>
#include<stdlib.h>
#define TAM 3

void main(){
    float vetor[TAM];

    printf("Digite 3 valores: \n");
    for(int i=0;i<TAM;i++){
        scanf("%f",&vetor[i]);
    }

    for(int i=0;i<TAM;i++){
        printf("\nVetor[%d] = %.2f",i,vetor[i]);
    }

    float media= (vetor[0]+vetor[1]+vetor[2])/3;

    printf("\n\nA media eh : %.2f",media);


}
