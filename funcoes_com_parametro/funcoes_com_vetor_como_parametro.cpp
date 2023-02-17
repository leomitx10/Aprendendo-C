#include<stdio.h>
#include<stdio.h>
#include<iostream>

using namespace std;

void imprimevetor(int *vet, int tamanho){
    for(int i=0;i<tamanho;i++){
        cout << "|"<<vet[i]<<"|";
    }
}

void aumentanumvet(int *vet, int tamanho){
    for(int i=0;i<tamanho;i++){
        cout << "|"<<vet[i]+1<<"|";
    }
}

int main(){
    int vetor[5]={1,2,3,4,5};

    imprimevetor(vetor,5);

    printf("\n");

    aumentanumvet(vetor,5);



}
