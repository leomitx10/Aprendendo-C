#include <stdio.h>
#include <stdlib.h>

int main(){
    int a,b,c;
    printf("Digite 3 valores: \n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c && a==c){
        printf("Eh um triangulo equilatero");
    } else if(a!=b && b!=c && a!=c){
        printf("Eh um triangulo escaleno");
    }else{
          printf("Eh um triangulo isoceles");
}
 }
