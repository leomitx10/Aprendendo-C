#include <stdio.h>
#include <stdlib.h>

void main(){
    int a=3;
    char b = 'T';

    switch(a){
    case 1:
        printf("escolheu o 1");
        break;
    case 2:
        printf("\nescolheu o 2");
        break;
    case 3:
        printf("\nescolheu o 3");
        break;
    case 4:
        printf("\nescolheu o 4");
    default:
        printf("\nopcao invalida");
        break;
    }

    switch(b){
        case 'T':
            printf("\nmassa");
            break;
        case 'A':
            printf("\ndoido");
            break;
        default:
            printf("\nmeu ovo");
            break;
    }
}
