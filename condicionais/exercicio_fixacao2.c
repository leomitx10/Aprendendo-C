#include<stdio.h>
#include<stdlib.h>

void main(){
    int a,b,c;

    printf("Digite o tamanho do primeiro lado: ");
    scanf("%d", &a);

    printf("Digite o tamanho do segundo lado: ");
    scanf("%d", &b);

    printf("Digite o tamanho do terceiro lado: ");
    scanf("%d", &c);

    if(a==b && b==c && a==c){
        printf("Eh um triangulo equilatero");
    }else if(a!=b && b!=c && a!=c){
        printf("Eh um triangulo escaleno");
    }else{
        printf("Eh um triangulo isosceles");
    }


}
