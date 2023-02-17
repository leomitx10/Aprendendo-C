#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        printf("|%d|",vetor[i]);
    }
}

int busca_binaria(int valorProcurado,int *vetor, int *posicao){
        int esquerda = 0;
        int direita = TAM - 1;
        int meio;

    while(esquerda<=direita){
        meio = (esquerda+direita)/2;

        if(valorProcurado == vetor[meio]){
            *posicao = meio;
            return 1;
        }

        if(vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }

    }return -1;
}

void main(){
    int vetor[TAM] = {1,23,44,56,63,72,84,90,98,12};
    int valorProcurado;
    int  posicao;

    imprime_vetor(vetor);

    printf("\nQual numero deseja encontrar? ");
    scanf("%d", &valorProcurado);

    if(busca_binaria(valorProcurado,vetor,&posicao)==1){
        printf("O numero foi encontrado na posicao: %d",posicao);
    }else{
        printf("O numero não foi encontrado");
    }


}
