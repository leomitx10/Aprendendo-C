#include<stdio.h>
#include<stdlib.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

struct aluno{
    char matricula[101];
    data nascimento;
};

void main(){
    struct aluno aluno1;

    strcpy(aluno1.matricula,"211030827");
    aluno1.nascimento.dia=25;
    aluno1.nascimento.mes=03;
    aluno1.nascimento.ano=2002;

    printf("Matricula: %s",aluno1.matricula);
    printf("\nData de nascimento: %d / %d / %d ",aluno1.nascimento.dia,aluno1.nascimento.mes,aluno1.nascimento.ano);



}
