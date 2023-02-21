#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1,n2,n3,m;
    scanf("%f %f %f",&n1,&n2,&n3);

    m = (n1+n2+n3)/3;

    if(m>7){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }
}
