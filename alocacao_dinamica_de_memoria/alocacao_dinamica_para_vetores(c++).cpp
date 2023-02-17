#include<stdio.h>
#include<stdlib.h>
#include<new>
#include<iostream>

using namespace std;

int main(){
    int *vetor,tam;

    cout<<"Digite um tamanho: ";
    scanf("%d",&tam);

    cout<<"Tamanho: "<<tam<<"\n";

    vetor = new int[tam];

    for(int i=0;i<tam;i++){
        vetor[i]=i;
        cout<<"|"<<vetor[i]<<"|";
    }
}
