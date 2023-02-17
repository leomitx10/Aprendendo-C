#include<stdio.h>
#include<stdlib.h>

struct aluno{
    int matricula;
    float notaf;
    char nome[255];
};

void main(){
    struct aluno info;

    info.matricula = 15;
    info.notaf = 1.15;

    /*
    printf("Matricula: %d",info.matricula);
    printf("\nNota: %.2f",info.notaf);
    printf("\nNome: %s",strcpy(info.nome,"Leandro"));
    */

    struct aluno listadealunos[2];

    listadealunos[0].matricula = 211;
    listadealunos[1].matricula = 321;

    listadealunos[0].notaf = 8.4;
    listadealunos[1].notaf = 8.4;

    strcpy(listadealunos[0].nome,"Leandro");
    strcpy(listadealunos[1].nome,"Pedro");

    for(int i=0;i<2;i++){
        printf("Nome: %s | Nota: %.2f | Matricula: %d\n",listadealunos[i].nome,
               listadealunos[i].notaf,listadealunos[i].matricula);
    }



}
