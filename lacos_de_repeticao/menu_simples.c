#include<stdio.h>
#include<stdlib.h>

void main(){
    int op;

    while(op<1 || op>4){
    printf("Escolha uma opcao: \n");
    printf("1 - opcao1\n");
    printf("2 - opcao2\n");
    printf("3 - opcao3\n");
    printf("4 - opcao4\n");

    scanf("%d",&op);

    switch(op){
        case 1:
            printf("Voce escolheu a opcao 1");
            break;
        case 2:
            printf("Voce escolheu a opcao 2");
            break;
        case 3:
            printf("Voce escolheu a opcao 3");
            break;
        case 4:
            printf("Voce escolheu a opcao 4");
            break;
        default:
            printf("Opcao invalida");
            break;
    }
    }
}
