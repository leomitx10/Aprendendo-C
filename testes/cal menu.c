#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;

    printf("Digite dois valores:\n");
    scanf("%d %d",&a,&b);
    printf("Escolha uma opcao:\n1-Somar\n2-Subtrair\n3-Dividir\n4-Multiplicar\n");

    scanf("%d",&c);

    switch(c){
        case 1:
            printf("\n%d",a+b);
            break;
        case 2:
            printf("\n%d",a-b);
            break;
        case 3:
            printf("\n%d",a/b);
            break;
        case 4:
            printf("\n%d",a*b);
            break;
    }
}
