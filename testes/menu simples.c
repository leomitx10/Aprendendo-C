#include <stdio.h>
#include <stdlib.h>

int main(){

    int opcao;

    while(opcao<1 || opcao>3){

    printf("Escolha uma opcao:");
    printf("\n-Opcao 1");
    printf("\n-Opcao 2");
    printf("\n-Opcao 3\n");

    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            printf("\nEscolheu a opcao 1");
            break;
        case 2:
            printf("\nEscolheu a opcao 2");
            break;
        case 3:
            printf("\nEscolheu a opcao 3");
            break;
        default:
            printf("\nNao escolheu nenhuma opcao");
            break;
    }}
}
