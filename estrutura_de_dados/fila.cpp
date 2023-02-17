#include<iostream>
#include<stdlib.h>
#define TAM 10
#include<stdbool.h>

using namespace std;

void fila_construtor(int *frente, int *tras){
    *frente = 0;
    *tras = -1;
}

bool fila_vazia(int tras){
    if(tras == -1){
        return true;
    }else{
        return false;
    }
}

bool fila_cheia(int tras){
    if(tras==TAM-1){
        return true;
    }else{
        return false;
    }
}

void fila_enfileirar(int num,int *fila,int *tras){
    if(fila_cheia(*tras)==true){
        cout<<"A fila esta cheia\n";
    }else{
        *tras = *tras +1;
        fila[*tras] = num;
    }

}

void fila_desenfileirar(int *fila,int *frente,int *tras){
    if(fila_vazia(*tras)==true){
        cout<<"A fila esta vazia\n";
    }else{
        fila[*frente] = 0;
        *frente = *frente + 1;
    }


}

int main(){
    int fila[TAM] = {0,0,0,0,0,0,0,0,0,0};
    int tras,frente;

    fila_construtor(&frente,&tras);

    fila_enfileirar(5,fila,&tras);
    fila_enfileirar(6,fila,&tras);
    fila_enfileirar(7,fila,&tras);
    fila_enfileirar(8,fila,&tras);
    fila_enfileirar(5,fila,&tras);
    fila_enfileirar(6,fila,&tras);
    fila_enfileirar(7,fila,&tras);
    fila_enfileirar(8,fila,&tras);
    fila_enfileirar(5,fila,&tras);
    fila_enfileirar(6,fila,&tras);
    fila_desenfileirar(fila,&frente,&tras);



    for(int i=0;i<TAM;i++){
        cout<<"|"<<fila[i]<<"|";
    }



}
