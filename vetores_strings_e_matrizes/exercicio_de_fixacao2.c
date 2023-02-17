#include<stdio.h>
#include<stdlib.h>

void main(){
    int matriz[2][2],aux,aux1;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("Digite o numero da matriz[%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("matriz[%d][%d]=%d\n",i,j,matriz[i][j]);
        }
    }

    aux=matriz[0][0];
    aux1=matriz[0][1];

    matriz[0][0]=matriz[1][0];
    matriz[0][1]=matriz[1][1];

    matriz[1][0]=aux;
    matriz[1][1]=aux1;


    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("matriz[%d][%d] = %d  ",i,j,matriz[i][j]);
        }
        printf("\n");
    }

}
