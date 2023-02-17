#include<stdio.h>
#include<stdlib.h>

void main(){
    int a;


    scanf("%d",&a);

    switch(a){
        case 1:
            printf("Escolheu a opcao 1");
            break;
        case 2:
            printf("Escolheu a opcao 2");
            break;
        case 3:
            printf("Escolheu a opcao 3");
            break;
        case 4:
            printf("Escolheu a opcao 4");
            break;
        default:
            printf("Escolheu a opcao meuovo");
            break;
    }

    printf("\n");

    fflush(stdin);
    char letra=' ';
    scanf("%c",&letra);

    switch(letra){
        case 'a':
            printf("Escolheu a opcao a");
            break;
        case 'b':
            printf("Escolheu a opcao b");
            break;
        case 'c':
            printf("Escolheu a opcao c");
            break;
        case 'd':
            printf("Escolheu a opcao 1");
            break;
        default:
            printf("Escolheu a opcao OVO");
            break;
    }
}
