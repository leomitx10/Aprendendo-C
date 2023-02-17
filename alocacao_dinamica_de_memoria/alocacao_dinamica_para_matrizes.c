#include <stdio.h>
#include <stdlib.h>

int main(){

    //Ponteiro que vai apontar para o vetor criado
    int linhas = 5 , colunas = 3, i, j;

    //Criando a um ponteiro
    int (*mat)[colunas];

    //Alocando memória
    mat=(int (*)[colunas])malloc(sizeof(*mat)*linhas);

    //Imprimindo a matriz
    for(i = 0; i < linhas; i++){
        for(j = 0; j< colunas; j++){
            mat[i][j] = i;
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);



}

