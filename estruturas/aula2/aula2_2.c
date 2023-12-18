#include <stdio.h>
#include <stdlib.h>

//com ponteiros

typedef struct disciplina{
    char nome[20];
    float nota;
    int codigo;
}Disciplina;

typedef struct aluno{
    char nome[20];
    int idade;
    int matricula;
    //vetor de disciplina
    Disciplina * materias;
}Aluno;

int main (void){

    Aluno * aluno = (Aluno*) malloc(sizeof(Aluno)); 
    if(aluno == NULL){exit(1);}

    //alocando memoria para vetor de disciplina
    aluno->materias = (Disciplina*) (2 * sizeof(Disciplina));
    if(aluno->materias == NULL){exit(1);}

    printf("informe os dados do aluno: nome, idade e matricula\n");
    scanf(" %[^\n]", aluno->nome);    scanf("%d", &aluno->idade);
    scanf("%d", &aluno->matricula);
    //cadastri disciplina
    int index;
    for(index = 0; index<2; index++){
    printf("digite os dados da disciplina %d: nome, codigo e nota: \n", index+1);
    
    scanf(" %[^\n]", aluno->materias[index].nome);
    scanf("%d", &aluno->materias[index].codigo);
    scanf("%f",  &aluno->materias[index].nota);
    }


    return 0;
}
