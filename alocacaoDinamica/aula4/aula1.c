#include <stdio.h>
#include <stdlib.h>

float media(int tamanho, int * vetor){
    int soma = 0;
    int contador;
    for(contador = 0; contador < tamanho; contador++){
        soma = vetor[contador] + soma;
    }
    return soma/tamanho;

}

int main(void){
    int tamanho = 5;
    int i;
    float resultadoMedia;
    int * vetor = (int*) malloc(tamanho * sizeof(int));

    printf("insira os valores para o vetor:\n");
    for(i = 0; i < tamanho; i++){
        scanf("%d", &vetor[i]);
    }

    resultadoMedia = media(tamanho, vetor);
    printf("o resultado da media é: %f", resultadoMedia);

    free(vetor);
    return 0;
}