#include <stdio.h>
#include <stdlib.h>

int main(){
    int * vetor = malloc(3 * sizeof(int)); // malloc(nElementosArray * tamanhoEmBytes). Retorna o tamanho endereço do primeiro elemento do array.
    if( vetor == NULL){ 
        printf("memoria insuficiente");
        exit(1); 
    }else{
        printf("alocação bem sucedida");
    }
    free(vetor); //libera espaço da memoria quando o array não for mais utilizado
    return 0;
};