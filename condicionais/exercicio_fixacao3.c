#include<stdio.h>
#include<stdlib.h>

void main(){
    float n1,n2,n3;
    int esc;
    float op;

    printf("Digite o primeiro numero: ");
    scanf("%f",&n1);
    printf("Digite o segundo numero: ");
    scanf("%f",&n2);
    printf("Digite o terceiro numero: ");
    scanf("%f",&n3);

    printf("\nEscolha uma opcao:\n");
    printf("\n1 - Somar\n2 - Subtrair\n3 - Dividir\n4 - Multiplicar\n\n");

    scanf("%d",&esc);

    switch(esc){
        case 1:
            op = n1+n2+n3;
            printf("%.2f",op);
            break;
        case 2:
            op = n1-n2-n3;
            printf("%.2f",op);
            break;
        case 3:
            op = n1/n2/n3;
            printf("%.2f",op);
            break;
        case 4:
            op = n1*n2*n3;
            printf("%.2f",op);
            break;
        default:
            printf("Voce nao escolheu nenhuma opcao");
    }
}
