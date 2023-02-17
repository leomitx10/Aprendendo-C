#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 10

using namespace std;

int main(){
    int vetor[TAM]={11,22,33,45,57,69,72,87,94,10};
     int i, j, atual;

    for(int i = 1; i<TAM; i++){
        atual = vetor[i];

        j = i - 1;

        while((j>=0)&&(atual<vetor[j])){
            vetor[j+1] = vetor[j];
            j = j-1;
        }

        vetor[j+1] = atual;
    }

    for(int i=0;i<10;i++){
        cout<<"|"<<vetor[i]<<"|";
    }
}
