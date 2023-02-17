#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    bool a = true;
    bool b = true;

    if(a){
        printf("A eh verdadeiro");
    }
    if(b){
        printf("\nB eh verdadeiro");
    }

    a = false;
    b = false;

    if(!a){
        printf("\nA eh falso");
    }
    if(!b){
        printf("\nB eh falso");
    }

}
