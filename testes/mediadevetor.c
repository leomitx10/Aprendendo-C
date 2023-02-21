#include <stdio.h>
#include <stdlib.h>

int main(){
    //float vetor[3];
    int i;
    int tamanho;

    /*
    printf("Digite tres valores: \n");
    scanf("%f %f %f",&vetor[1],&vetor[2],&vetor[3]);
    printf("\n%.2f",(vetor[1]+vetor[2]+vetor[3])/3);
    */


    /*
    for(i=0;i<3;i++){
        printf("Digite um valor: ");
        scanf("%f",&vetor[i]);
    }
    for(i=0;i<3;i++){
        printf("\nVetor[%d] = %.2f", i, vetor[i]);
    }
    printf("\n");
    printf("\nA media entre esses valores eh: %.2f",(vetor[1]+vetor[2]+vetor[3])/3);
    */



    printf("Qual sera o tamanho do vetor?");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;


    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }

    printf("\nA media dos valores e: %.2f", soma/tamanho);

}






