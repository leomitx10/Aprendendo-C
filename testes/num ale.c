#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand((unsigned)time(NULL));

    int ale = rand() % 4;

    printf("%d",ale);

    int ale2 = (rand() %5)+1;

    printf("\n%d",ale2);

}
