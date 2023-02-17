#include<stdio.h>
#include<stdlib.h>

void main(){

    //LE 2 NOTAS E MOSTRA O VALOR ABSOLUTO DA DIFERENCA ENTRE ELAS
    int nota1;
    int nota2;

    printf("Digite a primeira nota: ");
    scanf("%d",&nota1);
    printf("Digite a segunda nota: ");
    scanf("%d",&nota2);

    printf("O valor da diferenca eh: %d",abs(nota1-nota2));

}
