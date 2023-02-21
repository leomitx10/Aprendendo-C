#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");
    int i, valor, aux = 0;

    printf("Digite um valor para saber se ele é primo:");
    scanf("%d", &valor);

    for(i = 1; i <= valor ; i++){
        if(valor % i == 0){
            aux++;
        }
     }

     if(aux == 2){
        printf("O número é primo!");
    }else{
        printf("O número não é primo! Pois ele tem %d divisores", aux);
    }
}

