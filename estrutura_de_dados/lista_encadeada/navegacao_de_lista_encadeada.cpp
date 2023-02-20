#include<stdio.h>
#include<stdlib.h>
#include<new>

struct estrutura{
    int valorNumerico;
    struct estrutura *proximo;
};

int main(){
    estrutura *ponteiroEncadeada;

    estrutura *novoPrimeiroValor = new estrutura;

    novoPrimeiroValor->valorNumerico=13;
    novoPrimeiroValor->proximo = NULL;

    ponteiroEncadeada = novoPrimeiroValor;

    estrutura *novoSegundoValor = new estrutura;

    novoSegundoValor->valorNumerico=20;
    novoSegundoValor->proximo = NULL;

    ponteiroEncadeada->proximo = novoSegundoValor;

    while(ponteiroEncadeada!=NULL){
        printf("\nValor: %d",ponteiroEncadeada->valorNumerico);
        ponteiroEncadeada=ponteiroEncadeada->proximo;

    }

}
