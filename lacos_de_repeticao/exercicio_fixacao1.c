#include<stdio.h>
#include<stdlib.h>

void main(){
    for(int i=10;i>=0;i--){
        printf("|%d|",i);
    }

    printf("\n");

    int a=10;
    while(a>=0){
        printf("|%d|",a);
        a--;
    }

    printf("\n");

    int b=10;

    do{
        printf("|%d|",b);
        b--;
    }while(b>=0);
}
