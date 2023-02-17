#include<stdio.h>
#include<stdlib.h>

void main(){
    int a = 10;

    while(a>=10 && a<=20){
        if(a%2==0){
            printf("|%d|",a);
        }
        a++;
    }

    printf("\n");

    for(int i=10;i<=20;i=i+2){
        printf("|%d|",i);
    }

    printf("\n");

    int b=10;

    do{
        printf("|%d|",b);
        b=b+2;
    }while(b<=20);

}
