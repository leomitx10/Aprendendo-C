#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main(){
    //MEDIA ENTRE DOIS VALORES
    setlocale(LC_ALL, "");
    float a, b;
    printf("Digite dois números: \n");

    scanf("%f %f",&a,&b);
    printf("A media entre %.2f e %.2f é: %.2f",a,b,(a+b)/2);
}
