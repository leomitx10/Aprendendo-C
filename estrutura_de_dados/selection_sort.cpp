#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 10

using namespace std;

void selection_sort(int *vetor){
    int menorvalor, aux, i, j;

    for(i = 0; i < TAM; i++){
        menorvalor = i;
        for(j = i + 1; j < TAM; j++){
            if(vetor[j] < vetor[menorvalor]){
                menorvalor = j;
            }
        }
        if(menorvalor != i){
            aux = vetor[i];
            vetor[i] = vetor[menorvalor];
            vetor[menorvalor] = aux;
        }
    }
}

int main(){
    int vetor[TAM]={11,87,222,33,45,104,69,72,94,10};

    selection_sort(vetor);

    for(int i=0;i<10;i++){
        cout<<"|"<<vetor[i]<<"|";
    }

}
