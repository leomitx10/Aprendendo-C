#include<stdio.h>
#include<stdlib.h>

void main(){

int matriz[2][2];

    matriz[0][0]=0;
    matriz[0][1]=0;
    matriz[1][0]=0;
    matriz[1][1]=0;

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&matriz[i][j]);
        }
    }

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("matriz[%d][%d] = %d\n",i,j,matriz[i][j]);
        }
    }

}
