#include <stdlib.h>
#define TAM 10

void imprime_vetor(int vetor[TAM]){
    for(int i = 0; i < TAM; i++){
        printf("| %d |",vetor[i]);
    }
}

void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

void fila_enfileirar(int fila[TAM], int valor, int *tras){
    if(*tras == TAM-1){
        printf("Fila cheia!\n");
        }else{
            *tras = *tras + 1;
            fila[*tras] = valor;
        }
}

int main(){
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int frente,tras;
    int valor;

    fila_construtor(&frente, &tras);

    fila_enfileirar(fila, 1, &tras);
    fila_enfileirar(fila, 2, &tras);
    fila_enfileirar(fila, 3, &tras);
    fila_enfileirar(fila, 4, &tras);
    fila_enfileirar(fila, 5, &tras);
    fila_enfileirar(fila, 6, &tras);
    fila_enfileirar(fila, 7, &tras);
    fila_enfileirar(fila, 8, &tras);
    fila_enfileirar(fila, 9, &tras);
    fila_enfileirar(fila, 10, &tras);

    imprime_vetor(fila) ;
}
