#include <stdio.h>
#include <stdlib.h>

void main(){

    int a = 15;

    if(a>5 && a<20){
        printf("verdade");
    }

    if(a<80 || a==15){
        printf("\nverdade 2");
    }

    if ((a>5 && a<20)||(a<80 || a==15)){
        printf("\nverdade 3");
    }

    if (a==15 && a<10){
        printf("\nverdade4");
    } else {
        printf("\nperdemo");
    }

}
