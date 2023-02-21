#include <stdio.h>
#include <stdlib.h>

void main(){

int a;

    for(a=1;a<=10;a++){
        printf("5 x %d = %d \n",a,a*5);
    }

    printf("\n");

    for(a=0;a<=10;a=a+2){
        printf("%d \n",a);
    }

    printf("\n");

    for(a=10;a>=0;a--){
        printf("%d \n",a);
    }

}
