#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<string>

using namespace std;

struct fruta{
    string nome;
    string cor;
};


int main(){
    fruta *primeirafruta = new fruta;

    primeirafruta->nome = "banana";
    primeirafruta->cor = "amarela";

    cout<<primeirafruta->nome;
    cout<<"\n"<<primeirafruta->cor;

    cout<<"\n---------------------------------------------------";

    fruta *listadefrutas = new fruta[2];

    listadefrutas[0].nome = "beringela";
    listadefrutas[0].cor = "roxo";

    listadefrutas[1].nome = "abacaxi";
    listadefrutas[1].cor = "amarelo";

    cout<<"\n";

    for(int i=0;i<2;i++){
        cout<<"Nome da fruta: "<<listadefrutas[i].nome<<"\n"<<"Cor da fruta: "<<listadefrutas[i].cor<<"\n";
    }

}
