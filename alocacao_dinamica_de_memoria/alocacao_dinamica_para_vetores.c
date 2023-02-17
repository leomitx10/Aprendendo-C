#include<stdio.h>
#include<stdlib.h>

int* alocarvetor(int tam){
    int *v;

    v =(int *)malloc(tam * sizeof(int));

    return v;
}

void main(){
    int *vetor,tam;

    printf("Digite um tamanho: ");
    scanf("%d",&tam);

    vetor = alocarvetor(tam);

    vetor[0] = 1;
    vetor[1] = 2;
    vetor[2] = 3;

    for(int i=0;i<tam;i++){
        printf("|%d|", vetor[i]);
    }

    free ( vetor ) ;
}
