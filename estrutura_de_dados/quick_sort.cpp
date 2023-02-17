#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 10

using namespace std;

void quick_sort(int vetor[TAM], int inicio, int fim){
    int pivo, esq, dir, meio, aux;

    esq = inicio;
    dir = fim;

    meio =  (int) ((esq + dir) / 2);
    pivo = vetor[meio];

    while(dir > esq){
        while(vetor[esq] < pivo){
            esq = esq + 1;
        }

        while(vetor[dir] > pivo){
            dir = dir - 1;
        }

        if(esq <= dir){
            aux = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = aux;

            esq = esq + 1;
            dir = dir - 1;
        }
    }
    if(inicio < dir){
        quick_sort(vetor, inicio, dir);
    }
    if(esq < fim){
         quick_sort(vetor, esq, fim);
    }
}

int main(){
    int vetor[TAM]={11,225,33,45,57,69,72,87,94,10};

    quick_sort(vetor,0,TAM);

    for(int i=0;i<10;i++){
        cout<<"|"<<vetor[i]<<"|";
    }
}
