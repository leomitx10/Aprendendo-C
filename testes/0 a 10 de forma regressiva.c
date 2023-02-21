#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int a = 11;
    int b = 11;

    printf("Usando o for:\n");

    for(i=10; i>=0; i--){
        printf("%d\n",i);
    }

    printf("Usando o while:\n");

    while(a>0){
        a--;
        printf("%d\n",a);
    }

    printf("Usando o do while:\n");
    do{
        b--;
        printf("%d\n",b);
    }while(b>0);

}
