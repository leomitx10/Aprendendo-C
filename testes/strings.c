#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
void main(){

    //Vari�veis
    char p[10];

    //Instru��o
    printf("Digite uma palavra\n");

    //L� a String
    fgets(p, 255, stdin);

    //Imprime na tela
    printf("%s", p);


}
