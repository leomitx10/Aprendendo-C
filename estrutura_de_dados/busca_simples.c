#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void imprimevetor(int *v){
    for(int i=0;i<10;i++){
        printf("|%d|",v[i]);
    }
}

bool procura(int *vetor,int n,int *posicao){
   bool valorencontrado;

    for(int i=0;i<10;i++){
        if(vetor[i]==n){
            valorencontrado = true;
            *posicao = i;
        }
    }
    return valorencontrado;
}

void main(){
    int vetor[10]={12,45,78,9,5,4,254,65,32,99};
    int n;
    int posicao;


    printf("Conteudo do vetor: \n");
    imprimevetor(vetor);

    printf("\nDigite um numero: ");
    scanf("%d",&n);

    procura(vetor,n,&posicao);

    if(procura){
        printf("O valor foi encontrado na posicao %d",posicao);
    }else{
        printf("O valor nao foi encontrado");
    }
}
