#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz [2][2],i,j;

    matriz[0][0]=1;
    matriz[0][1]=2;
    matriz[1][0]=3;
    matriz[1][1]=4;

    //imprimindo valores na tela
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            /*printf("i = %d j = %d\n", i,j);*/
            printf("%d ", matriz[i][j]);
        }printf("\n");
    }

    //lendo valores para a matriz
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

     //imprimindo valores na tela
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            /*printf("i = %d j = %d\n", i,j);*/
            printf("%d ", matriz[i][j]);
        }printf("\n");
    }
}
