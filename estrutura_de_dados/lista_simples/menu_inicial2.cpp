#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#define TAM 3
#include <new>
#include<string>

using namespace std;

void limpatela(){
    system("CLS");
}

struct pessoa{
    string nome;
    int rg;
};

void imprimesequencial(pessoa *ponteirosequencial,int tamanho){
    for(int i=0;i<tamanho;i++){
        cout<<i<<" - "<<ponteirosequencial[i].nome<<","<<ponteirosequencial[i].rg<<"\n";
    }
}

void adccomecosequencial(pessoa *&ponteirosequencial,int *tamanhodalista, string nome,int rg){
    if(*tamanhodalista==0){
        pessoa *novalistasequencial = new pessoa[1];
        novalistasequencial[0].nome=nome;
        novalistasequencial[0].rg=rg;

        ponteirosequencial= novalistasequencial;
    }else{
        pessoa *novalistasequencial = new pessoa[*tamanhodalista+1];

        novalistasequencial[0].nome=nome;
        novalistasequencial[0].rg=rg;

        for(int i=0;i<*tamanhodalista;i++){
            novalistasequencial[i+1].nome = ponteirosequencial[i].nome;
            novalistasequencial[i+1].rg = ponteirosequencial[i].rg;
        }

        ponteirosequencial= novalistasequencial;


    }
    *tamanhodalista = *tamanhodalista + 1;
}


int main(){
    int funcaodesejada = 1;

    pessoa *ponteirosequencial;

    int tamanhodalista  = 0;

    pessoa *exemplolistasequencial = new pessoa[1];
    ponteirosequencial = exemplolistasequencial;

    while(funcaodesejada<10&&funcaodesejada>0){

    imprimesequencial(ponteirosequencial,tamanhodalista);

    cout<<"Operacoes: \n";
    cout<<"1 - Insercao de um node no inicio da lista\n";
    cout<<"2 - Insercao de um node no fim da lista\n";
    cout<<"3 - Insercao de um node na posicao N\n";
    cout<<"4 - Retirar um node no inicio da lista\n";
    cout<<"5 - Retirar um node no fim da lista\n";
    cout<<"6 - Retirar um node na posicao N\n";
    cout<<"7 - Procurar um node no campo RG\n";
    cout<<"8 - Imprimir a lista\n";
    cout<<"9 - Escolha um numero e pressione enter\n";

    cout<<"Escolha uma opcao: ";
    cin>>funcaodesejada;

    limpatela();

    string nome;
    int rg, posicao;

    switch(funcaodesejada){
        case 1:
            cout<<"Funcao escolhida: 1 - Insercao de um node no inicio da lista\n";

            cout<<"Digite um nome: ";
            cin>>nome;
            cout<<"Digite um RG: ";
            cin>>rg;

            adccomecosequencial(ponteirosequencial,&tamanhodalista,nome,rg);
        break;
    }
    }
}
