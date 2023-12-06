#include <stdio.h>
#include <stdlib.h>

int main(void){
    int linhas = 3;
    int colunas = 3;
    int i,j;

    //alocando vetor de ponteiros
    int **matriz = (int**) malloc(linhas * sizeof(int*));//um vetor de ponteiros
    for( i = 0; i<linhas; i++){
        matriz[i] = (int* ) malloc(colunas * sizeof(int)); //alocando as colunas, que estao conectados no vetor de ponteiros
    }

    //liberando memoria
    for (i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);

    return 0;
} //a forma de leitura é igual a alocação estatica: matriz[i][j]. tambem pode ser acessado por: *(*(matriz +i) + j)