#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Variáveis
    char p[10];

    //Instrução
    printf("Digite uma palavra\n");

    //Lê a String
    fgets(p, 255, stdin);

    //Imprime na tela
    printf("%s", p);


}
