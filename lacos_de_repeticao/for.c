#include<stdio.h>
#include<stdlib.h>

void main(){
    for(int i=0;i<10;i++){
        printf("|%d|",i);
    }

    printf("\n");

    for(int j=10;j>0;j--){
       printf("|%d|",j);
    }

    printf("\n");

    for(int k=0;k<=10;k++){
        printf("5 x %d = %d\n",k,5*k);
    }

    printf("\n");

    for(int l=0;l<10;l=l+2){
        printf("|%d|",l);
    }
}
