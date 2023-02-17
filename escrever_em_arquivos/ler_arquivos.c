#include<stdio.h>
#include<stdlib.h>

void main(){
    int c;
    char conteudo[255];
    int i;


    FILE *arquivo;

    arquivo = fopen("teste.txt","r");

    if(arquivo){
        while((c=getc(arquivo)) != EOF){

            conteudo[i] = c;
            i++;
        }

        fclose(arquivo);
    }
    for(int i=0;i<strlen(conteudo);i++){
        printf("%c",conteudo[i]);
    };

}
