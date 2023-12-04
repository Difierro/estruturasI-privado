#include <stdlib.h>
#include <stdio.h>

int *criaVariavel(){
    int variavel = 5;

    return &variavel;
}

int main(){
    int *ponteiro = criaVariavel();

    printf("%d", *ponteiro);

    return 0;
}