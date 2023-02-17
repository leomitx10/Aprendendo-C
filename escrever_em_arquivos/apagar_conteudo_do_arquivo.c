#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("limpar.txt","w");
    fprintf(arquivo,"");
    fclose(arquivo);
}
