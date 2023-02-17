#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("teste.txt","w");
    fprintf(arquivo,"meuovo");
    fclose(arquivo);
}
