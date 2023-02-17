#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 10

using namespace std;

void shell_sort(int vetor[TAM]){
    int atual,j;
    int h = 1;

    while(h<TAM){
        h=3*h+1;
    }

    while(h>1){
        h=h/3;

        for(int i=0;i<TAM;i++){
            atual = vetor[i];
            j = i - h;

            while( (j >=0) && (atual < vetor[j])){
                vetor[j + h] = vetor[j];
                j = j - h;
        }
        vetor[j + h] = atual;
    }
}}

int main(){
    int vetor[TAM]={11,22,33,45,57,69,72,87,94,10};

    shell_sort(vetor);

    for(int i=0;i<10;i++){
        cout<<"|"<<vetor[i]<<"|";
    }
}
