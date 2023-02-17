#include <stdio.h>
#include <stdlib.h>

void main(){
    char palavra[10];

    printf("Digite uma palavra: ");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Le a String
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s", palavra);

}
