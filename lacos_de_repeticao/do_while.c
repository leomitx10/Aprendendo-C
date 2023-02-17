#include<stdio.h>
#include<stdlib.h>

void main(){
    int a = 0;
    int b = 15;

    do{
        printf("%d\n",a);
        a++;
    }while(a<10);

    printf("\n-----------------------------\n\n");

    do{
        printf("%d\n",b);
        b=b-1;
    }while(b<10);
}
