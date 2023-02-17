#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    srand((unsigned)time(NULL));

    //aleatorio entre 0 e 2
    int ale = rand()%3;

    //aleatorio entre 1 e 5
    int ale2=(rand()%5)+1;

    printf("Primeiro numero aleatorio: %d",ale);
    printf("\n");
    printf("Segundo numero aleatorio: %d",ale2);
}
