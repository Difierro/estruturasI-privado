#include <stdio.h>
#include <stdlib.h>

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char  nome[20];
    int idade;
    int matricula;
    Disciplina materias; 
}Aluno;

int main (void){

    Aluno aluno; //declarando variavel aluno do tipo Aluno
    aluno.idade = 19;
    aluno.matricula= 2025426665; 
    aluno.materias.codigo = 2342;
    printf(" %d %d %d\n ", aluno.idade, aluno.matricula, aluno.materias.codigo);
    return 0;
}
