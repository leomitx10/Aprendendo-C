#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#define TAM 3

using namespace std;

int main(){
    int vetor[TAM]={5,10,15},cont;


    cout << "Usando for\n";
    for(cont=0;cont<TAM;cont++){
        /*printf("Vetor[%d] = %d\n",cont,vetor[cont]);*/
        cout << "Vetor: "<<vetor[cont] << "\n";
    }

    cont = 0;

    cout << "\nUsando while\n";
    while(cont<TAM){
        printf("Vetor[%d] = %d\n",cont,vetor[cont]);
        cont++;
    }

    //definindo matrizes
    printf("\n");
   int matriz [TAM][TAM] = {1,2,3,4,5,6,7,8,9};
   int i,j;

   for(i=0;i<3;i++){
        for (j=0;j<3;j++){
            printf("%d ",matriz[i][j]);
        }printf("\n");
   }


}
