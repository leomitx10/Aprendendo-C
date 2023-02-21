#include <stdio.h>
#include <stdlib.h>

int main(){
    int i;
    int a = 8;
    int c = 8;

    printf("Usando o for:\n");
    for(i=10; i<=20;i=i+2){
        printf("%d\n",i);
    }
    printf("Usando o while:\n");
    while(a%2==0 && a<20){
        a=a+2;
        printf("%d\n",a);
    }
    printf("Usando o do while:\n");
    do{
        c=c+2;
        printf("%d\n",c);
    }while(c%2==0 && c<20);

}
