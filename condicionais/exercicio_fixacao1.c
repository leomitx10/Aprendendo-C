#include<stdio.h>
#include<stdlib.h>

void main(){
    float a,b,c;
    float media;

    printf("Digite a primeira nota: ");
    scanf("%f",&a);

    printf("Digite a segunda nota: ");
    scanf("%f",&b);

    printf("Digite a terceira nota: ");
    scanf("%f",&c);

    media = (a+b+c)/3;

    if(media>7){
        printf("O aluno foi aprovado");
    }else{
        printf("O aluno foi reprovado");
        };
}
