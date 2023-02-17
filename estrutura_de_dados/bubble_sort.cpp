#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 10

using namespace std;

int main(){
    int vetor[TAM]={11,22,33,45,57,69,72,87,94,10};

    for(int x=0;x<TAM;x++){
        for(int y=x+1;y<TAM;y++){
            if(vetor[x]>vetor[y]){
                int aux = vetor[x];
                vetor[x]=vetor[y];
                vetor[y]=aux;
            }
        }
    }

    for(int i=0;i<10;i++){
        cout<<"|"<<vetor[i]<<"|";
    }
}
