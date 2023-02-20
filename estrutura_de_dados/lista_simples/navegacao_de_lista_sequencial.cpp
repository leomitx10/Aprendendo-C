#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 3
#include <new>

using namespace std;

//ALOCANDO COM C
int* alocavetor(int tam){
    int *v;

    v = (int *) malloc(tam*sizeof(int));

    return v;
}

void imprimeSequencial(int *vetor, int tamanhodalista){
    for(int i =0;i<tamanhodalista;i++){
        cout<<"|"<<vetor[i]<<"|";
    }
}

int main(){
    int vetor[TAM]={1,2,3},tamanhodalista;

    imprimeSequencial(vetor,3);
    cout<<"\n";

    for(int i =0;i<TAM;i++){
        cin>>vetor[i];
    }

    imprimeSequencial(vetor,3);
    cout<<"\n";

    cout<<"Digite o tamanho do vetor: ";
    cin>>tamanhodalista;

    int *vetorlidonahora = alocavetor(tamanhodalista);
    for(int i =0;i<tamanhodalista;i++){
        cin>>vetorlidonahora[i];
    }

    imprimeSequencial(vetorlidonahora,tamanhodalista);
    cout<<"\n";

    //ALOCANDO COM C++
    int *vetoremcplus = new int[5];
    for(int i =0;i<5;i++){
        cin>>vetoremcplus[i];
    }

    imprimeSequencial(vetoremcplus,5);
}
