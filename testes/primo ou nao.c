#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
    int i, valor, aux = 0;

    printf("Digite um valor para saber se ele � primo:");
    scanf("%d", &valor);

    for(i = 1; i <= valor ; i++){
        if(valor % i == 0){
            aux++;
        }
     }

     if(aux == 2){
        printf("O n�mero � primo!");
    }else{
        printf("O n�mero n�o � primo! Pois ele tem %d divisores", aux);
    }
}

