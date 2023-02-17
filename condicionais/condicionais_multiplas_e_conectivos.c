#include<stdio.h>
#include<stdlib.h>

void main(){
    int a=18;

    if(a==18 && a>15){
        printf("A eh igual a 18 e A eh maior que 15");
    }

    if(a>5 || a<20){
        printf("\nA eh maior que 5 e menor que 20");
    }

    if((a>5 && a<20) || a==18){
        printf("\nMASSA");
    }
}
