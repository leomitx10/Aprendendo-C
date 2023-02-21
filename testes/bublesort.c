#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAM 10

void imprimeVetor(int vetor[]){
    for(int i=0;i<TAM;i++){
        printf("| %d | ",vetor[i]);
    }
}

int main(){
    int vetor[TAM]={1,9,8,7,2,5,4,3,6,10};
    int x,y,aux;

    //analisa valor da esquerda
    for(x=0;x<TAM;x++){
    //analisa valor da direita

        for(y=x+1;y<TAM;y++){
        //confere se precisa fazer a troca

            if(vetor[x] > vetor[y]){
                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;
            }
        }
    }

    imprimeVetor(vetor);

}
