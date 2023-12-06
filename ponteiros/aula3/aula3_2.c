#include <stdio.h>
#include <stdlib.h>

int main(){
    int tamanho= 5;
    int contador;
    int * vetor  = (int*) malloc(tamanho * sizeof(int));
    if(vetor == NULL){
        exit(1); //aborta
    }else{
        printf("alocacao com sucesso\n");
    }

    //ler dados do vetor:
    printf("digite os valores do vetor: \n");
    for (contador = 0; contador < tamanho; contador++){
        scanf("%d", &vetor[contador]); //OU ,vetor + contador
    }
    free(vetor);

    return 0;
}