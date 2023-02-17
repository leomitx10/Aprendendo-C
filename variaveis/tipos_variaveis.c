#include <stdio.h>
#include <stdlib.h>

int main(){
  //SOMA DE INTEIROS
    int a = 15;
    int b;

    scanf("%d",&b);
    printf("A soma de A e B eh: %d\n",a+b);

    //SOMA DE FLOAT
    float c = 9.5;
    float d;

    scanf("%f",&d);
    printf("A soma entre C e D eh: %.2f\n",c+d);


    //Lendo letras
    fflush(stdin);
    char letra = ' ';
    scanf("%c",&letra);
    printf("O valor de c eh = %c \n", letra);
    fflush(stdin);
    char letrab = ' ';
    scanf("%c",&letrab);
    printf("O valor de d eh = %c \n", letrab);


}
