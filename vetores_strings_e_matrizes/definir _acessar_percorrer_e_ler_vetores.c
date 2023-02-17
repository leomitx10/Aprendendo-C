#include<stdio.h>
#include<stdlib.h>
#define TAM 10

void main(){
    int vetor[TAM];

    for(int i=0;i<TAM;i++){
        vetor[i]=i+1;
    }

    for(int j=0;j<TAM;j++){
        printf("vetor[%d] = %d\n",j,vetor[j]);
    }
}
