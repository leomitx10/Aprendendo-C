#include<stdio.h>
#include<stdlib.h>
#define TAM 10
#include<stdbool.h>

pilha_construtor(int *pilha,int *topo){
    *topo = -1;
    for(int i=0;i<TAM;i++){
        pilha[i]=0;
    }
}

bool pilha_vazia(int topo){
    if(topo == -1){
        return true;
    }else{
        return false;
    }
}

bool pilha_cheia(int topo){
    if(topo == TAM-1){
        return true;
    }else{
        return false;
    }
}

void empilhar(int *pilha, int *topo,int num){
    if(pilha_cheia(*topo)==true){
        printf("A pilha esta cheia\n");
    }else{
        *topo = *topo + 1;
        pilha[*topo] = num;
    }
}

void desempilhar(int *pilha, int *topo){
    if(pilha_vazia(*topo) == true){
        printf("A pilha esta vazia");
    }
    pilha[*topo] = 0;
    *topo = *topo - 1;
}

int pilha_pegtopo(int *pilha, int *topo){
    if(pilha_vazia(*topo) == true){
        printf("A pilha esta vazia");
        return 0;
    }else{
        return pilha[*topo];
    }

}

void main(){
    int pilha[TAM];
    int topo;

    pilha_construtor(pilha,&topo);

    empilhar(pilha,&topo,1);
    empilhar(pilha,&topo,2);
    desempilhar(pilha,&topo);
    empilhar(pilha,&topo,3);
    empilhar(pilha,&topo,4);
    empilhar(pilha,&topo,5);
    empilhar(pilha,&topo,6);
    desempilhar(pilha,&topo);
    printf("O topo eh: %d\n",pilha_pegtopo(pilha,&topo));




    for(int i=0;i<TAM;i++){
        printf("|%d|",pilha[i]);
    }



}
