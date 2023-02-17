#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#define TAM 3

using namespace std;

int main(){
    int vetor[TAM]={1,2,3};

    for(int i=0;i<3;i++){
        cout<<vetor[i]<<"\n";
    }

    printf("\n");

    int matriz[TAM][TAM]={1,2,3,4,5,6,7,8,9};

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matriz[i][j]<<"  ";
        }
        printf("\n");
    }
}
