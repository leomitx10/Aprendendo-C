#include <stdio.h>
#include <stdlib.h>

int va(float n){
    int c = (int)n;
    if(c<0){
        printf("%d",-(c));
    }else{
        printf("%d",c);
    }
}

int main(){
    va(-55.5);




}
